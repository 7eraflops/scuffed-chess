cmake_minimum_required(VERSION 3.13) 
project(chess.out) 
set(SOURCE_FILES main.cc randomizer.cc randomizer.h drawboard.cc drawboard.h figure.h)

add_executable(chess.out ${SOURCE_FILES})