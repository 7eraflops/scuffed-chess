#include "pawn_f.h"
void pawn(char board[8][8], int x, int y)
{
    bool moved = false;
    while (!moved)
    {
        if (x - 1 > 0)
        {
            board[x - 1][y] = board[x][y];
            board[x][y] = ' ';
            moved = true;
        }
        else
        {

            board[8][y] = board[x][y];
            board[x][y] = ' ';
            moved = true;
        }
    }
}