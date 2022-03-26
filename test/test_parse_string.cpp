#include <iostream>
#include <string>

void parse_dao_key(const std::string& key, 
                   std::string& data_name,
                   int id) {
    int size = key.size();
    std::string split_flag = "_";
    auto pos = key.find(split_flag);
    data_name = key.substr(0, pos);
    id = std::stoi(key.substr(pos+1, size));
}
int main(int argc, char** argv) {

    std::string test_string("imu_1");
    std::string data_name;
    int id = 0;
    parse_dao_key(test_string, data_name, id);
    std::cout << "data_name: " << data_name << std::endl;
    std::cout  << "id: " << id << std::endl;
    return 0;
}