/*
PIC 10B 2A, Homework 1
Purpose: Tic-tac-toe game, BOARD HEADER CODE
Author: Chloe Tu
Date: 10/09/2019
*/

#ifndef BOARD_hpp
#define BOARD_hpp
#include "PERSON.h"
#include "GAME.h"

class Board
{
private:
    Person* player_1;
    Person* player_2;
    Game* game;
public:
    Board();
    Board(Person* pplayer_1, Person* pplayer_2, Game* pgame);
    void print_board() const;
};


#endif
