#include <iostream>
#include <type_traits>
#include <typeinfo>
#include <unordered_map>
#include <memory>
#if 0
template <class T>
void func(T& a, typename std::enable_if<std::is_integral<T>::value>::type* = 0) {
    std::cout << "arg is a integral number." << std::endl;
}

void func(void) 
{
    std::cout << "just a test for func defination of  arg is void";
}
#else
template <class T>
void func( typename std::enable_if<std::is_integral<T>::value, bool>::type = 0) {
    std::cout << "there is no arg." << std::endl;
}

template<class T, class = typename std::enable_if<std::is_integral<T>::value, bool>::type>
void func(T& a) {
    std::cout << "a: " << a << std::endl;
}

template<class T>
typename std::enable_if<std::is_integral<T>::value, bool>::type
func (T& a1, T& b1) {
    std::cout << "a1: " << a1 << std::endl;
    std::cout << "b1: " << b1 << std::endl;
    return true;
}
#endif

template <typename T>
class Base {
    Base() {
        std::cout << "I am the base." << std::endl;
    }
    virtual void process(const T& val) = 0;
};

template <typename T>
class Derived : public Base {
    Derived() {
        std::cout << "I am the derived." << std::endl;
    }

    void process(const T& val) {
        std::cout << "T is " << typeid(T).name() << std::endl;
    }
};

int main(int argc, char** argv) {
    // int a = 1;
    // int b = 2;
    // void * p = 0;
    // bool bl = false;
    // func<int>(bl);
    // func(a);
    // func(a, b);
    
    std::unordered_map<std::string, std::shared_ptr<Base>> test_map;

    test_map["int"] = std::make_shared<Derived<int>>();
    test_map["int"]->process(3);
    return 0;
}
