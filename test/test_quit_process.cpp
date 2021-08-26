#include <iostream>
#include <thread>
#include <vector>
#include <sys/types.h>
#include <sys/wait.h>
#include <chrono>
#include <string>
#include <cstring>

class Node {
public:
    static Node* Instance() {
        static Node* instance = nullptr;
        if (instance == nullptr) {
            instance = new Node();
            
        }
        return instance;
    }
    void Init(const bool stop) {
        stop_ = stop;
    }
    void Start () {
        threads_.emplace_back(std::thread(&Node::ThreadFunc, this));
        threads_.emplace_back(std::thread(&Node::ThreadFunc, this));
        threads_.emplace_back(std::thread(&Node::ThreadFunc, this));
        threads_.emplace_back(std::thread(&Node::ThreadFunc, this));
        threads_.emplace_back(std::thread(&Node::ThreadFunc, this));
        threads_.emplace_back(std::thread(&Node::ThreadFunc, this));
        threads_.emplace_back(std::thread(&Node::ThreadFunc, this));
        threads_.emplace_back(std::thread(&Node::ThreadFunc2, this));
        threads_.emplace_back(std::thread(&Node::ThreadFunc, this));
        
        while(!stop_) {
            std::this_thread::sleep_for(std::chrono::microseconds(200000));
            
        }
    }

    void Stop () {
        std::cout << " stop now." << std::endl;
        stop_ = true;
    }

    void ThreadFunc() {
        for (int i = 0; i < 100; i++) {
            int r = i*i;
        }
    }

    void ThreadFunc2() {
        while(true) {
            std::this_thread::sleep_for(std::chrono::microseconds(20000));
        }
    }

    void Release() {
        std::cout << "begin release." << std::endl;
        int count = 0;
        for (auto& thread : threads_) {
            std::cout << "count: " << count << std::endl;
            thread.join();
            count++;
        }
        std::cout << "end release." << std::endl;
    }
    // ~Node() {
    //     if (Instance)() != nullptr) {
    //         delete Instance();
    //     }
    // }
private:
    Node() {}
    std::vector<std::thread> threads_;
    bool stop_;

};

void sig_int_handler(int sig) {
    Node::Instance()->Stop();
}

int main(int argc, char** argv) {
    struct sigaction action;
    memset(&action, 0, sizeof(action));
    action.sa_handler = sig_int_handler;
    sigaction(SIGINT, &action, NULL);

    Node::Instance()->Init(false);
    Node::Instance()->Start();
    Node::Instance()->Release();
    delete Node::Instance();
    return 0;
}