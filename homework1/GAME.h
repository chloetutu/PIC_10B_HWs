/*
PIC 10B 2A, Homework 1
Purpose: Tic-tac-toe game, GAME HEADER CODE
Author: Chloe Tu
Date: 10/09/2019
*/

#ifndef GAME_H
#define GAME_H
#include <vector>
#include "PERSON.h"
using namespace std;

class Game
{
private:
    vector<string>* y_one = new vector<string>;
    vector<string>* y_two = new vector<string>;
    vector<string>* y_three = new vector<string>;
    bool win = false;
    Person* player_1;
    Person* player_2;
    int y, x;
public:
    Game();
    Game(Person* pplayer_1, Person* pplayer_2);
    bool full_game() const;
    void refresh_game();
    bool win_check() const;
    void error() const;
    void set_mark(Person* player, vector<string>* y, int const x);
    void get_mark_one (int const x) const;
    void get_mark_two(int const x)  const;
    void get_mark_three (int const x) const;
    void mark_location(Person* player);
};

#endif
