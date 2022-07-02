#include <iostream>
#include <set>
#include <memory>
#include <unordered_map>
#include <queue>

class Test {
public:
    Test(const int j) : i(j) {
        std::cout << "construct: "  << i << std::endl;
    }

    ~Test() {
        std::cout << "deconstruct" << std::endl;
    }
private:
    int i;
};

std::shared_ptr<Test> func() {
    std::queue<std::shared_ptr<Test>> q_test;
    q_test.emplace(std::make_shared<Test>(1000));
    auto test = q_test.front();
    q_test.pop();
    return test;
}

int main(int argc, char ** argv) {
   std::set<int> test_set;
   for (int i =0; i < 5; i++) {
       test_set.emplace(i);
   }
   
   for (auto iter = test_set.begin(); iter != test_set.end(); ) {
       std::cout << "item:" <<  *iter << std::endl;
       test_set.erase(iter++);
       std::cout << "size:" << test_set.size() << std::endl;
   }

   int * p = new int(10);
   std::shared_ptr<int> sp = std::make_shared<int>(*p);
   std::cout << *sp << std::endl;
   std::unordered_map<std::string, std::shared_ptr<Test>> my_map;
   //std::shared_ptr<Test> test = std::make_shared<Test>();
   my_map["cxy"] =  std::make_shared<Test>(10);
   my_map["cxy"] = func();
    return 0;
}