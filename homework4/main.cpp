/*
PIC 10B 2A, Homework 4
Purpose: Vector
Author: Chloe Tu
Date: 11/24/2019
*/

#include <iostream>
#include <vector>
#include "Complex.h"
#include "ComplexVector.h"

using namespace std;

int main(){
    Complex a,b,c,d,e,f,g,h;
    ComplexVector v1, v2, vfinal, vstream;
    a.set_values(2, 4);
    b.set_values(3, 5);
    c.set_values(-1,-3);
    d.set_values(8, 10);
    
    e.set_values(-10, 3.5);
    f.set_values(4, 7.3);
    g.set_values(2, -8);
    h.set_values(10, -142);
    
    v1.into_vector(a); v1.into_vector(b); v1.into_vector(c); v1.into_vector(d);
    v2.into_vector(e); v2.into_vector(f); v2.into_vector(g); v2.into_vector(h);
    
    cout << "     v1 = "; v1.vector_print();
    cout << endl << "     v2 = "; v2.vector_print();
    cout << endl << "v1 + v2 = "; vfinal = v1 + v2; vfinal.vector_print();
    cout << endl << "v1 - v2 = "; vfinal = v1 - v2; vfinal.vector_print();
    cout << endl << "v1 * v2 = "; vfinal = v1 * v2; vfinal.vector_print();
    cout << endl << "v1 / v2 = "; vfinal = v1 / v2; vfinal.vector_print();
    cout << endl << endl << "Writing Complex Sequence to file ... Done!" << endl;
    
    ofstream output_file;
    output_file.open("ComplexSequence.txt");
    vstream.recursive_function(5);
    vstream.print_recursive(output_file);
//    vstream.print_recursion(output_file);

    
//    vstream.get_recursion();
    
    return 0;
}
