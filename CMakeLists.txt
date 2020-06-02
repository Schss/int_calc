cmake_minimum_required(VERSION 3.10)

project("Integer Calc")

add_executable(calc operations.h operations.cpp main.cpp )
add_executable(tests operations.h operations.cpp tests.cpp )
