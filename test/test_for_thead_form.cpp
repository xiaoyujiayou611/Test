#include <iostream>
#include <bits/types.h>
#include <thread>
#include <chrono>
#include <unistd.h>
#include <sys/syscall.h>
#include <atomic>
#include <vector>
#include <signal.h>
#include <mutex>


class MyWorker {
public:
    MyWorker() {}
    void Start(int i) {
        if (!stoped) {
            Work(i);
        }
    }

    void Work(int i) {
        while(!stoped) {
            std::this_thread::sleep_for(std::chrono::microseconds(100));
            
            std::cout << "thread " << i << ":"<< std::this_thread::get_id() << std::endl;
        }
    }

    void Stop() {
        stoped = true;
    }
    
private:
    
    bool stoped{false};

};

bool g_stop = false;

void sig_int_handler_master(void* arg) {

    sigset_t *set = (sigset_t *) arg;
    int s, sig;

    for (;;) {
        s = sigwait(set, &sig);
        g_stop = true;
        std::cout << "catched by master." << std::endl;
        break;
    }


}


int main(int argc, char** argv) {
    std::vector<MyWorker> worker_v;
    for (int i = 0; i < 2; i++) {
        worker_v.emplace_back(MyWorker());
    }

    sigset_t set;
    sigemptyset(&set);
    sigaddset(&set, SIGINT);
    sigaddset(&set, SIGQUIT);
    sigaddset(&set, SIGTERM);
    int sig;
    int s = pthread_sigmask(SIG_BLOCK, &set, NULL);
    //s = sigwait(&set, &sig);
    std::thread t_master(sig_int_handler_master, (void*)&set);
    std::cout << t_master.get_id() << std::endl;
    int i = 0;
    for (auto &worker : worker_v) {
        worker.Start(i++);
    }

    while (!g_stop) {
        std::this_thread::sleep_for(std::chrono::microseconds(100));
    }

    for (auto &worker : worker_v) {
        worker.Stop();
    }

    t_master.join();

    return 0;
}