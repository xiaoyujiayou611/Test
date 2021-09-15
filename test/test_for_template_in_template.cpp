/*
 * @Author: xiaoyu
 * @Date: 2021-09-09 15:23:54
 * @LastEditors: xiaoyu
 * @Description: 
 */
#include <vector>
#include <iostream>
template <class T>
struct Test{
    T a;
    T b;
};

template <class T>
class myVector {
public:
    void emplace_back(const Test<T>& t) {
        v.emplace_back(t);
    }

    const Test<T>& back() {
        return v.back();
    }
    void print() {
        for (int i = 0; i < v.size(); i++) {
            std::cout << v[i].a << ":" << v[i].b << std::endl;
        }
    }
private:
    std::vector<Test<T>> v;
};

int main(int argc, char** argv) {
    myVector<int> vec;
    Test<int> test{1, 2};
    vec.emplace_back(test);
    Test<int> test1{3, 4};
    vec.emplace_back(test1);
    
    Test<int> back = vec.back();
    std::cout << back.a <<  ":" << back.b << std::endl;
    return 0;
}