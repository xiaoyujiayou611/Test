#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <set>
#include <map>

class Test {
public:
    Test(const int& t) : a(t) {
        std::cout << "construct " << a << std::endl;
    }

    Test(const Test& other) {
        std::cout << "copy construct." << std::endl;
        this->a = other.a;
    }
    
    Test& operator= (const Test& other) {
        a = other.a;
        return *this;
    }

    ~Test() {
        std::cout << "deconstrut "  << a << std::endl;
    }
    int val() {
        return a;
    }

    void set_val(int para) {
        a = para;
    }
private:
    int a;
};

// std::shared_ptr<Test> g_var = std::make_shared<Test>(50);
// std::shared_ptr<std::vector<Test>> g_vec_ptr;
// std::vector<Test>::iterator g_iter;
// std::shared_ptr<std::string> g_test_ptr; 

// void check(std::shared_ptr<Test>& para) {
//     para = std::make_shared<Test>(100);
// }

// void test() {
//     std::string* tmp = new std::string("hello world!");
//     g_test_ptr = std::make_shared<std::string>(*tmp);
// }

// void check_v(std::shared_ptr<std::vector<Test>>& para) {
//     std::vector<Test> tmp_v;
//     for (int i = 1; i <= 10; i++) {
//         Test tmp(i * 100);
//         tmp_v.emplace_back(tmp);
//     }
//     para = std::make_shared<std::vector<Test>>(tmp_v);
   
// }

// void process() {
//     std::shared_ptr<Test> x;
//     std::cout << "x:" << x <<  std::endl;
//     check(x);
//     g_var.swap(x);
// }

// void process_v(std::vector<Test>::iterator& tmp_iter) {
//     std::shared_ptr<std::vector<Test>> x;
//     check_v(x);
//     tmp_iter = x->begin() + 1;
//     g_iter = x->begin() + 2;
//     g_vec_ptr.swap(x);
// }
void test(Test* t) {
    std::cout << "delete" << std::endl;
    delete t;
}

const std::shared_ptr<int> test_return() {
    return nullptr;
}

void test_arg_shared_ptr(const std::shared_ptr<int> tmp) {
    std::cout << "in func:" << *tmp << std::endl;
}

void test_without_arg_shared_ptr(const int* tmp) {
    std::cout << "in func:" << *tmp << std::endl;
}

int main() {
    // std::vector<Test> tmp_v;
   
    // for (int i = 1; i <= 10; i++) {
    //     Test tmp(50 * i);
    //     tmp_v.emplace_back(tmp);
    // }
    // g_vec_ptr  = std::make_shared<std::vector<Test>>(tmp_v);
    // auto iter = g_vec_ptr->begin();
    // std::vector<Test>::iterator tmp_iter = iter;

    // std::cout << " before g_vec_ptr:" << g_vec_ptr << std::endl;
    // std::cout << " before iter: " << iter->val() << std::endl;

    // process_v(tmp_iter);
    // iter = tmp_iter;
    // std::cout << "after g_vec_ptr:" << g_vec_ptr << std::endl;
    // std::cout << " after iter: " << iter->val() << std::endl;
    // std::cout << "  g_iter: " << g_iter->val() << std::endl;
    // std::shared_ptr<Test> a = std::make_shared<Test>(100);
    // auto& b = a;
    // std::cout << a.use_count() << std::endl;
    
    // Test *test_p = new Test(50);
    // std::shared_ptr<Test> s_p1 = std::make_shared<Test>(*test_p);
    // std::cout << s_p1->val() << std::endl;
    // std::shared_ptr<Test> s_p2 = std::make_shared<Test>(*test_p);
    // s_p2->set_val(5);
    // std::cout << s_p1->val() << std::endl;
    //  std::cout << s_p2->val() << std::endl;
    // std::shared_ptr<Test> s_p3 = std::make_shared<Test>(*test_p);
    // std::cout << s_p3->val() << std::endl;

    // std::set<int> tmp_set;
    // tmp_set.emplace(1);
    // tmp_set.emplace(2);
    // std::cout << *tmp_set.begin() << std::endl;

    // int* p = new int(3);
    // //test_arg_shared_ptr(std::shared_ptr<int>(p));
    // test_without_arg_shared_ptr(p);
    // std::cout << "out of func:" << *p << std::endl; 


    int *p = new int(8);
    std::shared_ptr<int> s_p(p);
    std::vector<std::shared_ptr<int>> vec;
    vec.emplace_back(p);
    std::map<std::string, std::shared_ptr<int>> map_test;
    map_test["chengxiaoyu"] = std::shared_ptr<int>(p);
    std::cout << *map_test["chengixoayu"] << std::endl;

}