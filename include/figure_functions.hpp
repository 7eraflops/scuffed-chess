#include "figure_coordinates.hpp"
#include <string>
#ifndef FIGURE_FUNCTIONS_HPP
#define FIGURE_FUNCTIONS_HPP
extern void pawn(char board[8][8], figure_coordinates figures[4], bool *moved);
extern void knight(char board[8][8], figure_coordinates figures[4], std::string move, bool *moved);
extern void rook(char board[8][8], figure_coordinates figures[4], std::string move, bool *moved);
extern void king(char board[8][8], figure_coordinates figures[4], char move, bool *moved);
#endif