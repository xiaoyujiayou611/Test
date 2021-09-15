/*
 * @Author: xiaoyu
 * @Date: 2021-09-13 15:30:46
 * @LastEditors: xiaoyu
 * @Description: 
 */
#include <iostream>
#include <unordered_set>
#include <set>




namespace test {
struct Test{
    std::string s;
    int a;
    int b;
    Test& operator=(const Test& other) {
        this->a = other.a;
        this->b = other.b;
        this->s = other.s;
        return *this;
    }

    friend bool operator<(const Test& lhs, const Test& rhs) {
        return (lhs.a < rhs.a && lhs.b < rhs.b && lhs.s < rhs.s);
    }
};

}

class Hash {
public:
    std::size_t operator() (const test::Test& test) {
        return std::hash<std::string>()(test.s) ^
               std::hash<int>()(test.a) ^ 
               std::hash<int>()(test.b);
    }
};



int main (int argc, char** argv) {
    std::set<struct test::Test> test_set;
    test::Test tmp = {{"a", 1, 2}};
    test_set.emplace(tmp);
    // tmp = {"b", 3, 4};
    // test_set.emplace(tmp);
    // test_set.emplace(test::Test{"c", 4, 5});
    // test_set.emplace(test::Test{"a", 1, 2});

    // for (auto& item : test_set) {
    //     std::cout << item.a << " "<< item.b << " "<< item.s << std::endl;
    // }
    return 0;
}