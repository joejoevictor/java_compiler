cmake_minimum_required(VERSION 3.3)
project(Java_Compiler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/examples/math_expression_evaluator.cpp src/examples/math_expression_evaluator.h)
add_executable(Java_Compiler ${SOURCE_FILES})