cmake_minimum_required(VERSION 3.13) 
project(chess.out) 
set(SOURCE_FILES src/main.cpp src/randomizer.cpp include/randomizer.hpp src/drawboard.cpp include/drawboard.hpp include/figure.hpp)
include_directories(src include)

add_executable(chess.out ${SOURCE_FILES})