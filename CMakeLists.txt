cmake_minimum_required(VERSION 3.13) 
project(chess.out) 
set(SOURCE_FILES source_files/main.cc source_files/randomizer.cc source_files/randomizer.h)

add_executable(app.out ${SOURCE_FILES})