
#pragma once
#include <thread>
#include <vector>
#include<iostream>
#include <condition_variable>

class  ThreadPool {    
public:
   static ThreadPool* Instance() {
       static ThreadPool* instance = nullptr;
       if (instance == nullptr) {
           instance = new ThreadPool();
       }
       return instance;
   }
   void Start();
   void Stop();
private:
    void ThreadFunc();
    std::vector<std::thread> threads_;
    int max_size_{5};
    bool  is_stop_{false};
};