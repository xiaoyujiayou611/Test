#include <iostream>
#include <thread>
#include <condition_variable>
#include <memory>
#include <vector>

std::condition_variable g_cv;
std::mutex g_mtx;

void func(int index) {
    std::cout << "thread: " << index << " is waiting..." << std::endl;
    std::unique_lock<std::mutex> lk(g_mtx);
    g_cv.wait(lk);
    std::cout << "thread: " << index << " is notified." << std::endl;
}



int main(int argc, char** argv) {
    // std::this_thread::sleep_for(std::chrono::seconds(10));
    // std::vector<std::thread> t_v;
    // for (int i = 0; i < 5; i++) {
    //     t_v.emplace_back(std::thread(func, i));
    //     std::this_thread::sleep_for(std::chrono::microseconds(1000));
    // }

    
    // // g_cv.notify_one();
    // // g_cv.notify_one();
    // // g_cv.notify_one();
    // // g_cv.notify_one();
    // // g_cv.notify_one();
    
    // for (int i = 0; i < 5; i++) {
    //     t_v[i].join();
    // }
    int i = 0;
    std::unique_lock<std::mutex> lk(g_mtx);
    g_cv.wait(lk, [&]{return i == 1;});

    // std::thread t([&]{
    //     std::unique_lock<std::mutex> lk(g_mtx);
    //     i = 1;
    //     g_cv.notify_one();
    // });
    
    // t.join();

    return 0;
}