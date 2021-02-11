/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Chloe Tu
Date: 12/02/2019
*/

class Iterator;
#ifndef List_h
#define List_h
#include <stdio.h>
#include "Iterator.h"
#include "Node.h"

class List
{
private:
    Node* first;
    Node* last;
public:
    void push_back(int d);
    Iterator erase(Iterator pos);
    void insert(Iterator pos, int d);
    Iterator begin();
    Iterator end();
    void reverse();
    void push_front(int d);
    void sort();
    void merge(List l);
    void print();
friend class Iterator;
};

#endif /* List_hpp */
