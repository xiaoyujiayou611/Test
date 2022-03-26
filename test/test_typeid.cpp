#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>
#include <any>

class Base {
public:
    virtual void func() const {
        std::cout << "in base" << std::endl;
    }

};

class Derived : public Base {
public:
    void func() const {
        std::cout << "in derived" << std::endl;
    }
};

void test_string(const std::string& val) {
    std::cout << "val is:" << val << std::endl;
}
void test_bool(const bool& val) {
    std::cout << "bool_val:" << val << std::endl;
}
void test_float(const float& val) {
    std::cout << "float_val:" << val << std::endl;
}


template <class T, typename std::enable_if<!std::is_base_of<Base, T>::value>::type* = nullptr> 
void test_typeid(const T& val) {
   
    if (typeid(T) == typeid(bool)) {
        std::cout << "type is bool" << std::endl; 
        test_bool(val);
    } else if (typeid(val) == typeid(double)) { 
        test_float(val);
    } else {
        std::cout << "type is unknown" << std::endl;
    }
}

template <>
void test_typeid(const std::string& val) {
    if (typeid(val) == typeid(std::string)) {
        test_string(std::string(val));
        std::cout << "type is string" << std::endl;
    }
}
//, typename std::enable_if<std::is_base_of<Base, T>::value>::type* = nullptr
// template <class T>
// void test_typeid<T*>(const T* val) {
//     if (std::is_base_of<Base, T>::value) {
//         val->func();
//     }
// }
template <typename T, typename std::enable_if<std::is_base_of<Base, T>::value>::type* = nullptr>
void test_typeid(const T& val) {
    if (typeid(val) == typeid(Derived)) {
       val.func();
       std::any tmp{val};
       std::cout << "successfully." << std::endl;
    }
}


int main(int argc, char** argv) {
    Derived derived;
    Base& base = derived;
    base.func();

    //std::cout << typeid(base).name() << std::endl;
    Base* pb = new Derived();
    //std::cout << typeid(*pb).name() << std::endl;
    bool result = ( typeid(base) == typeid(*pb) ? true : false);
    std::cout << "result is: " << result << std::endl;
    bool result1 = ( typeid(base).before(typeid(pb)) ? true : false);
    std::cout << "result1 is: " << result1 << std::endl;

    bool var = false;
    std::string hello = "hello";
    std::vector<std::string> cmd;
    cmd.push_back("hello");
    cmd.push_back("world");
    cmd.push_back("true");
    // std::cout << "bool's type_id: " << (typeid(var) == typeid(4 / 4 == 1)) << std::endl;
    test_typeid(cmd[2] == "true");
    std::string ss = "hello world.";
    test_typeid(3.1415926);
    test_typeid(ss);
    Derived type_derive;
    //type_derive;
    test_typeid<Derived>(type_derive);
    return 0;
}
