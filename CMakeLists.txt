# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.0.0)
# 项目信息
project (test)
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)
# 添加 src 子目录
add_subdirectory(src)
# 指定生成目标
add_executable(Demo main.cpp)
# 添加链接库
target_link_libraries(Demo SrcFunctions)

# # 添加编译参数
# SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -Wall -O2")
# SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -O2")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
