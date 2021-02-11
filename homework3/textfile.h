/*
PIC 10B 2B, Homework 3
Purpose: File Comparison
Author: Chloe Tu
Date: 11/2/2019
*/

#ifndef textfile_h
#define textfile_h
#include <string>
#include <fstream>
using namespace std;

int no_of_words (ifstream&);
long no_of_char (ifstream&);
bool operator> (ifstream&, ifstream&);
bool operator== (ifstream&, ifstream&);

#endif
