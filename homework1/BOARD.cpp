/*
PIC 10B 2A, Homework 1
Purpose: Tic-tac-toe game, BOARD SOURCE CODE
Author: Chloe Tu
Date: 10/09/2019
*/

#include <iostream>
#include "BOARD.h"
#include "GAME.h"
#include "PERSON.h"
#include <string>
using namespace std;

Board::Board(){};
Board::Board(Person* pplayer_1, Person* pplayer_2, Game* pgame)
    {
        player_1 = pplayer_1;
        player_2 = pplayer_2;
        game = pgame;
    }
void Board::print_board() const
    {
        cout << endl << "         Tic Tac Toe" << endl << "    " << player_1->get_name() << " (" << player_1->get_symbol() << ") - " << player_2->get_name() << " (" << player_2->get_symbol() << ")" << endl
        << "   1       2       3 \n       |       |" << endl << "1   "; game->get_mark_one(0); cout << "  |   "; game->get_mark_one(1); cout <<  "   |  "; game->get_mark_one(2); cout << endl << " ______|_______|______ " << endl << "       |       |" << endl << "2   "; game->get_mark_two(0); cout << "  |   "; game->get_mark_two(1); cout << "   |  "; game->get_mark_two(2); cout << endl << " ______|_______|______ \n " << "      |       |" << endl << "3   "; game->get_mark_three(0); cout << "  |   "; game->get_mark_three(1); cout << "   |  "; game->get_mark_three(2); cout << endl << "       |       |        " << endl << endl;
    }
