#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string>

#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/text_format.h>
#include "test_proto3.pb.h"

bool ConfigLoader::read_config(const std::string& filename, Test* config) {
    using google::protobuf::TextFormat;
    using google::protobuf::io::FileInputStream;
    using google::protobuf::io::ZeroCopyInputStream;

    int fd = open(filename.c_str(), O_RDONLY);
    if (fd < 0) {
        std::cout << "failed to open config:" << filename << "\n";
        return false;
    }

    ZeroCopyInputStream* inputs = new FileInputStream(fd);
    bool ret = TextFormat::Parse(inputs, config);

    close(fd);
    delete inputs;

    return ret;
}

int main (int argc, char** argv) {
    std::string file_name("./test_proto3.prototxt");
    Test test;
    if (read_config(file_name, &test)) {
	std::cout << "a: " << test.a() << std::endl;
	std::cout << "b: " << test.b() << std::endl;
	std::cout << "c: " << test.c() << std::endl;
    } else {
	std::cout << "failed to parse file." << std::endl;
    }
    return 0;
}
