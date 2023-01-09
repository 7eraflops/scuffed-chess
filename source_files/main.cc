#include <iostream>
#include <stdio.h>
using namespace std;
void draw_board()
{
    int field = 1;
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= 30; j++)
        {
            if (field % 2 == 0)
            {
                cout << "\u2588"
                     << "\u2588";
            }
            else
            {
                cout << " "
                     << " ";
            }
            if (j % 3 == 0)
            {
                field++;
            }
        }
        if (i % 3 == 0)
        {
            field++;
        }
        cout << endl;
    }
}
int main()
{
    srand(time(NULL));
    char board[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            board[i][j] = ' ';
        }
    }
    char figure = ' ';
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            figure = 'p';
            break;
        case 1:
            figure = 'n';
            break;
        case 2:
            figure = 'r';
            break;
        case 3:
            figure = 'k';
            break;
        }
        bool assigned = false;
        while (!assigned)
        {
            int x = rand() % 10;
            int y = rand() % 10;
            if (board[x][y] == ' ')
            {
                board[x][y] = figure;
                assigned = true;
            }
            else
            {
                continue;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}