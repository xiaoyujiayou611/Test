#include <iostream>
#include <vector>
#include <string>

class TestVector {
public:
    TestVector(const int size) : vec_(size)
    {

    }
    void set_vec() {
        for (int i = 0; i < vec_.size(); i++) {
            
            vec_[i] = 10 + i;
            std::cout << "set: " << vec_[i] << std::endl;
        }
    }
    void print_vec() {
        for (int i = 0; i < vec_.size(); i++) {
            std::cout << vec_[i] << std::endl;
        }
    }
private:
    std::vector<int> vec_;
};

int main(int argc, char** argv) {
    TestVector test_vec(5);
    test_vec.set_vec();
    test_vec.print_vec();

    return 0;
}