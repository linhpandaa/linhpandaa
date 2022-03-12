#include "chess.h"
using namespace chess;

int main ()

bool in_scope(posion p)
{
    return p.column >= 1 && p.column <= 8 && p.row >= 1 &&  p.row <= 8;
}

posion move_2_left_1_up(posion p)
{
    posion pn = {.column=p.column-2, .row=p.row+1};
    return pn;
}

posion move_1_left_2_up(posion p)
{
    posion pn = {.column=p.column-1, .row=p.row+2};
    return pn;
}

posion move_1_right_2_up(posion p)
{
    posion pn = {.column=p.column+1, .row=p.row+2};
    return pn;
}
posion move_2_right_1_up(posion p)
{
    posion pn = {.column=p.column+2, .row=p.row+1};
    return pn;
}
posion move_2_right_1_down(posion p)
{
    posion pn = {.column=p.column+2, .row=p.row-1};
    return pn;
}
posion move_1_right_2_down(posion p)
{
    posion pn = {.column=p.column+1, .row=p.row-2};
    return pn;
}
posion move_2_left_1_down(posion p)
{
    posion pn = {.column=p.column-2, .row=p.row-1};
    return pn;
}
posion move_1_left_2_down(posion p)
{
    posion pn = {.column=p.column-1, .row=p.row-2};
    return pn;
}
