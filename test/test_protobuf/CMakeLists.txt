cmake_minimum_required(VERSION 3.0)
project(test_map)
add_definitions(-std=c++11)

set(ENV{DEVOPS_ROOT_DIR}  "/home/ubuntu/haomo/hios/devops")
set(ENV{X64_PROTOBUF_ROOT} "/build_env/x86/thirdparty/protobuf")
set(THIRDPARTY_DIR "/build_env/x86/thirdparty")
set(PROTOBUF_ROOT "${THIRDPARTY_DIR}/protobuf")
# include($ENV{DEVOPS_ROOT_DIR}/cmake/Packages/Packages.cmake)
#include($ENV{DEVOPS_ROOT_DIR}/cmake/rte.cmake)
include($ENV{DEVOPS_ROOT_DIR}/cmake/Packages/Protobuf.cmake)

#file(GLOB proto_files
#./test_map.proto
#./test_any.proto)
#PROTOBUF_GENERATE_CPP_PY(${proto_gen_folder} PROTO_SRCS PROTO_HDRS PY_FILES "${proto_files}")

#add_executable(test_map test_map.cpp ${PROTO_SRCS})
#target_link_libraries(test_map ${PROTOBUF_LIBRARIES} dl)

#add_executable(test_any test_any.cpp ${PROTO_SRCS})
#target_link_libraries(test_any ${PROTOBUF_LIBRARIES} dl pthread)

file(GLOB proto_files
./test_proto3.proto)
PROTOBUF_GENERATE_CPP_PY(${proto_gen_folder} PROTO_SRCS PROTO_HDRS PY_FILES "${proto_files}")

add_executable(test main.cpp ${PROTO_SRCS})
target_link_libraries(test ${PROTOBUF_LIBRARIES} dl)

