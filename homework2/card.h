/*
PIC 10B 2A, Homework 2
Purpose: Card Printer
Author: Chloe Tu
Date: 10/25/2019
*/

#ifndef card_h
#define card_h
#include <string>
using namespace std;

class Card
{
private:
    string name;
    string uni;
    string expiry;
public:
    Card();
    Card(string _uni, string _name, string _expiry);
    string get_name();
    string get_uni();
    bool has_expiry();
    string get_expiry();
    virtual void print();
};

#endif /* card_h */
