#include <iostream>
#include <string>
#include <memory>
#include <unordered_map>
#include "test_define.hpp"
//#define SIM 

#ifdef SIM
#define TEST(a, b)  \
    MYFUNC(a, \
      b)  \
    test_func_2(a);
#else
#define TEST(a) \
    std::cout << "disable" << std::endl;
#endif

#define MYFUNC(a, b)  { \
       test_func(a); }

void test_func(const int a) {
    std::cout << "print a line: " << a << std::endl;
}

void test_func_2(const int a) {
    std::cout << "just a test!" << std::endl; 
    std::cout << "enable: " << a << std::endl; 
}

template <class T>
void test_func_(T& a) {
    std::cout << "a's value: " << a << std::endl;
}

bool test_func_(int a) {
    std::cout << "a's value: " << a << std::endl;
    return true;
}

const std::shared_ptr<std::string>& test_ret() {
    std::string tmp = "hello_world.";
    return std::make_shared<std::string>(tmp);
}

int main() {
    std::unordered_map<std::string, int> my_map{0};
    // auto x = test_ret();
    // std::cout << *x << std::endl;

    std::string key = "xiaoyu";
    if (my_map.find(key) != my_map.end()) {
        std::cout << "find them." << std::endl;
    } else {
        std::cout << "can't find them." << std::endl;
    }
    return 0;
}