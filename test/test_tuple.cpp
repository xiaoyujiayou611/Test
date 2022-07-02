#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <memory>
#include <thread>

void test_func(const std::string& ss) {
    std::shared_ptr<std::string> sp = std::make_shared<std::string>(ss);
    std::cout << "ss's addr:" << &ss << std::endl;
    std::cout << "ss in sp's addr" << sp.get() << std::endl;
    std::cout << "sp 's addr" << &sp << std::endl;
    std::cout << "*************************" << std::endl;
    std::thread t([sp] {
        while(true) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "value:" << *sp << std::endl;
            std::cout <<  "sp's addr:" << &sp << std::endl;
            std::cout << "ss in sp's addr in func:" << sp.get() << std::endl;
        }
    });
    t.join();
}

int main() {
    std::vector<std::tuple<std::string, bool, int>> test_vec;
    test_vec.emplace_back(std::make_tuple("hello_world", false, 99));
    test_vec.emplace_back(std::make_tuple("hello_world1", false, 199));
    test_vec.emplace_back(std::make_tuple("hello_world2", true, 299));

    for (auto& item : test_vec) {
        std::cout << "data: " << std::get<0>(item) << std::get<1>(item) << std::get<2>(item) << std::endl;;
    }

    test_func("i love my nation.");
    return 0;
}