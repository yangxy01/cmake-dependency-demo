cmake_minimum_required(VERSION 3.10)
project(DemoProject)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加子目录
add_subdirectory(protocols)
add_subdirectory(svr)