#include "figure_functions.hpp"
#include "valid_move.hpp"
#include <iostream>
#include <string>
#define PAWN 0
#define KNIGHT 1
#define ROOK 2
#define KING 3
using namespace std;
void pawn(char board[8][8], figure_coordinates figures[4], bool *moved)
{
    int x = figures[PAWN].x;
    int y = figures[PAWN].y;
    int next_y = figures[PAWN].y - 1;
    if (next_y >= 0)
    {
        if (valid_move(board, x, next_y))
        {
            board[next_y][x] = board[y][x];
            board[y][x] = ' ';
            figures[PAWN].y = next_y;
            *moved = true;
        }
        else
        {
            cout << "pawn has no available moves" << endl;
        }
    }
    else
    {
        next_y = 7;
        if (valid_move(board, x, next_y))
        {
            board[next_y][x] = board[y][x];
            board[y][x] = ' ';
            figures[PAWN].y = next_y;
            *moved = true;
        }
        else
        {
            cout << "pawn has no available moves" << endl;
        }
    }
}

void knight(char board[8][8], figure_coordinates figures[4], string move, bool *moved)
{
    int x = figures[KNIGHT].x;
    int y = figures[KNIGHT].y;
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
    if (valid_move(board, next_x, next_y))
    {
        board[next_y][next_x] = board[y][x];
        board[y][x] = ' ';
        figures[KNIGHT].y = next_y;
        figures[KNIGHT].x = next_x;
        *moved = true;
    }
    else
    {
        cout << " Invalid move. Try choosing a different move, or a different figure" << endl;
    }
}

void rook(char board[8][8], figure_coordinates figures[4], string move, bool *moved)
{
    int x = figures[ROOK].x;
    int y = figures[ROOK].y;
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
    if (valid_move(board, next_x, next_y))
    {
        board[next_y][next_x] = board[y][x];
        board[y][x] = ' ';
        figures[ROOK].y = next_y;
        figures[ROOK].x = next_x;
        *moved = true;
    }
    else
    {
        cout << " Invalid move. Try choosing a different move, or a different figure" << endl;
    }
}

void king(char board[8][8], figure_coordinates figures[4], char move, bool *moved)
{
    int x = figures[KING].x;
    int y = figures[KING].y;
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
    if (valid_move(board, next_x, next_y))
    {
        board[next_y][next_x] = board[y][x];
        board[y][x] = ' ';
        figures[KING].y = next_y;
        figures[KING].x = next_x;
        *moved = true;
    }
    else
    {
        cout << " Invalid move. Try choosing a different move, or a different figure" << endl;
    }
}