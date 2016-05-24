cmake_minimum_required(VERSION 3.3)
project(Java_Compiler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/examples/math_expression_evaluator.cpp src/examples/math_expression_evaluator.h src/examples/lexer/tag.cpp src/examples/lexer/tag.h src/examples/lexer/tokens/token.cpp src/examples/lexer/tokens/token.h src/examples/lexer/tag.cpp src/examples/lexer/tag.h src/examples/lexer/tokens/number.cpp src/examples/lexer/tokens/number.h)
add_executable(Java_Compiler ${SOURCE_FILES})