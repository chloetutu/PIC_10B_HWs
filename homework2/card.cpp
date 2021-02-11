/*
PIC 10B 2A, Homework 2
Purpose: Card Printer
Author: Chloe Tu
Date: 10/25/2019
*/

#include <iostream>
#include "card.h"
#include <string>
using namespace std;

Card::Card(){};
Card::Card(string _uni, string _name, string _expiry)
    {
        uni = _uni;
        name = _name;
        expiry = _expiry;
    }
string Card::get_name() {return name;}
string Card::get_uni() {return uni;}
bool Card::has_expiry()
    {
        if (this->expiry == "0") {return false;}
        else return true;
    }
string Card::get_expiry()
    {
        if (this->has_expiry() == true)
        {
        return expiry.substr(0,2) + "/" + expiry.substr(2,2) + "/" + expiry.substr(4,4);
        }
        else return "N/A.";
    }
void Card::print()
    {
        cout << endl << "| " << get_uni() << endl << "|      Name: " << get_name() << endl << "|      Exp: " << get_expiry() << endl;
    }
