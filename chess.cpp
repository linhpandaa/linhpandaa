#include "chess.h"
using namespace chess;

bool in_scope(posion p)
{
    return p.column >= 1 && p.column <= 8 && p.row >= 1 &&  p.row <= 8;
}

posion move_2_left_1_up(posion p)
{
    posion pn = {.column=p.column-1, .row=p.row+2};
    return pn;
}