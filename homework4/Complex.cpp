/*
PIC 10B 2A, Homework 4
Purpose: Vector
Author: Chloe Tu
Date: 11/24/2019
*/

#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(){};
void Complex::set_values(double _real, double _imagin)
{
    real = _real;
    imagin = _imagin;
}
double Complex::get_real(){return real;}
double Complex::get_imagin(){return imagin;}
void Complex::print()
{
    if (imagin < 0)
    {cout << setw(8) << fixed << setprecision(1) << real << imagin << "i";}
    else cout << setw(8) << fixed << setprecision(1) << real << "+" << imagin << "i";
}
void Complex::print(ofstream& output)
{
    if (imagin > 0)
    {
        output << setw(12) << real << "+"<< imagin << "i";}
    
    else
        output << setw(12) << real << imagin << "i";
}

Complex Complex::operator+(Complex second)
{
    Complex x;
    double new_imagin = this->get_imagin() + second.get_imagin();
    double new_real = this->get_real() + second.get_real();
    x.set_values(new_real, new_imagin);
    return x;
}
Complex Complex::operator-(Complex second)
{
    Complex x;
    double new_imagin = this->get_imagin() - second.get_imagin();
    double new_real = this->get_real() - second.get_real();
    x.set_values(new_real, new_imagin);
    return x;
}
Complex Complex::operator*(Complex second)
{
    Complex x;
    double new_imagin = this->get_imagin() * second.get_real() + this->get_real() * second.get_imagin();
    double new_real = this->get_real() * second.get_real() - this->get_imagin() * second.get_imagin();
    x.set_values(new_real, new_imagin);
    return x;
}
Complex Complex::operator/(Complex second)
{
    Complex x;
    double new_real = (this->get_real() * second.get_real() + this->get_imagin() * second.get_imagin()) / (pow(second.get_real(),2) + pow(second.get_imagin(),2) * 1.0);
    double new_imagin = (this->get_imagin() * second.get_real() * 1.0 - this->get_real() * second.get_imagin() * 1.0) / (pow(second.get_real(),2) + pow(second.get_imagin(),2) * 1.0);
    x.set_values(new_real, new_imagin);
    return x;
}

