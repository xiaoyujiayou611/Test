#include <iostream>
#include <unordered_map>
#include <string>
#include <memory>
#include <mutex>
#include <shared_mutex>
#include <vector>
#include <thread>

class KVBigLock {
    std::mutex m_mutex;
    std::unordered_map<std::string, std::shared_ptr<std::string>> m_map;

public:
    using iterator = typename std::unordered_map<std::string, std::shared_ptr<std::string>>::iterator;
    bool put(const std::string &key, const std::string& value) {
        auto str = std::make_shared<std::string>(value);
        std::lock_guard<std::mutex> lock(m_mutex);
        auto it = m_map.find(key);
        if (it != m_map.end()) {
            return false;
        }
        m_map.emplace(key, str);
        return true;
    }

    std::shared_ptr<std::string> get(const std::string &key) {
        std::lock_guard<std::mutex> lock(m_mutex);
        auto it = m_map.find(key);
        if (it != m_map.end())
            return it->second;
        return nullptr;
    }

    bool remove(const std::string &key) {
        std::lock_guard<std::mutex> lock(m_mutex);
        auto it = m_map.find(key);
        if (it != m_map.end()) {
            m_map.erase(key);
            return true;
        }
        
        return false;
    }

};


// 分片机制
class KVSharded {
    const size_t m_mask;
    std::vector<KVBigLock> m_shards;

    KVBigLock& get_shard(const std::string &key) {
        std::hash<std::string> hash_fn;
        auto h = hash_fn(key);
        return m_shards[h & m_mask];
    }

public:
    KVSharded(size_t num_shard): m_mask(num_shard-1), m_shards(num_shard) {
        // if ((num_shard & m_mask) != 0)
        //     throw std::runtime_error("num_shard must be a power of two");
    }

    bool put(const std::string &key, const std::string& value) {
        return get_shard(key).put(key, value);
    }

    std::shared_ptr<std::string> get(const std::string &key) {
        return get_shard(key).get(key);
    }

    bool remove(const std::string &key) {
        return get_shard(key).remove(key);
    }
}; 



class DataManager {
public:
    static DataManager* Instance() {
        static DataManager* instance = nullptr;
        if (instance == nullptr) {
            instance = new DataManager();
        }
        return instance;
    }

    void Init(const int size) {
        kv_shared = std::make_shared<KVSharded>(size);
    }

    void CreateData(const std::string& key, const std::string& value) {

        kv_shared->put(key, value);
    }

    void UpdateData(const std::string& key, const std::string& update_content) {
        uint64_t before_timestamp =  std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

        std::shared_ptr<std::string> tmp = kv_shared->get(key);
        std::cout << "key: " << key << ", before update:" << *tmp << std::endl;
        *tmp = std::string(update_content);
        std::cout << "key: " << key << ", after update:" << *tmp << std::endl;
        uint64_t end_timestamp =  std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
        std::cout << key << ": cost: " << end_timestamp - before_timestamp << std::endl;

    }

    void RemoveData(const std::string& key) {
        auto tmp_string = kv_shared->get(key);
        string_v.emplace_back(*tmp_string);
        kv_shared->remove(key);
    }

    void PrintData() {
        for (auto&& data : string_v) {
            std::cout << data << std::endl;
        }
    }

private:
    DataManager() {};
    std::shared_ptr<KVSharded> kv_shared;
    std::vector<std::string> string_v;
};

void ThreadFunc(const std::string& key, const std::string& value) {
    //uint64_t before_timestamp =  std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    //std::cout << "before_ts: " << before_timestamp << std::endl;
    DataManager::Instance()->CreateData(key, value);
    std::this_thread::sleep_for(std::chrono::microseconds(10));
    auto value_tmp = value + " hello";
    DataManager::Instance()->UpdateData(key, value_tmp);
    std::this_thread::sleep_for(std::chrono::microseconds(2));
    auto value_tmp1 = value + " world";
    DataManager::Instance()->UpdateData(key, value_tmp1);
    std::this_thread::sleep_for(std::chrono::microseconds(10));
    DataManager::Instance()->RemoveData(key);
    //std::cout << "end_ts:" << end_timestamp << std::endl;
    //std::cout << key << ": cost: " << end_timestamp - before_timestamp - 22 << std::endl;
}


int main(int argc, char** argv) {
    DataManager::Instance()->Init(1);
    std::thread t1(ThreadFunc, "thread1", "I am thread1");
    std::thread t2(ThreadFunc, "thread2", "I am thread2");
    std::thread t3(ThreadFunc, "thread3", "I am thread3");
    std::thread t4(ThreadFunc, "thread4", "I am thread4");
    std::thread t5(ThreadFunc, "thread5", "I am thread5");
    std::thread t6(ThreadFunc, "thread6", "I am thread6");
    std::thread t7(ThreadFunc, "thread7", "I am thread7");
    std::thread t8(ThreadFunc, "thread8", "I am thread8");
    std::thread t9(ThreadFunc, "thread9", "I am thread9");
    std::thread t10(ThreadFunc, "thread10", "I am thread10");
    std::thread t11(ThreadFunc, "thread11", "I am thread11");
    std::thread t12(ThreadFunc, "thread12", "I am thread12");

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    t7.join();
    t8.join();
    t9.join();
    t10.join();
    t11.join();
    t12.join();

    DataManager::Instance()->PrintData();
    delete DataManager::Instance();
    return 0;
}
