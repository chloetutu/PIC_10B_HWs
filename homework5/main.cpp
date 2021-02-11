/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Chloe Tu
Date: 12/02/2019
*/

#include <iostream>
#include "Iterator.h"
#include "Node.h"
#include "List.h"
using namespace std;

int main()
{
    List numbers;
    cout << "Please input a set of nonnegative numbers for a List" << endl << "(Enter -1 when you are finished):" << endl << endl;
    int og_input = 0;
    int new_input = 0;
    int index_input = 0;
    while (true)
    {
        cin >> og_input;
        if (og_input == -1) break;
        numbers.push_back(og_input);
    }
    cout << endl << "Your list is" << endl;
    numbers.print();
    cout << endl << endl;

    while (true)
    {
        cout << "Select an index for insertion (enter -1 when you are finished): ";
        cin >> index_input;
        if (index_input == -1) break;
        else
        {
            cout << "Select a value for insertion: ";
            cin >> new_input;
            Iterator index = numbers.begin();
            while (index_input != 0)
               {
                   --index_input;
                   index.next();
               }
            numbers.insert(index, new_input);
        }
    }
    
    cout << endl << "The augmented List is" << endl;
    numbers.print();
    cout << endl << endl << "When we sort the previous list we obtain " << endl;
    numbers.sort(); numbers.print();
    cout << endl << "And this sorted list in reverse order is " << endl;
    numbers.reverse(); numbers.print();
    List to_merge;
    to_merge.push_back(2); to_merge.push_back(3); to_merge.push_back(5); to_merge.push_back(7);to_merge.push_back(11);
    cout << endl << "If we merge this list with the list "; to_merge.print(); cout << " we obtain" << endl;
    numbers.merge(to_merge);
    numbers.print();
    return 0;
}
