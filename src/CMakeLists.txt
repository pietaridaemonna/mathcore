cmake_minimum_required(VERSION 3.8)
project(mathuzalem)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp tensor.h tensor.cpp)
add_executable(mathuzalem ${SOURCE_FILES})