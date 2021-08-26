#include <iostream>

void func(int& i) {
    std::cout << "just a test";
}

int main(int argc, char** argv) {
    int j = 1;
    func(j);
    return 0;
}
