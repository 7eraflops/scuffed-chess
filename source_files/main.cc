#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    string board[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            board[i][j] = 'A';
        }
    }
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
    cout << "\u2655" << endl;
}