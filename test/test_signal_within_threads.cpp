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
    int count = 0;
    while (!g_stop) {
        count++;
        std::cout << "count:" << count << std::endl;
        if (count > 1000) {
            std::cout << "raise a signal term." << std::endl;
            raise(SIGTERM);
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "raise a signal kill." << std::endl;
            raise(SIGKILL);

        }
    }
    t_master.join();

    return 0;
}