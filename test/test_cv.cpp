#include <iostream>
#include <condition_variable>
#include <atomic>
#include <thread>
#include <vector>


std::mutex g_mtx;
std::condition_variable g_cv;
std::atomic<bool> flag{false};
void func (const int i) {
    {
        std::unique_lock<std::mutex> lk(g_mtx);
        g_cv.wait(lk, []{
            return !flag.load(std::memory_order_relaxed);
        });

    }
   flag.store(true);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    auto tmp = i * i * i;
    std::cout << "i * i * i: " << tmp << std::endl;
    flag.store(false);
    g_cv.notify_one();
}

int main() {
    // std::vector<std::thread> t_v;
    // for (int i = 0; i < 5; i++) {
    //     std::thread&& t = std::thread(func, i);
    //     t_v.emplace_back(std::move(t));
    // }

    // for (int i = 0; i < 5;  i++) {
    //     t_v[i].join();
    // }
    func(10);
    return 0;
}