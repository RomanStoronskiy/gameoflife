# cmake_minimum_required(VERSION <specify CMake version here>)
project(gameoflife)

set(CMAKE_CXX_STANDARD 11)

add_executable(gameoflife main.cpp Playground.cpp Playground.h)