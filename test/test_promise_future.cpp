#include <iostream>
#include <future>
#include <thread>

void thread_func(std::future<int>& fut) {
    int value = fut.get();
    std::cout << "value is : " << value << std::endl;
}

int main(int argc, char** argv) {
    std::promise<int> prom;
    std::future<int> fut = prom.get_future();
    std::thread t(thread_func, std::ref(fut));
  
    prom.set_value(20.256);
    t.join();
    return 0;
}