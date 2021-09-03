#pragma once
#include <queue>
#include <atomic>
#include <mutex>
#include "task.h"
class TaskManager {
public:
static TaskManager* Instance() {
    static TaskManager* instance = nullptr;
    if (instance == nullptr) {
        instance = new TaskManager();
    }
    return instance;
}
void Push(const Task& task) {
    std::lock_guard<std::mutex> lk(mtx_);
    task_queue_.push(task);
}
void  Pop() {
    std::lock_guard<std::mutex> lk(mtx_);
    if(!task_queue_.empty()) {
        task_queue_.pop();
    }
}
bool Front(Task& task) {
    std::lock_guard<std::mutex> lk(mtx_);
    if (!task_queue_.empty()) {
        task = task_queue_.front();

        task_queue_.pop();
        return true;
    } else {
        return false;
    }
    
}
private:
    TaskManager() {}
    std::mutex mtx_;
    std::queue<Task> task_queue_;
};