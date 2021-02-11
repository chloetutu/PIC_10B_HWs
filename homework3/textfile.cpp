/*
PIC 10B 2B, Homework 3
Purpose: File Comparison
Author: Chloe Tu
Date: 11/2/2019
*/

#include "textfile.h"
#include <stdio.h>
using namespace std;

int no_of_words (ifstream& one)
{
    int wcount = 0;
    string s = " ";
    string str = " ";
    while (one >> s && s != " ")
    {++wcount;}
    return wcount;
}
long no_of_char (ifstream& one)
{
    one.seekg(0, ios::end);
    long ch = one.tellg();
    one.seekg(0,ios::beg);
    return ch;
}
bool operator> (ifstream& one, ifstream& two)
{
    int count_one = 0;
    int count_two = 0;
    one.clear();
    two.clear();
    one.seekg(0,ios::beg);
    two.seekg(0,ios::beg);
    string s = " ";
    while (getline(one, s)){++count_one;}
    while (getline(two, s)){++count_two;}
    if (count_one > count_two){return true;}
    else {return false;}
}
bool operator== (ifstream& one, ifstream& two)
{
    int count_one = 0;
    int count_two = 0;
    one.clear();
    two.clear();
    one.seekg(0,ios::beg);
    two.seekg(0,ios::beg);
    string s = " ";
    while (getline(one, s)){count_one++;}
    while (getline(two, s)){count_two++;}
    if (count_one == count_two){return true;}
    else {return false;}
}
