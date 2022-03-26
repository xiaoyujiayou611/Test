#include <iostream>
#include <memory>

class Master;

class Slave {
public:
    Slave(const int value, const std::shared_ptr<Master>& m_ptr)
    :a_(value), master_ptr_(m_ptr) {} 
    ~Slave() {
        std::cout << "destroyed:" << " master count:"<<  master_ptr_.use_count() << std::endl;
    }
    void PrintA() {
        std::cout << "print a:" <<  a_ << std::endl;
        std::cout << " master count:"<<  master_ptr_.use_count() << std::endl;
        
    }
private:
    int a_{10};
    std::weak_ptr<Master> master_ptr_;
};

class Master : public std::enable_shared_from_this<Master> {
public:
    static Master* Instance() {
        static Master* instance = nullptr;
        if (instance == nullptr) {
            instance = new Master();
        }
        
        return instance;
    }
    ~Master() {
        std::cout << "destroyed:" << " slave count:"<<  slave_ptr_.use_count() << std::endl;
        
    }
    // std::shared_ptr<Slave> CreateSlave() {
    //     std::shared_ptr<Slave> tmp_ptr = std::make_shared<Slave>(100, shared_from_this());
    //     return tmp_ptr;
    // }

    // void set_slave_ptr(const std::shared_ptr<Slave>& slave_ptr) {
    //     slave_ptr_ = slave_ptr;
    // }
    void Init(const int value) {
        b_ = value;
        slave_ptr_ = std::make_shared<Slave>(100, shared_from_this());
    }

    void PrintB() {
        std::cout << "print b:" << b_ << std::endl;
        slave_ptr_->PrintA();
        std::cout << " slave count:"<<  slave_ptr_.use_count() << std::endl;

    }

    std::shared_ptr<Slave>& get_slave_ptr() {
        return slave_ptr_;
    }
   
private:
    Master() {}
    int b_{20};
    std::shared_ptr<Slave> slave_ptr_;
};


int main (int argc, char** argv) {
    std::shared_ptr<Master> master_ptr(Master::Instance());
    // auto tmp = master_ptr->CreateSlave();
    // master_ptr->set_slave_ptr(tmp);
    master_ptr->Init(200);
    master_ptr->PrintB();
    auto slave_ptr = master_ptr->get_slave_ptr();
    // std::cout << slave_ptr.expired() << std::endl;
    // slave_ptr.lock()->PrintA();
    slave_ptr->PrintA();
    return 0;
}