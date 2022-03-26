#include <iostream>
#include <memory>

int main(int argc, char** argv) {
    int i = 3;
    std::shared_ptr<int> j = std::make_shared<int>(i);
    std::weak_ptr<int> k = j;
    std::weak_ptr<int> n = k;
    std::cout << "n: " << *(n.lock()) << std::endl; 
    return 0;
}