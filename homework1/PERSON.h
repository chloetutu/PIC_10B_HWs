/*
PIC 10B 2A, Homework 1
Purpose: Tic-tac-toe game, PERSON HEADER CODE
Author: Chloe Tu
Date: 10/09/2019
*/
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int score;
    string symbol;
public:
    Person();
    Person(string pname, string psymbol);
    string get_name() const;
    string get_symbol() const;
    int get_score() const;
    void win();
};

#endif
