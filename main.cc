#include <iostream>

#include "figure.h"
#include "randomizer.h"
#include "drawboard.h"

using namespace std;
void welcome()
{
    cout << R"(
 _________  _______   ________  ________  ___  ________  ___       _______           ________  ___  ___  _______   ________   ________      
|\___   ___\\  ___ \ |\   __  \|\   __  \|\  \|\   __  \|\  \     |\  ___ \         |\   ____\|\  \|\  \|\  ___ \ |\   ____\ |\   ____\     
\|___ \  \_\ \   __/|\ \  \|\  \ \  \|\  \ \  \ \  \|\ /\ \  \    \ \   __/|        \ \  \___|\ \  \\\  \ \   __/|\ \  \___|_\ \  \___|_    
     \ \  \ \ \  \_|/_\ \   _  _\ \   _  _\ \  \ \   __  \ \  \    \ \  \_|/__       \ \  \    \ \   __  \ \  \_|/_\ \_____  \\ \_____  \   
      \ \  \ \ \  \_|\ \ \  \\  \\ \  \\  \\ \  \ \  \|\  \ \  \____\ \  \_|\ \       \ \  \____\ \  \ \  \ \  \_|\ \|____|\  \\|____|\  \  
       \ \__\ \ \_______\ \__\\ _\\ \__\\ _\\ \__\ \_______\ \_______\ \_______\       \ \_______\ \__\ \__\ \_______\____\_\  \ ____\_\  \ 
        \|__|  \|_______|\|__|\|__|\|__|\|__|\|__|\|_______|\|_______|\|_______|        \|_______|\|__|\|__|\|_______|\_________\\_________\
                                                                                                                     \|_________\|_________|
)" << endl;
}
void instructions()
{
    cout << "Welcome to terrible chess!" << endl
         << "You have 4 randomly placed figures at your disposal:" << endl
         << "- a pawn (p)" << endl
         << "- a knight (n)" << endl
         << "- a rook (r)" << endl
         << "- a king (k)" << endl
         << "You can choose them by pressing the keys in parantheses" << endl
         << "Input x if you want to change your choice" << endl
         << "After choosing a figure you can input the desired move according to these rules:" << endl
         << "pawn: no input necessary, it'll just move forward 1 space" << endl
         << "knight: input a combination of 2 letters from (f - forward b - back l - left r - right) like: fl" << endl
         << "        the first letter denotes the direction in which the knight moves 2 spaces and the second" << endl
         << "        the direction in which it moves 1 space (note that you can't combine either the same" << endl
         << "        direction twice, or two direction that are both vertical or horizontal, like ff, rl, ll, fb" << endl
         << "rook: input f, b, l, r followed by the number of spaces you want to move in that direction" << endl
         << "king: input a number to choose a space to move the king onto." << endl
         << "The spaces are numbered clockwise staring from the top, like this:" << endl
         << "8  1  2" << endl
         << "7     3" << endl
         << "6  5  4" << endl
         << "You can't move onto other pawns, or try to move outside the board," << endl
         << "except for the pawn which will roll back to the bottom after reaching the top" << endl
         << "Have fun!" << endl;
}

int main()
{
    figure figures[4]; // 1 = Pawn, 2 = kNight, 3 = Rook, 4 = King
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
    drawboard(board);
}