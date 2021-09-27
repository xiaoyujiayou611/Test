/*
 * @Author: xiaoyu
 * @Date: 2021-09-26 15:01:58
 * @LastEditors: xiaoyu
 * @Description: 
 */
#include <iostream>
#include <condition_variable>
#include <mutex>
#include <thread>
#include <chrono>


class MySemaphore {
public:
    MySemaphore(int count = 0): count_(count){}
    void Wait() {
        std::unique_lock<std::mutex> lk(mtx_);
        cv_.wait(lk, [=] {return count_ > 0;});
        count_ --;
        // if (--count_ < 0) {
        //     cv_.wait(lk);
        // }
    }
    
    void Signal() {
        std::unique_lock<std::mutex> lk(mtx_);
        // if (++count_ <= 0 ) {
        //     cv_.notify_one();
        // }

        count_ ++;
        cv_.notify_all();
    }

private:
    int count_;
    std::mutex mtx_;
    std::condition_variable cv_;
};

MySemaphore g_semaphore(1);
void thread_func(int index) {
    g_semaphore.Wait();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "thread " << index << ": " 
        << std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count() << std::endl;
    g_semaphore.Signal();
}

std::condition_variable g_cv;
bool flag = true;
std::mutex g_mtx;

void Test1() {
    std::unique_lock<std::mutex> lk(g_mtx);
    std::cout << "test1" << std::endl;
    g_cv.wait(lk, [=]{ return flag;});
    //g_cv.wait(lk);
    int sum = 30*30 + 40*40;
    lk.unlock();
    std::cout << "sum: " << sum << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    //flag = false;
    g_cv.notify_one();
}

void Test2() {

    std::unique_lock<std::mutex> lk(g_mtx);
    std::cout << "test2" << std::endl;
    
    
    g_cv.wait(lk);
    std::cout << "test2 is notified." << std::endl;
    
    //std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    //std::cout << "test2 notify test1" << std::endl;
    
    //g_cv.notify_one();


}


int main(int argc, char** argv) {
    // std::thread t1(thread_func, 1);
    // std::thread t2(thread_func, 2);
    // std::thread t3(thread_func, 3);
    std::thread t1(Test1);
    std::thread t2(Test2);

    t1.join();
    t2.join();
    //t3.join();
    return 0;
}