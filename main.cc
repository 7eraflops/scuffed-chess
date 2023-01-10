#include <iostream>

#include "randomizer.h"
#include "drawboard.h"
#include "pawn.h"

using namespace std;

struct figure
{
    int x;
    int y;
} p, n, r, k; // Pawn, kNight, Rook, King
int main()
{
    srand(time(NULL));
    char board[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j] = ' ';
        }
    }

    randomizer(board);
    drawboard(board);
    pawn(board, 1, 1);
    cout << endl;
    drawboard(board);
}