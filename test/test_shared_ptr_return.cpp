#include <iostream>
#include <memory>
#include <string>
#include <vector>

std::vector<std::string> g_v;

const std::shared_ptr<std::string> func(const int i) {
    std::shared_ptr<std::string> tmp = nullptr;
    if (g_v.size() > i) {
        tmp = std::make_shared<std::string>(g_v[i]);
    }
    
    return tmp;
}

int main(int argc, char* argv[]) {
    for (int i = 0; i < 10; i++) {
        std::string tmp = "hello_world" + std::to_string(i);
        g_v.emplace_back(tmp);
    }

    auto ptr = func(11);
    std::cout << *ptr << std::endl;
}