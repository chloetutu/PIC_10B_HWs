/*
PIC 10B 2A, Homework 2
Purpose: Card Printer
Author: Chloe Tu
Date: 10/25/2019
*/

#ifndef idcard_h
#define idcard_h
#include "card.h"
using namespace std;

class id_Card: public Card
{
private:
    string id;
    string birth;
    bool birth_q;
public:
    id_Card();
    id_Card(string uni, string name, string expiry, string _id, string _birth);
    bool has_birth();
    string get_birth();
//    virtual
    void print();
};

#endif /* idcard_h */
