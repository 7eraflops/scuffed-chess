#include "figure_coordinates.hpp"
#include "valid_move.hpp"
#include <iostream>
#include <string>
using namespace std;

#ifndef PAWN_HPP
#define PAWN_HPP
extern void pawn(char board[8][8], figure_coordinates figures[4], bool *moved);
#endif

#ifndef KNIGHT_HPP
#define KNIGHT_HPP
void knight(char board[8][8], figure_coordinates figures[4], string move, bool *moved);
#endif

#ifndef ROOK_HPP
#define ROOK_HPP
void rook(char board[8][8], figure_coordinates figures[4], string move, bool *moved);
#endif

#ifndef KING_HPP
#define KING_HPP
void king(char board[8][8], figure_coordinates figures[4], char move, bool *moved);
#endif