#include <cstdio>
#include <cstdlib>
#include <sys/types.h>
#include <sys/wait.h>
#include <cstring>
#include <thread>
#include <chrono>
#include <iostream>
#include <signal.h>

bool g_stop = false;
bool g_thread_stop = false;

void sig_int_handler_master(void* arg) {

    sigset_t *set = (sigset_t *) arg;
    int s, sig;

    for (;;) {
        s = sigwait(set, &sig);
        g_stop = true;
        g_thread_stop = true;
        std::cout << "catched by master." << std::endl;
        break;
    }

    
}

void sig_int_handler_thread(int sig) {
    g_thread_stop = true;
    g_stop = true;
    std::cout << "catched by thread."  << std::endl;
}

void sig_int_handler_thread_1(int sig) {
    g_thread_stop = true;
    g_stop = true;
    std::cout << "catched by thread_1."  << std::endl;
}

void thread_func() {

    struct sigaction action;
	memset(&action, 0, sizeof(action));
	action.sa_handler = sig_int_handler_thread;

    sigaction(SIGINT, &action, NULL);
    sigaction(SIGQUIT, &action, NULL);
    sigaction(SIGTERM, &action, NULL);

    while (!g_thread_stop) {
        int64_t sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += i*i;
            std::cout << "sum: " << sum << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
    
}

void thread_func1() {

    struct sigaction action;
	memset(&action, 0, sizeof(action));
	action.sa_handler = sig_int_handler_thread_1;

    sigaction(SIGINT, &action, NULL);
    sigaction(SIGQUIT, &action, NULL);
    sigaction(SIGTERM, &action, NULL);

    while (!g_thread_stop) {
        int64_t sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += i*i;
            std::cout << "sum: " << sum << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
    
}


int main(int argc, char** argv) 
{
    sigset_t set;
    sigemptyset(&set);
    sigaddset(&set, SIGINT);
    sigaddset(&set, SIGQUIT);
    sigaddset(&set, SIGTERM);
    int sig;
    int s = pthread_sigmask(SIG_BLOCK, &set, NULL);
    //s = sigwait(&set, &sig);
    std::thread t_master(sig_int_handler_master, (void*)&set);
    std::thread t(thread_func);
    std::thread t1(thread_func1);
   
    
    while(!g_stop) {
        std::this_thread::sleep_for(std::chrono::microseconds(100));
    }
    t_master.join();
    t.join();
    t1.join();
    return 0;
}