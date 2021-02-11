/*
PIC 10B 2A, Homework 1
Purpose: Tic-tac-toe game, GAME SOURCE CODE
Author: Chloe Tu
Date: 10/09/2019
*/

#include <iostream>
#include "GAME.h"
#include "PERSON.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <assert.h>
using namespace std;

Game::Game(){};
Game::Game(Person* pplayer_1, Person* pplayer_2)
    {
        player_1 = pplayer_1;
        player_2 = pplayer_2;
        for (int i = 0; i < 3; ++i)
        {
            y_one->push_back(" ");
            y_two->push_back(" ");
            y_three->push_back(" ");
        }
    }
bool Game::full_game() const
    {
        int counter = 0;
        for (int i = 0; i < 3; i++)
        {
            if (y_one->at(i) == "X" || y_one->at(i) == "O") {++counter;}
            if (y_two->at(i) == "X" || y_two->at(i) == "O") {++counter;}
            if (y_three->at(i) == "X" || y_three->at(i) == "O") {++counter;}
        }
        return (counter == 9);
    }
void Game::refresh_game()
    {
        for(int i = 0; i < 3; ++i)
        {
            y_one->at(i) = " ";
            y_two->at(i) = " ";
            y_three->at(i) = " ";
        }
    }
bool Game::win_check() const
    {
        if (y_one->at(0) != " " && y_one->at(0) == y_one->at(1) && y_one->at(1) == y_one->at(2)) {return true;}
        if (y_two->at(0) != " " &&y_two->at(0) == y_two->at(1) && y_two->at(1) == y_two->at(2)) { return true;}
        if (y_three->at(0) != " " &&y_three->at(0) == y_three->at(1) && y_three->at(1) == y_three->at(2)) {return true;}
        if (y_one->at(0) != " " && y_one->at(0) == y_one->at(1) && y_one->at(1) == y_one->at(2)) {return true;}
        if (y_two->at(0) != " " &&y_two->at(0) == y_two->at(1) && y_two->at(1) == y_two->at(2)) { return true;}
        if (y_three->at(0) != " " &&y_three->at(0) == y_three->at(1) && y_three->at(1) == y_three->at(2)) {return true;}
        if (y_one->at(0) != " " && y_one->at(0) == y_two->at(1) && y_two->at(1) == y_three->at(2)) {return true;}
        if (y_one->at(2) != " " && y_one->at(2) == y_two->at(1) && y_two->at(1) == y_three->at(0)) {return true;}
        for (int i = 0; i < 3; ++i)
        {
            if (y_one->at(i) != " " && y_one->at(i) == y_two->at(i) && y_two->at(i) == y_three->at(i)) {return true;}
        }
        return false;
    }
void Game::error() const {cout << "Invalid input." << endl;}
void Game::set_mark(Person* player, vector<string>* y, int const x)
    {
        if (y->at(x) == " ") {y->at(x) = player->get_symbol();}
        else
        {
            error();
            exit(0);
        }
    }
void Game::get_mark_one (int const x) const {cout << y_one->at(x);}
void Game::get_mark_two (int const x) const {cout << y_two->at(x);}
void Game::get_mark_three (int const x)  const {cout << y_three->at(x);}
void Game::mark_location(Person* player)
    {
        cout << player->get_name() << " (" << player->get_symbol() << ") Mark location: ";
        cin >> y;
        if (y < 1 || y > 3 || cin.fail())
        {
            cout << "Invalid input." << endl; exit(0);
        }
        cin.get();
        cin >> x;
        if (x < 1 || x > 3 || cin.fail())
        {
            cout << "Invalid input." << endl; exit(0);
        }
        --x;
        if (y == 1) {set_mark(player, y_one, x);}
        if (y == 2) {set_mark(player, y_two, x);}
        if (y == 3) {set_mark(player, y_three, x);}
    }
