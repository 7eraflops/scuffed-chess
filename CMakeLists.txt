cmake_minimum_required(VERSION 3.13) 
project("scuffed_chess.out") 
include_directories(include)
set(SOURCE_FILES 

src/main.cpp 
src/randomizer.cpp
src/draw_board.cpp 
src/valid_move.cpp 
src/figure_functions.cpp

include/figure_coordinates.hpp 
include/randomizer.hpp 
include/draw_board.hpp 
include/valid_move.hpp
include/figure_functions.hpp
include/text_functions.hpp 
)

add_executable("${PROJECT_NAME}" ${SOURCE_FILES})