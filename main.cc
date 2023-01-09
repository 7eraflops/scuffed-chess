#include <iostream>
#include <randomizer.h>
using namespace std;
void draw_board(char board[8][8])
{
    int field = 0;
    int x = 0;
    int y = 0;
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 24; j++)
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
                             << "p";
                        break;
                    case 'n':
                        cout << "\u2658"
                             << "n";
                        break;
                    case 'r':
                        cout << "\u2656"
                             << "r";
                        break;
                    case 'k':
                        cout << "\u2654"
                             << "k";
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
    draw_board(board);
}