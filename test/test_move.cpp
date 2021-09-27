/*
 * @Author: xiaoyu
 * @Date: 2021-09-15 19:37:53
 * @LastEditors: xiaoyu
 * @Description: 
 */
#include <iostream>
#include <vector>
#include <string>

void TestMove(std::vector<std::string>&& test) {
    for (auto&& item : test) {
        std::cout << "item: " << item << std::endl;
    }
    return;
}

int main(int argc, char** argv) {
    std::vector<std::string> tmp;
    tmp.emplace_back("aaa");
    TestMove(std::move(tmp));
    //tmp.emplace_back("bbb");
    TestMove(std::move(tmp));
    return 0;
}