#ifndef KNIGHT_HPP
#define KNIGHT_HPP
#include <iostream>
#include <string>
#include "figure.hpp"
#include "validmove.hpp"
using namespace std;
void knight(char board[8][8], figure figures[4], string move, bool *moved)
{
    int x = figures[1].x;
    int y = figures[1].y;
    int next_x, next_y;
    char m0 = move[0];
    char m1 = move[1];
    switch (m0)
    {
    case 'f':
        switch (m1)
        {
        case 'r':
            next_y = y - 2;
            next_x = x + 1;
            break;
        case 'l':
            next_y = y - 2;
            next_x = x - 1;
            break;
        }
        break;
    case 'b':
        switch (m1)
        {
        case 'r':
            next_y = y + 2;
            next_x = x + 1;
            break;
        case 'l':
            next_y = y + 2;
            next_x = x - 1;
            break;
        }
        break;
    case 'r':
        switch (m1)
        {
        case 'f':
            next_y = y - 1;
            next_x = x + 2;
            break;
        case 'b':
            next_y = y + 1;
            next_x = x + 2;
            break;
        }
        break;
    case 'l':
        switch (m1)
        {
        case 'f':
            next_y = y - 1;
            next_x = x - 2;
            break;
        case 'b':
            next_y = y + 1;
            next_x = x - 2;
            break;
        }
        break;
    }
    if (validmove(board, next_x, next_y))
    {
        board[next_y][next_x] = board[y][x];
        board[y][x] = ' ';
        figures[1].y = next_y;
        figures[1].x = next_x;
        *moved = true;
    }
    else
    {
        cout << " Invalid move. Try choosing a different move, or a different figure" << endl;
    }
}
#endif