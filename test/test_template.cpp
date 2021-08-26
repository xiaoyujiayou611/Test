#include <iostream>
#include <type_traits>
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
int main(int argc, char** argv) {
    int a = 1;
    int b = 2;
    void * p = 0;
    bool bl = false;
    func<int>(bl);
    func(a);
    func(a, b);
    
    return 0;
}
