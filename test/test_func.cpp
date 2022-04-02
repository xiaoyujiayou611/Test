#include <iostream>
#include <functional>
std::function<void()> func;
void process(const std::string& input) {
    std::cout << "input:" << input << std::endl;
}

void set_func(std::function<void()>&& f) {
    func = std::move(f);
}
// template <typename F, typename... Args>
// void f(F&& f, Args&&... args) {
//     func = std::bind(std::forward<F>(f), std::forward<Args>(args)...);
// }

int main() {
    set_func(std::move([=]() {
        process("hello_word");
    })); 
    func();
    return 0;
}