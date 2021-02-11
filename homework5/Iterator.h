/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Chloe Tu
Date: 12/02/2019
*/

class List;
#ifndef Iterator_h
#define Iterator_h

#include <stdio.h>
#include "List.h"
#include "Node.h"

class Iterator
{
private:
    Node* position;
    const List* container;
public:
    Iterator();
    int& get() const;
    void next();
    void previous();
    bool equals(Iterator b) const;
friend class List;
};

#endif /* Iterator_hpp */
