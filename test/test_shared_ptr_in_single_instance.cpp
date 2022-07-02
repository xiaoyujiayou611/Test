#include <iostream>
#include <memory>
#include <string>

class TestInstance {
public:
    static TestInstance* instance() {
        static TestInstance* instance = nullptr;
        if (instance == nullptr) {
            instance = new TestInstance();
        }
        return instance;
    }

    bool init(std::shared_ptr<std::string> arg) {
        _str_ptr = std::make_shared<std::string>("hello_world");
        arg = _str_ptr;
        std::cout << "init use_count:" << _str_ptr.use_count() << std::endl;
         std::cout << "init arg use_count:" << arg.use_count() << std::endl;
        return true;
    }

    bool release() {
        std::cout << "str's value:" << *_str_ptr << std::endl;   
        std::cout << "init use_count:" << _str_ptr.use_count() << std::endl;
        return true;
    }

private:
    TestInstance() {}
    std::shared_ptr<std::string> _str_ptr;
};


int main() {
    std::shared_ptr<std::string> tmp;
    std::cout << " 1 tmp use_count:" << tmp.use_count() << std::endl;
    TestInstance::instance()->init(tmp);
    std::cout << "2 tmp use_count:" << tmp.use_count() << std::endl;
    TestInstance::instance()->release();
    return 0;
}