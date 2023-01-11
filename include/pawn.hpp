#ifndef PAWN_HPP
#define PAWN_HPP
#include <iostream>
#include "figure.hpp"
#include "validmove.hpp"
using namespace std;
void pawn(char board[8][8], figure figures[4])
{
    int x = figures[0].x;
    int y = figures[0].y;
    int next_y = figures[0].y - 1;
    if (next_y >= 0)
    {
        if (validmove(board, x, next_y))
        {
            board[next_y][x] = board[y][x];
            board[y][x] = ' ';
            figures[0].y = next_y;
        }
        else
        {
            cout << "pawn has no available moves" << endl;
        }
    }
    else
    {
        next_y = 7;
        if (validmove(board, x, next_y))
        {
            board[next_y][x] = board[y][x];
            board[y][x] = ' ';
            figures[0].y = next_y;
        }
        else
        {
            cout << "pawn has no available moves" << endl;
        }
    }
}
#endif