#include <iostream>
#if 0
int add(const int& a, const int& b) {
    std::cout << 1 << std::endl;
    return a + b;
}
#else
int add(int&& a, int&& b) {
    std::cout << 2 << std::endl;
    return a + b;
}

template <typename T> 
T add(T&& a, T&& b) {
    return std::forward<T>(a) + std::forward<T>(b);
}

#endif
int main(int argc, char** argv) {
    const int a = 1;
    const int b = 1;
    int result = add(a, b);
    std::cout << std::is_lvalue_reference<int>(result) << std::endl;
    return 0;
}
