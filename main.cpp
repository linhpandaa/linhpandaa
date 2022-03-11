#include <iostream>
#include "chess.h"
using namespace std;
using namespace chess;

int main()
{
    posion b = {.column=5, .row=5};
    // posion e = move_1_left_2_up(b);
    // cout << e.column << " " << e.row << endl;
    cout << in_scope(b) << endl;
    return 0;
}