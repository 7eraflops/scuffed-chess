#include <iostream>
#include <stdio.h>
using namespace std;
void draw_board(char board[10][10])
{
    int field = 0;
    int x = 0;
    int y = 0;
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            char figure = board[x][y];
            if (figure == ' ')
            {
                if (field % 2 == 0)
                {
                    cout << "\u2588" /* \u2588 is the unicode code for a white box */
                         << "\u2588";
                }
                else
                {
                    cout << ' '
                         << ' ';
                }
            }
            else
            {
                if ((j - 1) % 3 == 0 && (i - 4) % 3 == 0)
                {
                    switch (figure)
                    {
                    case 'p':
                        cout << "\u2659"
                             << "\u2659";
                        break;
                    case 'n':
                        cout << "\u2658"
                             << "\u2658";
                        break;
                    case 'r':
                        cout << "\u2656"
                             << "\u2656";
                        break;
                    case 'k':
                        cout << "\u2654"
                             << "\u2654";
                        break;
                    }
                }
                else
                {
                    if (field % 2 == 0)
                    {
                        cout << "\u2588" /* \u2588 is the unicode code for a white box */
                             << "\u2588";
                    }
                    else
                    {
                        cout << ' '
                             << ' ';
                    }
                }
            }
            if ((j - 2) % 3 == 0)
            {
                field++;
                y++;
            }
        }
        if ((i - 2) % 3 == 0)
        {
            field++;
            x++;
        }
        y = 0;
        cout << endl;
    }
}
void randomizer(char board[10][10])
{
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
    randomizer(board);
    draw_board(board);
}