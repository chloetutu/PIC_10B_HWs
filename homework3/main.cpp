/*
PIC 10B 2B, Homework 3
Purpose: File Comparison
Author: Chloe Tu
Date: 11/2/2019
*/

#include <iostream>
#include <fstream>
#include <string>
#include "textfile.h"
using namespace std;

int main() {
    string file_1, file_2;
    ifstream input_file_1, input_file_2;
    ofstream output_file;
    output_file.open("Properties.txt");
    cout << "Enter the name of file 1: ";
    cin >> file_1;
    input_file_1.open(file_1.c_str());
    cout << "Enter the name of file 2: ";
    cin >> file_2;
    input_file_2.open(file_2.c_str());
    output_file << "File name: " << file_1 << endl << "Number of characters: " << no_of_char(input_file_1) << endl << "Number of words: " << no_of_words(input_file_1) << endl << endl;
    output_file << "File name: " << file_2 << endl << "Number of characters: " << no_of_char(input_file_2) << endl << "Number of words: " << no_of_words(input_file_2) << endl << endl;
    if (input_file_1 > input_file_2) {output_file << "The file named \"" << file_1 << "\" has more lines than \"" << file_2 << "\".";}
    else if (input_file_1 == input_file_2) {output_file << "The file named \"" << file_1 << "\" has the same amount of lines as \"" << file_2 << "\".";}
    else {output_file << "The file named \"" << file_1 << "\" has less lines than \"" << file_2 << "\".";}
    output_file.close();
    input_file_1.close();
    input_file_2.close();
    return 0;
}
