#pragma once

#include <iostream>

#define REGISTER_CLASS(ClassName,Type) \
class ClassName {                      \
public:                                \
    ClassName(const Type& t) : x(t) {} \
    void print_x();                         \
private:                               \
    Type x;                            \
};


REGISTER_CLASS(Test, int)