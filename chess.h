namespace chess 
{
    struct posion
    {
        int column;
        int row;
    };
  
    // check if posion locates in table
    bool in_scope(posion);

    // 8 functions 
    posion move_1_left_2_up(posion);
}