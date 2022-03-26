#include <iostream>
#include <atomic> 
int main() {
    std::atomic<int> a{0};
    a.fetch_add(1);
    std::cout << a << std::endl;
    return 0;
}
