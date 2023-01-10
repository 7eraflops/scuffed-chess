#include <iostream>
#include <unistd.h>

#include "figure.h"
#include "randomizer.h"
#include "drawboard.h"

using namespace std;

int main()
{
    figure figures[4]; // 1 = Pawn, 2 = kNight, 3 = Rook, 4 = King
    srand(time(NULL));
    char board[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j] = ' ';
        }
    }
    randomizer(board, figures);
    drawboard(board);
    for (int i = 0; i < 4; i++)
    {
        cout << figures[i].x + 1 << "\t" << figures[i].y + 1 << endl;
    }
}