/*
 * @Author: xiaoyu
 * @Date: 2021-09-08 10:54:07
 * @LastEditors: xiaoyu
 * @Description: 
 */
#include <random>
#include <iostream>


int main (int argc, char** argv) {
    std::uniform_int_distribution<unsigned> u(1,10);
    std::random_device r;
    std::default_random_engine e(r());
    for (int i = 0; i < 10; i++) {
        std::cout << u(e) << std::endl;
    }
    
    return 0;
}