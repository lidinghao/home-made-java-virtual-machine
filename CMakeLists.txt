cmake_minimum_required(VERSION 3.3)
project(untitled)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp instruction_set.h instruction_set.cpp instruction_set.h stack_frame.cpp stack_frame.h types.h)
add_executable(hjvm ${SOURCE_FILES})