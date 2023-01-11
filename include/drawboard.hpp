#ifndef DRAWBOARD_HPP
#define DRAWBOARD_HPP
#include <iostream>
using namespace std;
void drawboard(char board[8][8])
{
    int field = 0;
    int x = 0;
    int y = 0;
    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            char figure = board[y][x];
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
                x++;
            }
        }
        if ((i - 2) % 3 == 0)
        {
            field++;
            y++;
        }
        x = 0;
        cout << endl;
    }
};
#endif