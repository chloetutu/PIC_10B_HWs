/*
PIC 10B 2A, Homework 1
Purpose: Tic-tac-toe game, PERSON SOURCE CODE
Author: Chloe Tu
Date: 10/09/2019
*/
#include <iostream>
#include "PERSON.h"
using namespace std;

Person::Person(){};
Person::Person(string pname, string psymbol)
    {
        name = pname;
        score = 0;
        symbol = psymbol;
    }
string Person::get_name() const {return name;}
string Person::get_symbol() const {return symbol;}
int Person::get_score() const {return score;}
void Person::win() {++score;}
