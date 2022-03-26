#include <iostream>
#include <vector>
class Base1 {
public:
    void set_val(const int val) {
        val_ = val;
    }
    const int get_val( ) {
        return val_;
    }

    virtual void print() = 0;

private:
    int val_;
};

class Base2 {
public:
    void set_ss(const std::string& ss) {
        ss_ = ss;
    }
    const std::string& get_ss() {
        return ss_;
    }
    void print() {
        std::cout << "base2: " << get_ss() << std::endl;
    }
private:
    std::string ss_;
};

class Derived : public Base1, public Base2 {
public:
    void print() override {
       Base2::print();
    }
};

int main(int argc, char** argv) {
    Base1* obj = new Derived();
    obj->set_val(10);
    Derived* tmp = dynamic_cast<Derived*>(obj);
    tmp->set_ss("hello_world");
    obj->print();
    delete obj;

    // std::vector<int> test_v;
    // std::vector<int>::iterator tmp;
    // for (int i = 1; i < 10; i++) {
    //     test_v.emplace_back(i);
    // }

    // for (auto iterator = test_v.begin(); iterator != test_v.end(); iterator++) {
    //     if (*iterator == 1) {
    //         tmp = iterator;
    //     } else {
    //         std::cout << *iterator << std::endl;
    //     }
       
    // }
    // std::cout << *tmp << std::endl;
    return 0;
}