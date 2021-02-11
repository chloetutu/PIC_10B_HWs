/*
PIC 10B 2A, Homework 4
Purpose: Vector
Author: Chloe Tu
Date: 11/24/2019
*/

#ifndef Complex_h
#define Complex_h

#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

class Complex
{
private:
    double real;
    double imagin;
public:
    Complex();
    void set_values (double _real, double _imagin);
    double get_real();
    double get_imagin();
    void print();
    void print(ofstream&);

    Complex operator+(Complex second);
    Complex operator-(Complex second);
    Complex operator*(Complex second);
    Complex operator/(Complex second);

    friend class ComplexVector;
};

#endif /* Complex_hpp */
