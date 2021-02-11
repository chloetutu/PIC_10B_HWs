/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Chloe Tu
Date: 12/02/2019
*/

#include "List.h"
#include <iostream>
#include <cassert>

void List::push_back(int d){
    Node* new_node = new Node(d);
    if (first == NULL)
    {
        first = new_node;
        last = new_node;
    }
    else
    {
        new_node->previous = last;
        last->next = new_node;
        last = new_node;
    }
}
Iterator List::erase(Iterator pos){
    assert(pos.position != NULL);
    Node* remove = pos.position;
    Node* before = remove->previous;
    Node* after = remove->next;
    if (remove == first) first = after;
    else before->next = after;
    if (remove == last) last = before;
    else after->previous = before;
    delete remove;
    Iterator final;
    final.position = after;
    final.container = this;
    return final;
}
void List::insert(Iterator pos, int d){
    if (pos.position == NULL)
    {
        push_back(d);
        return;
    }
    Node* after = pos.position;
    Node* before = after->previous;
    Node* new_node = new Node(d);
    new_node->previous = before;
    new_node->next = after;
    after->previous = new_node;
    if (before == NULL) first = new_node;
    else before->next = new_node;
}
Iterator List::begin(){
    Iterator iter;
    iter.position = first;
    iter.container = this;
    return iter;
}
Iterator List::end(){
    Iterator iter;
    iter.position = NULL;
    iter.container = this;
    return iter;
}
void List::reverse()
{
    Iterator b_it;
    Iterator e_it = end();
    for (b_it = begin(); !(b_it.equals(end())); b_it.next())
    {
        if (b_it.equals(e_it)) break;
        e_it.previous();
        if (b_it.equals(e_it)) break;
        else
        {
            int temp = b_it.get();
            b_it.get() = e_it.get();
            e_it.get() = temp;
        }
    }
}
void List::sort()
{
    Iterator it;
    Iterator one;
    for (one = begin(); !one.equals(end()); one.next())
    {   for (it = begin(); !it.equals(end()); it.next())
        {
            if (one.get() < it.get())
            {
                int temp = one.get();
                one.get() = it.get();
                it.get() = temp;
            }
        }
    }
}

void List::merge(List l)
{
    Iterator it1 = begin();
    Iterator it2 = l.begin();
    while (!(it1.equals(end())) && !(it2.equals(l.end())))
    {
        it1.next();
        insert(it1, it2.get());
        it2.next();
    }
    if (!(it2.equals(l.end())))
    {
        push_back(it2.get());
        it2.next();
    }
}

void List::print()
{
    Iterator it;
    std:: cout << "(";
    Iterator before_end = end();
    before_end.previous();
    for (it = begin(); !it.equals(before_end); it.next())
    {
        std::cout << it.get() << ", ";
    }
    std::cout << before_end.get() << ")";
}
