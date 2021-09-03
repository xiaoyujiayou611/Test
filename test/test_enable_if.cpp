#include <iostream>
#include <type_traits>

template <class T, typename std::enable_if<!std::is_integral<T>::value>::type* = nullptr> 
void add (T& a, T& b) {
    T c = a * a + b * b;
    std::cout << "is not int, sum is: " << c << std::endl;
}

template <class T, typename std::enable_if<std::is_integral<T>::value>::type* = nullptr>
void add (T& a, T& b) {
    T c = a * a + b * b;
    std::cout << "is int, sum is " << c << std::endl;
}

int main(int argc, char** argv) {
    int a = 3, b = 4;
    add(a, b);
    float c = 3.3, d = 4.4;
    add(c, d);
    return 0;
}