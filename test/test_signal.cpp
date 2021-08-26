#include <cstdio>
#include <cstdlib>
#include <sys/types.h>
#include <sys/wait.h>
#include <cstring>
#include <thread>
#include <chrono>
#include <iostream>

bool g_stop = false;
void sig_kill_handler(int sig) {
    g_stop = true;
    std::cout << "test quit." << std::endl;
}
void thread_func() {
    int64_t sum = 0;
    for (int i = 0; i < 1000; i++) {
        sum += i*i;
    }
    raise(SIGTERM);
    std::this_thread::sleep_for(std::chrono::seconds(5));
    raise(SIGKILL);
}

void bad_func() {
    while(true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main(int argc, char** argv) 
{
    struct sigaction action;
	memset(&action, 0, sizeof(action));
	action.sa_handler = sig_kill_handler;

    sigaction(SIGKILL, &action, NULL);
    sigaction(SIGQUIT, &action, NULL);
    sigaction(SIGTERM, &action, NULL);
    std::thread t(thread_func);
    std::thread t1(bad_func);
    while(!g_stop) {
        std::this_thread::sleep_for(std::chrono::microseconds(100));
    }
    return 0;
}