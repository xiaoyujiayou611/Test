#include <thread>
#include <iostream>
#include <chrono>

void thread_func() {
    while (true) {
        std::cout << "my thread"<< std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

int main(int argc, char** argv) {

    std::thread tmp(thread_func);
    if (tmp.joinable()) {
        tmp.detach();
    }
    std::cout << "oh yes." << std::endl;
    return 0;
}