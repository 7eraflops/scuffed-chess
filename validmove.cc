#include "validmove.h"
bool validmove(char board[8][8], int next_x, int next_y)
{
    bool valid = false;
    bool x_valid = (next_x >= 0 && next_x <= 8) ? 1 : 0;
    bool y_valid = (next_y >= 0 && next_y <= 8) ? 1 : 0;
    if (x_valid && y_valid)
    {
        if(board[next_y][next_x]==' ')
        {
            valid = true;
        }
    }
    return valid;
}