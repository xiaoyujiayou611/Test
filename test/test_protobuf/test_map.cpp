#include <iostream>
#include <string>
#include "test_map.pb.h"

int main(int argc, char** argv) {
    auto i_map = MapTest();
    auto map = i_map.mutable_map_item();
    std::string key = "xiaoyu";
    DataSet data_set;
    for (int i = 0; i < 5; i++) {
        auto data = data_set.add_data();
        data->set_id(i);
        data->set_data_name("xiaohua");
    }
    (*map)[key] = data_set;

    for (auto iter = map->begin(); iter != map->end(); iter++) {
        std::cout << "key:" << iter->first << std::endl;
        auto data_s = iter->second;
        for (int j = 0; j < data_s.data_size(); j++) {
            auto data_item = data_s.mutable_data(j);
            std::cout << "data_s " << j << ": " << data_item->id() << " " << data_item->data_name() << std::endl; 
        }

    }
    return 0;
} 