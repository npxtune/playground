cmake_minimum_required(VERSION 3.25)
project(playground C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_CXX_COMPILER /opt/homebrew/opt/llvm/bin/clang)

add_executable(playground src/main.c)
