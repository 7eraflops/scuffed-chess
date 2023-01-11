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
        for (int i = 0; i < 5; i++)
        {
            cout << "\t";
        }
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
                    case 'P':
                        cout << "\u2659"
                             << "P";
                        break;
                    case 'N':
                        cout << "\u2658"
                             << "N";
                        break;
                    case 'R':
                        cout << "\u2656"
                             << "R";
                        break;
                    case 'K':
                        cout << "\u2654"
                             << "K";
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