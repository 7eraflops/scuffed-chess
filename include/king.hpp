#ifndef KING_HPP
#define KING_HPP
#include <iostream>
#include <string>
#include "figure.hpp"
#include "validmove.hpp"
using namespace std;
void king(char board[8][8], figure figures[4], char move, bool *moved)
{
    int x = figures[3].x;
    int y = figures[3].y;
    int next_x, next_y;
    switch (move)
    {
    case '1':
        next_y = y - 1;
        next_x = x;
        break;
    case '2':
        next_y = y - 1;
        next_x = x + 1;
        break;
    case '3':
        next_y = y;
        next_x = x + 1;
        break;
    case '4':
        next_y = y + 1;
        next_x = x + 1;
        break;
    case '5':
        next_y = y + 1;
        next_x = x;
        break;
    case '6':
        next_y = y + 1;
        next_x = x - 1;
        break;
    case '7':
        next_y = y;
        next_x = x - 1;
        break;
    case '8':
        next_y = y - 1;
        next_x = x - 1;
        break;
    }
    if (validmove(board, next_x, next_y))
    {
        board[next_y][next_x] = board[y][x];
        board[y][x] = ' ';
        figures[3].y = next_y;
        figures[3].x = next_x;
        *moved = true;
    }
    else
    {
        cout << " Invalid move. Try choosing a different move, or a different figure" << endl;
    }
}
#endif