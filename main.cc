#include <iostream>
#include "randomizer.h"
#include "drawboard.h"
using namespace std;
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
}