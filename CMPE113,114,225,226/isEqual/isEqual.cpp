/*
 * Question:
 *  Write a boolean function that takes float input as a parameter and compares
 *  this input with a global integer variable. The value of a global variable
 *  is 77.
 *
 *  Check whether the parameter and global value are the same, then return it in
 *  the result.
 *
 *  (Use the same name for global variable and function's parameter)
 * */

#include <iostream>
using namespace std;
double x = 77; // Global variable.
int isEqual(float x);
int main(void){
    float v;
    cout << "Enter a number: "; cin >> v;
    cout << "Equality result is: " << isEqual(v);
    return 0;
}

int isEqual(float x){
    if(x == ::x){
        return true;
    }
    else{
        return false;
    }
}
