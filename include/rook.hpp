#ifndef ROOK_HPP
#define ROOK_HPP
#include <iostream>
#include <string>
#include "figure.hpp"
#include "validmove.hpp"
using namespace std;
void rook(char board[8][8], figure figures[4], string move, bool *moved)
{
    int x = figures[2].x;
    int y = figures[2].y;
    int next_x, next_y;
    char m0 = move[0];
    char m1 = move[1];
    switch (m0)
    {
    case 'f':
        next_y = y - int(m1 - 48);
        next_x = x;
        break;
    case 'b':
        next_y = y + int(m1 - 48);
        next_x = x;
        break;
    case 'r':
        next_x = x + int(m1 - 48);
        next_y = y;
        break;
    case 'l':
        next_x = x - int(m1 - 48);
        next_y = y;
        break;
    }
    if (validmove(board, next_x, next_y))
    {
        board[next_y][next_x] = board[y][x];
        board[y][x] = ' ';
        figures[2].y = next_y;
        figures[2].x = next_x;
        *moved = true;
    }
    else
    {
        cout << " Invalid move. Try choosing a different move, or a different figure" << endl;
    }
}
#endif