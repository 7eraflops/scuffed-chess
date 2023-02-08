#ifndef FIGURE_FUNCTIONS_HPP
#define FIGURE_FUNCTIONS_HPP
#include "figure_coordinates.hpp"
#include <string>
void pawn(char board[8][8], figure_coordinates figures[4], bool *moved);
void knight(char board[8][8], figure_coordinates figures[4], std::string move, bool *moved);
void rook(char board[8][8], figure_coordinates figures[4], std::string move, bool *moved);
void king(char board[8][8], figure_coordinates figures[4], char move, bool *moved);
#endif