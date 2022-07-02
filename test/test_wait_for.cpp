#include <iostream>
#include <condition_variable>
#include <mutex>
#include <thread>
#include <atomic>

int main() {
    std::atomic<bool> flag{false};
    std::mutex mtx;
    std::condition_variable cv;
    std::thread t([&]{
        std::cout << "in thread." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::unique_lock<std::mutex> lk(mtx);
        flag.store(true, std::memory_order_relaxed);
       // lk.unlock();
        cv.notify_one();
        std::cout << "finishing." << std::endl;
    });

    std::unique_lock<std::mutex> lk(mtx);
    if (cv.wait_for(lk, std::chrono::seconds(3), [&] {
        return flag.load(std::memory_order_relaxed);
    })) {
        std::cout << "wait finishing." << std::endl;
    } else {
        std::cout << "Failed to wait." << std::endl;
    }
    lk.unlock();

    t.join();
    return 0;
}
