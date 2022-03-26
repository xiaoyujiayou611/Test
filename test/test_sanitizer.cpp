#include <iostream>
#include <thread>
#include <memory>
#include <mutex>

int global = 0;
std::mutex g_mtx;
void funcB();
void funcA() {
    //std::lock_guard<std::mutex> lk(g_mtx);
    std::cout << "func A" << std::endl;
    global++;
    std::cout << "func A: " << global << std::endl;
    global++;
   // funcB();
   
}

void funcB() {
    //std::lock_guard<std::mutex> lk(g_mtx);
    std::cout << "func A" << std::endl;
    global--;
    std::cout << "func B: " << global << std::endl;
    //funcA();
}

int main()
{
    int* p = new int(100);
    int a[2] = {1, 2};
    int b = a[10000000000000000000000000000000];
    std::cout << b << std::endl;
    // std::thread ta(funcA);
    // std::thread tb(funcB);
    // ta.join();
    // tb.join();
    //funcA();
    return 0;
}