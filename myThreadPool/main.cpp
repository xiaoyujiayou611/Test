#include <iostream>
#include <csignal>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "task_manager.h"
#include "thread_pool.h"
#include "task.h"
bool g_is_stop = false;
void signal_handler (int signal) {
    g_is_stop = true;
    ThreadPool::Instance()->Stop();
    std::cout << "stop......" << std::endl;
}
int main(int argc, char**argv) {
    std::signal(SIGINT, signal_handler ); // ctrl-c
    for (int i = 0; i < 10; i++) {
        auto lamda = [=]() {
            
            srand (time(NULL));
            int ss = rand() % 10 + 1;
            int result = ss * ss;
            std::cout << "result is: " << result << std::endl;
        };
        Task task(i, std::move(lamda));
        TaskManager::Instance()->Push(task);
    }
    ThreadPool::Instance()->Start();
    while(!g_is_stop) {
       // std::cout << "running......" << std::endl;
    }
    return 0;
}