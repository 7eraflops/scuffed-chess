#ifndef TEXT_FUNCTIONS_HPP
#define TEXT_FUNCTIONS_HPP
#include <iostream>
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
#endif