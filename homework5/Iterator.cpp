/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Chloe Tu
Date: 12/02/2019
*/

#include "Iterator.h"
#include <iostream>

Iterator::Iterator()
{
    position = NULL;
    container = NULL;
};
int& Iterator::get() const
{
    assert(position != NULL);
    return position->data;
}
void Iterator::next()
{
    assert(position != NULL);
    position = position->next;
}
void Iterator::previous()
{
    assert(position != container->first);
    if (position == NULL) position = container->last;
    else position = position->previous;
}
bool Iterator::equals(Iterator pos) const
{
    return position == pos.position;
}
