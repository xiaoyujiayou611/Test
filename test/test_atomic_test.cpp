#include <iostream>
#include <atomic>
#include <thread>
#include <mutex>
#include <chrono>
#include <condition_variable>

class Test {
public:
  static Test* Instance() {
    static Test* instance = nullptr;
    if (instance == nullptr) {
      instance = new Test();
    }
    return instance;
  }
  
  void func() {
    if (!flag.exchange(true)) {
      std::this_thread::sleep_for(std::chrono::microseconds(100));
      std::cout << "first in." << std::endl;
      std::lock_guard<std::mutex> lk(mtx);
      cv.notify_all();
    } else {
      std::unique_lock<std::mutex> lk(mtx);
      cv.wait(lk);
      std::cout << "more in." <<  std::endl; 
    }
  }

  
  ~Test() {
    flag.store(false);
    delete Instance();
  }

private:
  Test() {}
  std::atomic<bool> flag{false};
  std::mutex mtx;
  std::condition_variable cv;
};

int main (int argc, char** argv) {
  Test* ptr = Test::Instance();
  std::thread t1(&Test::func, Test::Instance());
  std::thread t2(&Test::func, Test::Instance());
  std::thread t3(&Test::func, Test::Instance());
  std::thread t4(&Test::func, Test::Instance());
  t1.join();
  t2.join();
  t3.join();
  t4.join();

  return 0;
}