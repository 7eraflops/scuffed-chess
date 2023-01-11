#include <iostream>
#include <string>
#include <unistd.h>
#include "figure.hpp"
#include "randomizer.hpp"
#include "drawboard.hpp"
#include "pawn.hpp"
#include "rook.hpp"
#include "king.hpp"

using namespace std;
void welcome()
{
    cout << R"(
                             ________  ________  ___  ___  ________ ________ _______   ________          ________  ___  ___  _______   ________   ________      
                            |\   ____\|\   ____\|\  \|\  \|\  _____\\  _____\\  ___ \ |\   ___ \        |\   ____\|\  \|\  \|\  ___ \ |\   ____\ |\   ____\     
                            \ \  \___|\ \  \___|\ \  \\\  \ \  \__/\ \  \__/\ \   __/|\ \  \_|\ \       \ \  \___|\ \  \\\  \ \   __/|\ \  \___|_\ \  \___|_    
                             \ \_____  \ \  \    \ \  \\\  \ \   __\\ \   __\\ \  \_|/_\ \  \ \\ \       \ \  \    \ \   __  \ \  \_|/_\ \_____  \\ \_____  \   
                              \|____|\  \ \  \____\ \  \\\  \ \  \_| \ \  \_| \ \  \_|\ \ \  \_\\ \       \ \  \____\ \  \ \  \ \  \_|\ \|____|\  \\|____|\  \  
                                ____\_\  \ \_______\ \_______\ \__\   \ \__\   \ \_______\ \_______\       \ \_______\ \__\ \__\ \_______\____\_\  \ ____\_\  \ 
                               |\_________\|_______|\|_______|\|__|    \|__|    \|_______|\|_______|        \|_______|\|__|\|__|\|_______|\_________\\_________\
                               \|_________|                                                                                              \|_________\|_________|                                                                                                     
)" << endl;
}
void instructions()
{
    cout << R"(
Welcome to Scuffed Chess!
You have 4 randomly placed figures at your disposal:
- a pawn (p)
- a knight (n)
- a rook (r)
- a king (k)
You can choose them by pressing the keys in parantheses
Input x if you want to change your choice
After choosing a figure you can input the desired move according to these rules:
- pawn: no input necessary, it'll just move forward 1 space

- knight: input a combination of 2 letters from (f - forward b - back l - left r - right) like: fl
          the first letter denotes the direction in which the knight moves 2 spaces and the second
          the direction in which it moves 1 space (note that you can't combine either the same
          direction twice, or two direction that are both vertical or horizontal, like ff, rl, ll, fb

- rook: input f, b, l, r followed by the number of spaces you want to move in that direction

- king: input a number to choose a space to move the king onto.
  The spaces are numbered clockwise staring from the top, like this:
  8  1  2
  7     3
  6  5  4

You can't move onto other pawns, or try to move outside the board,
except for the pawn which will roll back to the bottom after reaching the top
Have fun!
)" << endl;
}

int main()
{
    figure figures[4]; // 0 = Pawn, 1 = kNight, 2 = Rook, 3 = King
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
    drawboard(board);

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
                // TODO: knight function
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
                drawboard(board);
            }
            else
            {
                system("clear");
                welcome();
                drawboard(board);
            }
        }
    }
}