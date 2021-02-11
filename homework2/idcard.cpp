/*
PIC 10B 2A, Homework 2
Purpose: Card Printer
Author: Chloe Tu
Date: 10/25/2019
*/

#include <iostream>
#include "idcard.h"
#include <string>

using namespace std;

    id_Card::id_Card(){};
    id_Card::id_Card(string uni, string name, string expiry, string _id, string _birth): Card(uni, name, expiry)
    {
        id = _id;
        birth = _birth;
    }
    bool id_Card::has_birth()
       {
           if (this->birth == "0") {return false;}
           else return true;
       }
    string id_Card::get_birth()
    {
        if (this->has_birth() == true)
        {
        return birth.substr(0,2) + "/" + birth.substr(2,2) + "/" + birth.substr(4,4);
        }
        else return "N/A.";
    }
    void id_Card::print()
    {
        Card::print();
        cout << "|" << endl << "|      ID Number: " << id << endl << "|      DOB: " << get_birth() << endl;
    }
