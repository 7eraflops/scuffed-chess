#include <iostream>
using namespace std;

int main()
{
    char board[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            board[i][j] = 'A';
        }
    }
    cout << "_______________________" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "| ";
        for (int j = 0; j < 10; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << "_______________________" << endl;
}