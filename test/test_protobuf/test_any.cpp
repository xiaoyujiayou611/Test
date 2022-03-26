#include <iostream>
#include "test_any.pb.h"

class MyBase {
public:
    MyBase():x(100) {}
    virtual ~MyBase() {}

    int x;
};

class MyDerived : public MyBase {
public:
    MyDerived():y(200) {}
    ~MyDerived() {}
    int y;
};

int main(int argc, char** argv) {
    TestOne msg;
    msg.set_name("test_any");
    std::cout << msg.name() << std::endl;
    
    std::string tmp = "hello world.";
    msg.set_data(tmp);

    google::protobuf::Any any;
    any.PackFrom(google::protobuf::Message(tmp));
    
    //Test any
    // AnyMessage any_msg;
    // any_msg.mutable_any()->PackFrom(msg);

    // if (any_msg.mutable_any()->Is<TestOne>()) {
    //     TestOne msg_unpack;
    //     any_msg.mutable_any()->UnpackTo(&msg_unpack);
    //     std::cout << "name: " << msg_unpack.name() << std::endl;
    //     std::cout << "data: " << msg_unpack.data() << std::endl;
    // }


    //Test oneof
    // TestTwo test_two;
    // auto k_v_item = test_two.mutable_k_v_item();
    // OneofMsg one_of_msg;
    // one_of_msg.set_int_32_value(100);
    // (*k_v_item)["int_key"] = one_of_msg;
    // //one_of_msg.clear_msg();
    // one_of_msg.set_bool_value(true);
    // (*k_v_item)["bool_key"] = one_of_msg;
    // //(*k_v_item)["string_key"] = test_two;
    // // for (auto iter = (*k_v_item).begin(); iter != (*k_v_item).end(); iter++) {
    // //     std::cout << iter->first << ":" << iter->second.msg_case() << std::endl;
    // // }

    // auto kv_item = test_two.k_v_item();
    // std::cout << "int_key:" << kv_item["int_key"].int_32_value() << std::endl;
    // std::cout << "bool_key:" << kv_item["bool_key"].bool_value()<< std::endl;

    return 0;
}

