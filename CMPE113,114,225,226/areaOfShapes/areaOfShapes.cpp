/*
 * Question:
 *  Define a function called "area()" that has two integer parameters and
 *  returns the area of the rectangle. By using function overloading,
 *  overload this function two times, and these overloaded functions'
 *  return types are double.
 *
 *  For the first overloaded function, you should calculate the area
 *  of the circle, and your function takes one double parameter.
 *
 *  For the second overloaded function, this function takes two double
 *  parameters for calculating the area of the triangle.
 *
 *  In the main function, call these functions as ordered and give parameters,
 *  then see the area results of the rectangle, circle and triangle on the
 *  screen.
 *
 * Sample run:
 *  Area of Rectangle: 24
 *  Area of Circle: 314
 *  Area of Triangle: 10.5
 * */

#include <iostream>
using namespace std;
int area(int i_length, int i_height);           // Area of rectangle.
double area(double d_rad);                      // Area of circle.
double area(double d_side1, double d_side2);    // Area of triangle.
int main(void){
    cout << "The area of rectangle: " << area(4,6) << endl;
    cout << "The area of circle: " << area(10) << endl;
    cout << "The area of triangle: " << area(3.0,7.0) << endl;
}


// Reactangle (1st)
int area(int i_length, int i_height){
    return i_length*i_height;
}


// Circle (2nd)
double area(double d_rad){
    return 3.14*d_rad*d_rad;
}


// Triangle (3rd)
double area(double d_side1, double d_side2){
    return 0.5*d_side1*d_side2;
}
