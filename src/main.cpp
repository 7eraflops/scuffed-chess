#include <string>
#include <unistd.h>
#include "include_list.hpp"
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
        bool *moved_ptr = &moved;
        while (!moved)
        {
            cin >> figure_choice;
            switch (figure_choice)
            {
            case 'p':
                pawn(board, figures, moved_ptr);
                break;
            case 'n':
                cin >> move;
                knight(board, figures, move, moved_ptr);
                break;
            case 'r':
                cin >> move;
                rook(board, figures, move, moved_ptr);
                break;
            case 'k':
                cin >> move;
                king(board, figures, move[0], moved_ptr);
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
}