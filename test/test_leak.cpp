#include <iostream>
#include <vector>
#include <memory>

std::vector<int*> v_test;
std::vector<std::shared_ptr<int>> v_shared;

void func_leak() {
    int *p = new int(8);
    //std::shared_ptr<int> p_s = std::make_shared<int>(88);
    v_test.push_back(p);
    //v_shared.push_back(p_s);
    // std::cout << "p_s's address:" << &p_s << std::endl;
    // std::cout << "v_shared[0]'s address:" << &v_shared[0] << std::endl;
    // std::cout << "p_s.count:" << p_s.use_count() << std::endl;
    // std::cout << "v_shared[0].cout:" << v_shared[0].use_count() << std::endl;
    //delete p;
}

void func() {
    func_leak();
}

int main() {
    func();
    std::cout << *v_test[0] << std::endl;
    // std::cout << *v_shared[0] << std::endl;
    // std::cout << "v_shared[0].cout:" << v_shared[0].use_count() << std::endl;
    v_test.clear();
    return 0;
}