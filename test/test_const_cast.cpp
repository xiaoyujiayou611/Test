/*
 * @Author: xiaoyu
 * @Date: 2021-09-29 14:26:59
 * @LastEditors: xiaoyu
 * @Description: 
 */
#include <iostream>

int main(int argc, char** argv) {
    int a = 10;
    const int * const p = &a;
    int *pb = const_cast<int *>(p);
    std::cout << "pb's value:" << *pb << std::endl;
    return 0;
}