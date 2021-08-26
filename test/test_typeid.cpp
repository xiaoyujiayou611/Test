#include <iostream>
#include <typeinfo>

class Base {
public:
    virtual void func() {
        std::cout << "in base" << std::endl;
    }

};

class Derived : public Base {
public:
    void func() {
        std::cout << "in derived" << std::endl;
    }
};


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


    return 0;
}
