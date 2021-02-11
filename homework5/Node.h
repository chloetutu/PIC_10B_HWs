/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Chloe Tu
Date: 12/02/2019
*/

#ifndef Node_h
#define Node_h

#include <stdio.h>

class Node
{
private:
    int data;
    Node* previous;
    Node* next;
public:
    Node(int d);
friend class List;
friend class Iterator;
};

#endif /* Node_hpp */
