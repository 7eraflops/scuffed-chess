cmake_minimum_required(VERSION 3.13) 
project("scuffed_chess.out") 
set(SOURCE_FILES src/main.cpp include/randomizer.hpp include/drawboard.hpp include/figure.hpp include/pawn.hpp include/rook.hpp include/king.hpp)
include_directories(src include)

add_executable("${PROJECT_NAME}" ${SOURCE_FILES})