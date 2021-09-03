#pragma once
#include <atomic>
#include <functional>

class Task {
public:
   
    Task(const int task_id, const std::function<void()>& task) : task_id_(task_id), task_(task) {
    }  
    Task() {}
    ~Task() {}
    
    int get_task_id() {
        return task_id_;
    }
    void Run() {
        task_();
    }
private:
    int task_id_;
    std::function<void()> task_;

};