/*
PIC 10B 2A, Homework 2
Purpose: Card Printer
Author: Chloe Tu
Date: 10/25/2019
*/

#include <iostream>
#include <string>
#include <vector>
#include "idcard.h"
#include "bankcard.h"
#include "card.h"
using namespace std;

void print_in_order(vector<Card*>& _cards)
{
    vector<Card*> dispose;
    for (int i = 0; i < _cards.size(); ++i)
    {
        if (_cards[i]->has_expiry() == false)
        {
            dispose.push_back(_cards[i]);
            _cards.erase(_cards.begin() + i);
        }
    }
    for (int i = 0; i < _cards.size(); ++i)
    {
        for (int j = i + 1; j < _cards.size(); ++j)
        {
            if (stoi(_cards[i]->get_expiry().substr(6,4)) > stoi(_cards[j]->get_expiry().substr(6,4)))
            {
                Card* temp = _cards[i];
                _cards[i] = _cards[j];
                _cards[j] = temp;
            }
            else if (stoi(_cards[j]->get_expiry().substr(6,4)) == stoi(_cards[i]->get_expiry().substr(6,4)))
                {
                for (int k = 0; k < _cards.size(); ++k)
                    {
                        for (int l = k + 1; l < _cards.size(); ++l)
                        {
                            if (stoi(_cards[k]->get_expiry().substr(3,2)) > stoi(_cards[l]->get_expiry().substr(3,2)))
                            {
                                Card* temp = _cards[k];
                                _cards[k] = _cards[l];
                                _cards[l] = temp;
                            }
                            else if (stoi(_cards[l]->get_expiry().substr(3,2)) == stoi(_cards[k]->get_expiry().substr(3,2)))
                                {
                                for (int m = 0; m < _cards.size(); ++m)
                                    {
                                    for (int n = m + 1; n < _cards.size(); ++n)
                                        {
                                        if (stoi(_cards[m]->get_expiry().substr(0,2)) > stoi(_cards[n]->get_expiry().substr(0,2)))
                                        {
                                                Card* temp = _cards[m];
                                                _cards[m] = _cards[n];
                                                _cards[n] = temp;
                                        }}}}}}
                }}}
    cout << " ------------------------------------" << endl << "|";
    for (int i = 0; i < _cards.size(); ++i)
    {
        _cards[i]->print();
        cout << "|" << endl << " ------------------------------------" << endl << "|";
    }
    for (int i = 0; i < dispose.size(); ++i)
    {
         dispose[i]->print();
        cout << "|" << endl << " ------------------------------------" << endl << "|";
    }
}

int main(){
    bool end = true;
    int type;
    string name;
    string uni;
    string expiry;
    string id;
    string birth;
    int account;
    int csc;
    vector<Card*> cards;
    int count = 0;
    
    cout << "*********************" << endl << "*  Wallet Printer!  *" << endl << "*********************" << endl << endl << "Print Cards by selecting the type (0 when done) :" << endl << endl << "1. Basic Card" << endl << "2. ID Card" << endl << "3. Bank Card" << endl;
    while (end)
    {
        cout << endl << endl << "Card Type: ";
        cin >> type;
        if (type == 0)
        {
            print_in_order(cards);
            end = false;
        }
        else
        {
            cin.get();
            cout << endl << "Institution name: ";
            getline(cin, uni);
            cout << endl << "Cardholder name: ";
            getline(cin, name);
            cout << endl << "Expiration date mmddyyyy: ";
            getline(cin, expiry);
            if (type == 1)
            {
                cards.push_back(new Card(uni, name, expiry));
                ++count;
            }
            if (type == 2)
            {
                cout << endl << "ID number: ";
                getline(cin, id);
                cout << endl << "DOB mmddyyyy: ";
                getline(cin, birth);
                cards.push_back(new id_Card(uni, name, expiry, id, birth));
                ++count;
            }
            if (type == 3)
            {
                cout << endl << "Account number: ";
                cin >> account;
                cout << endl << "Card Security Code: ";
                cin >> csc;
                cards.push_back(new bank_Card(uni, name, expiry, account, csc));
                ++count;
            }
        }
    }
    return 0;
}
