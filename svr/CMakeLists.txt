# svr/CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

# 添加可执行文件
file(GLOB SRV_SRCS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# 添加可执行文件
add_executable(MyServer ${SRV_SRCS})

# 链接必要的库
target_link_libraries(MyServer PRIVATE protocols)
