set(CMAKE_CXX_COMPILER /usr/bin/g++)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -mcrc32 -Wno-literal-suffix -pthread")

aux_source_directory(. TEST_SOURCES)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../sdc/lib ${CMAKE_CURRENT_SOURCE_DIR}/../protos/lib /usr/local/lib)

add_executable(test ${TEST_SOURCES} ${SDC_SOURCES} ${PROTO_SOURCES})
target_include_directories(test PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../sdc ${CMAKE_CURRENT_SOURCE_DIR}/..)
target_link_libraries(test PUBLIC protobuf grpc++_unsecure grpc++_reflection sdc sdcproto)