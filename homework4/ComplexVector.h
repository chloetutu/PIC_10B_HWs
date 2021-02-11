/*
PIC 10B 2A, Homework 4
Purpose: Vector
Author: Chloe Tu
Date: 11/24/2019
*/

#ifndef ComplexVector_h
#define ComplexVector_h

class Complex;
#include <stdio.h>
#include <vector>
#include "Complex.h"
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

class ComplexVector
{
private:
    vector<Complex>v1;
    vector<Complex>vstream;
public:
    ComplexVector();
    void into_vector(Complex);
    vector<Complex> get_vector();
    void vector_print();
    friend class Complex;
    Complex recursive_function(int);
    void print_recursive(ofstream&);
//    void stream_print(ofstream& output);
//        void print_recursion(ofstream&);

    ComplexVector operator+(ComplexVector second);
    ComplexVector operator-(ComplexVector second);
    ComplexVector operator*(ComplexVector second);
    ComplexVector operator/(ComplexVector second);
    
};

#endif /* ComplexVector_hpp */
