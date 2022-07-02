#include <iostream>
class A {
public:
A() {
    std::cout << "construct~" << std::endl;
}
~A() {
    std::cout << "deconstruct~" << std::endl;
} 
};
int main() {
    // 数组指针
    A (*p)[6] = new A[2][6]();
    delete p; //析构和构造都是12次
    // 指针数组
    A *p1 = new A[3]();
    delete p1; // 会出错

    return 0;
}