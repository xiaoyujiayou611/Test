#include <csignal>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <thread>
#include <condition_variable>
#include <functional>
#include <atomic>
#include <memory>
#include <vector>
#include <queue>

class Task {
public:
    Task() : id_(static_id_++) {
    }
    void run() {
        std::cout << "thread id:" << std::this_thread::get_id() << std::endl;
        func_();
    }
    void set_func(std::function<void()>&& f) {
        func_ = std::move(f);
    }

    const uint64_t get_id() {
        return id_;
    }
private:
    std::function<void()> func_;
    static std::atomic<uint64_t> static_id_;
    uint64_t id_;
};

std::atomic<uint64_t> Task::static_id_{0};

class ThreadPool {
public:
    ThreadPool(const uint16_t size) : pool_size_(size) {

    }

    void submit_task(std::shared_ptr<Task>&& task) {
        std::unique_lock<std::mutex> lk(task_queue_mtx_);
        task_queue_.emplace(std::move(task));
        std::cout << "task_queue's size:" <<    task_queue_.size() << std::endl;

        lk.unlock();
        task_queue_cv_.notify_one();
    }

    void start() {
        stop_.store(false, std::memory_order_relaxed);
        for (int i = 0; i < pool_size_; i++) {
            threads_.emplace_back([this] {
                while(!stop_.load(std::memory_order_relaxed)) {
                    std::unique_lock<std::mutex> lk(task_queue_mtx_);
                    task_queue_cv_.wait(lk, [this] {
                        return stop_.load(std::memory_order_relaxed) || task_queue_.size() > 0;
                    });
                    if (stop_.load(std::memory_order_relaxed)) {
                        lk.unlock();
                        return;
                    }
                    //std::unique_lock<std::mutex> lkk(task_queue_mtx_);
                    auto task = task_queue_.front();
                    std::cout << "task_id:" << task->get_id() << std::endl;
                    task_queue_.pop();
                    lk.unlock(); 
                    task->run();
                }
            });
        }
    }

    void stop() {
        stop_.store(true, std::memory_order_relaxed);
        task_queue_cv_.notify_all();
        for (int i = 0; i < pool_size_; i++) {
            std::cout << "thread i:" << i << std::endl;
            threads_[i].join();
        }
    }

private:
    std::vector<std::thread> threads_;
    uint16_t pool_size_;
    std::queue<std::shared_ptr<Task>> task_queue_;
    std::condition_variable task_queue_cv_;
    //std::mutex task_cv_mtx_;
    std::mutex task_queue_mtx_;
    std::atomic<bool> stop_{false};

};


class Test {
public:
    Test (const int i) : i_(i) {
        flag_.store(false);
    }
    const int get_i() {
        return i_;
    }
    
    void set_i(const int j) {
        i_ = j;
        
    }

    void process() {
        {
            std::unique_lock<std::mutex> lk(mtx_);
            cv_.wait(lk, [this ] {
                return !flag_.load(std::memory_order_relaxed);
            });
        } 
        flag_.store(true);
        std::cout << "thread in thread." << std::endl;
        for (int i = 0; i < 10; i++) {
           // std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "thread in thread's i:" << i << std::endl;
            std::cout << "thread in thread's id:" << std::this_thread::get_id() << std::endl;
        }
        flag_.store(false);
        cv_.notify_one();
    }

private:
    int i_;
    std::condition_variable cv_;
    std::mutex mtx_;
    std::atomic<bool> flag_{false};
};
bool g_stop = false;

void signal_handler(void* arg) {
    sigset_t *set = (sigset_t *) arg;
    int s, sig;

    for (;;) {
        s = sigwait(set, &sig);
        g_stop = true;
        std::cout << "catched by master thread." << std::endl;
        break;
    }
}


int main(int argc, char** argv) {

    sigset_t set;
    sigemptyset(&set);
    sigaddset(&set, SIGINT);
    int s = pthread_sigmask(SIG_BLOCK, &set, NULL);
     std::thread t_signal(signal_handler, (void*)&set);
    std::shared_ptr<ThreadPool> thread_pool = std::make_shared<ThreadPool>(5);
    std::thread t_test([] {
        Test test(10);
        for (int i = 0; i < 5; i++) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            test.set_i(i*4);
        }
    });

   thread_pool->start();
    for (int i = 0; i < 5; i++) {
        std::shared_ptr<Test> test = std::make_shared<Test>(2);
        std::cout <<  "test's addr:" << &test << std::endl;
        Task task;
        //std::cout << "i before:" <<  i  << std::endl;
        task.set_func([=] {
            std::cout << "test's addr in thread:" << &test << std::endl;
           auto  j = test->get_i();
           //static int j = 0;
            auto sum = j* j * j;
            std::cout << "j:" << j<< std::endl;
            std::cout << "sum: " << sum << std::endl;

            for (int k = 0; k < 10; k++) {
                std::shared_ptr<Task> task = std::make_shared<Task>();
                task->set_func([=] {
                    test->process();
                }); 
                thread_pool->submit_task(std::move(task));
                std::cout << "k:" << k << std::endl;
            }
            std::cout << "j:" << j<< std::endl;
            std::cout << "sum: " << sum << std::endl;

        });
        thread_pool->submit_task(std::make_shared<Task>(task));
        //std::cout << "i after:" <<  i  << std::endl;

    } 
    
    while (!g_stop) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
   thread_pool->stop();
   t_test.join();
   t_signal.join();
    return 0;
}