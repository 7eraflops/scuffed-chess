#include "figure_functions.hpp"
void pawn(char board[8][8], figure_coordinates figures[4], bool *moved)
{
    int x = figures[0].x;
    int y = figures[0].y;
    int next_y = figures[0].y - 1;
    if (next_y >= 0)
    {
        if (valid_move(board, x, next_y))
        {
            board[next_y][x] = board[y][x];
            board[y][x] = ' ';
            figures[0].y = next_y;
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
            figures[0].y = next_y;
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
    if (valid_move(board, next_x, next_y))
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

void rook(char board[8][8], figure_coordinates figures[4], string move, bool *moved)
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
    if (valid_move(board, next_x, next_y))
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

void king(char board[8][8], figure_coordinates figures[4], char move, bool *moved)
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
    if (valid_move(board, next_x, next_y))
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