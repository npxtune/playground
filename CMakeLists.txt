cmake_minimum_required(VERSION 3.25)
project(playground C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_CXX_COMPILER clang-17)

add_executable(playground src/main.c)
