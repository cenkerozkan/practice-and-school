/*
 * Question:
 *  Write a function which is called "add" that has two integer parameters and
 *  returns the sum of these two integers as an integer. Also, overload this
 *  function three times, and whole overloaded functions return types are double.
 *  The first overloaded function, this function takes two parameters and the first
 *  parameter is an integer, and the second parameter is double. For the second
 *  overloaded, function, has two parameters and both of them are double.
 *
 *  Call these functions in the main function as ordered and give the parameters
 *  randomly, then see the results.
 *
 *
 * My Result:
 *  Sum is: 5.4
 *  Sum is: 5.5
 *  Sum is: 9.9
 * */

#include <iostream>
using namespace std;
void add(int num1, double num2);
void add(double num1, int num2);
void add(double num1, double num2);
int main(void){

    cout << "Function Overloading" << endl;
    add(2,3.4);
    add(3.5,2);
    add(3.4,6.5);

    return 0;
}


// 1st function.
void add(int num1, double num2){
    cout << "Sum is: " << num1+num2 << endl;
}

// 2nd function.
void add(double num1, int num2){
    cout << "Sum is: " << num1+num2 << endl;
}

// 3rd function.
void add(double num1, double num2){
    cout << "Sum is: " << num1+num2 << endl;
}