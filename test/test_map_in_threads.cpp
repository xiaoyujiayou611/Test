#include <unordered_map>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <mutex>

class Data {
public:
    Data(const int& a, const int& b, const int& c):
    a_(a), b_(b), c_(c)
    {

    }
    Data() {}
    friend std::ostream& operator<< (std::ostream& out, Data& data) {
        out << "a: " << data.a_ << " ";
        out << "b: " << data.b_ << " ";
        out << "c: " << data.c_ << std::endl;
        return out;
    }
    void update_values(){
        a_ += 20;
        b_ += 20;
        c_ += 20;
    }
private:
    int a_;
    int b_;
    int c_;
};
std::unordered_map<std::string, Data> g_map;
std::mutex g_mtx;

void common_func(const std::string& key) {
    if(g_map.find(key) != g_map.end()) {
        g_map[key].update_values();
    }
}

void erase_func(const std::string& key) {
    std::lock_guard<std::mutex> lk(g_mtx);
    if(g_map.find(key) != g_map.end()) {
        g_map.erase(key);
    }
}

void thread_func1() {
    Data d1(1,2,3);
    g_map["thread1"] = d1;
    std::this_thread::sleep_for(std::chrono::microseconds(20));
    common_func("thread1");
    std::this_thread::sleep_for(std::chrono::microseconds(20));
    erase_func("thread1");
}

void thread_func2() {
    Data d2(4,5,6);
    g_map["thread2"] = d2;
    std::this_thread::sleep_for(std::chrono::microseconds(30));
    common_func("thread2");
}
void thread_func3() {
    Data d3(7,8,9);
    g_map["thread3"] = d3;
    std::this_thread::sleep_for(std::chrono::microseconds(15));
    common_func("thread3");
    std::this_thread::sleep_for(std::chrono::microseconds(15));
    erase_func("thread3");
}
void thread_func4() {
    Data d4(10,11,12);
    g_map["thread4"] = d4;
    std::this_thread::sleep_for(std::chrono::microseconds(25));
    common_func("thread4");
}
void thread_func5() {
    Data d5(13,14,15);
    g_map["thread5"] = d5;
    std::this_thread::sleep_for(std::chrono::microseconds(20));
    common_func("thread5");
    std::this_thread::sleep_for(std::chrono::microseconds(20));
    erase_func("thread5");
}

void thread_func6() {
    Data d6(16,17,18);
    g_map["thread6"] = d6;
    std::this_thread::sleep_for(std::chrono::microseconds(15));
    common_func("thread6");
}

void thread_func7() {
    Data d7(19,20,21);
    g_map["thread7"] = d7;
    std::this_thread::sleep_for(std::chrono::microseconds(15));
    common_func("thread7");
}

void thread_func8() {
    Data d8(22,23,24);
    g_map["thread8"] = d8;
    std::this_thread::sleep_for(std::chrono::microseconds(15));
    common_func("thread8");
}

void thread_func9() {
    Data d9(25,26,27);
    g_map["thread9"] = d9;
    std::this_thread::sleep_for(std::chrono::microseconds(20));
    common_func("thread9");
}

int main(int argc, char** argv) {
    std::thread t1(thread_func1);
    std::thread t2(thread_func2);
    std::thread t3(thread_func3);
    std::thread t4(thread_func4);
    std::thread t5(thread_func5);
    std::thread t6(thread_func6); 
    std::thread t7(thread_func7);
    std::thread t8(thread_func8);
    std::thread t9(thread_func9);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    t7.join();
    t8.join();
    t9.join();
    for (auto&& iter : g_map) {
        std::cout << iter.first << ": " << iter.second << std::endl;
    }
    return 0;

}
