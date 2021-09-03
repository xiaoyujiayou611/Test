#include <chrono>
#include "thread_pool.h"
#include "task_manager.h"
void ThreadPool::Start() {
    is_stop_ = false;
    for (int i = 0; i < max_size_; i++) {
        std::thread tmp(&ThreadPool::ThreadFunc, this);
        threads_.push_back(std::move(tmp));
    }
}

void ThreadPool::ThreadFunc() {
    while (!is_stop_) {
        Task task;
        if (TaskManager::Instance()->Front(task)) {

            std::cout << "task_id: " << task.get_task_id() << "   thread_id: " << std::this_thread::get_id() << std::endl;
            task.Run();
        } else {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }
}

void ThreadPool::Stop() {
    is_stop_ = true;
    for (auto&& t : threads_) {
        t.join();
    }
}