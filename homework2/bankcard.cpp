/*
PIC 10B 2A, Homework 2
Purpose: Card Printer
Author: Chloe Tu
Date: 10/25/2019
*/

#include <iostream>
#include "bankcard.h"
#include <string>

using namespace std;

    bank_Card::bank_Card(){};
    bank_Card::bank_Card(string uni, string name, string expiry, int _account, int _csc): Card(uni, name, expiry)
    {
        account = _account;
        csc = _csc;
    }
    void bank_Card::print()
    {
        Card::print();
        cout << "|" << endl << "|      Account#: " << account << endl << "|      CSC: " << csc << endl;
    }
