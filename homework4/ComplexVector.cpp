/*
PIC 10B 2A, Homework 4
Purpose: Vector
Author: Chloe Tu
Date: 11/24/2019
*/

#include "ComplexVector.h"
using namespace std;

ComplexVector::ComplexVector() {};
void ComplexVector::into_vector(Complex entry)
{
    v1.push_back(entry);
}
vector<Complex> ComplexVector::get_vector()
{
    return v1;
}
void ComplexVector::vector_print()
{
    cout << "{";
    for (int i = 0; i < v1.size() - 1; i++)
    {
        v1[i].print();
        cout << ",";
    }
    v1[v1.size()-1].print();
    cout << "}";
}
ComplexVector ComplexVector::operator+(ComplexVector second)
{
    ComplexVector final;
    for (int i = 0; i < v1.size(); i++)
    {
        Complex x = this->get_vector()[i] + second.get_vector()[i];
        final.into_vector(x);
    }
    return final;
}
ComplexVector ComplexVector::operator-(ComplexVector second)
{
    ComplexVector final;
    for (int i = 0; i < v1.size(); i++)
    {
        Complex x = this->get_vector()[i] - second.get_vector()[i];
        final.into_vector(x);
    }
    return final;
}
ComplexVector ComplexVector::operator*(ComplexVector second)
{
    ComplexVector final;
    for (int i = 0; i < v1.size(); i++)
    {
        Complex x = this->get_vector()[i] * second.get_vector()[i];
        final.into_vector(x);
    }
    return final;
}
ComplexVector ComplexVector::operator/(ComplexVector second)
{
    ComplexVector final;
    for (int i = 0; i < v1.size(); i++)
    {
        Complex x = this->get_vector()[i] / second.get_vector()[i];
        final.into_vector(x);
    }
    return final;
}

Complex ComplexVector::recursive_function(int n)
{
    Complex num, dem, fn1;
    if (n == 0)
    {
        fn1.set_values(1, 1);
        vstream.push_back(fn1);
        return fn1;
    }
    num.set_values(2 * n, 3 * n);
    dem.set_values(7, 5 * n * n);
    fn1 = num / dem * recursive_function(n - 1);
    vstream.push_back(fn1);
    return fn1;
}
void ComplexVector::print_recursive(ofstream& output)
{
    output << "{";
    for (int i = 0; i < vstream.size() - 1; i++)
    {
        vstream[i].print(output);
        output << ",";
    }
    vstream[vstream.size()-1].print(output);
    output << "}";
}
