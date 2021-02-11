/*
PIC 10B 2A, Homework 2
Purpose: Card Printer
Author: Chloe Tu
Date: 10/25/2019
*/

#ifndef bankcard_h
#define bankcard_h
#include "card.h"
using namespace std;

class bank_Card: public Card
{
private:
    int account;
    int csc;
public:
    bank_Card();
    bank_Card(string uni, string name, string expiry, int _account, int _csc);
//    virtual
    void print();
};

#endif /* bankcard_h */
