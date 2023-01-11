#ifndef VALIDMOVE_HPP
#define VALIDMOVE_HPP
bool validmove(char board[8][8], int next_x, int next_y)
{
    bool is_valid = false;
    bool next_x_valid = (next_x >= 0 && next_x <= 7) ? true : false;
    bool next_y_valid = (next_y >= 0 && next_y <= 7) ? true : false;
    if (next_x_valid && next_y_valid)
    {
        if (board[next_y][next_x] == ' ')
        {
            is_valid = true;
            return is_valid;
        }
    }
    return is_valid;
}
#endif