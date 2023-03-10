/*
TODO:
      - formatowanie kodu
      - lepsze rozplanowanie kodu (main)
      - skrócić program 2x (mniej linii - bez oszukiwania)
      - stan gry w jedym miejscu (tablica enum)
      - zmienić sposób poruszania się (interaktywne strzałki), biblioteka - ncurses
      - wskaźniki -> referencje, tam gdzie to możliwe
      - OO
      - lepszy CMake
*/
#include <iostream>
#include <string>
#include <unistd.h>
#include "figure_coordinates.hpp"
#include "randomizer.hpp"
#include "draw_board.hpp"
#include "figure_functions.hpp"
#include "text_functions.hpp"
using namespace std;
int main()
{
    figure_coordinates figures[4]; // 0 = Pawn, 1 = kNight, 2 = Rook, 3 = King
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
    welcome();
    instructions();
    cout << "input anything to continue";
    string *temp;
    temp = new string;
    if (cin >> *temp)
    {
        system("clear");
    }
    delete temp;
    welcome();
    draw_board(board);

    char figure_choice;
    string move;

    while (true)
    {
        bool moved = false;
        cin >> figure_choice;
        switch (figure_choice)
        {
        case 'p':
            pawn(board, figures, &moved);
            break;
        case 'n':
            cin >> move;
            knight(board, figures, move, &moved);
            break;
        case 'r':
            cin >> move;
            rook(board, figures, move, &moved);
            break;
        case 'k':
            cin >> move;
            king(board, figures, move[0], &moved);
            break;
        }
        if (!moved)
        {
            sleep(3);
            system("clear");
            welcome();
            draw_board(board);
        }
        else
        {
            system("clear");
            welcome();
            draw_board(board);
        }
    }
}