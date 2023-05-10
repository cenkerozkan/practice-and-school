/*
 * Question:
 *  Write two functions for computing the absolute value of
 *  both integer and float values by using a function template,
 *  not function overloading.
 *
 * Sample run:
 *  Absolute value of -7 = 7
 *  Absolute value of 7.7 = 7.7
 * */

#include <iostream>
using namespace std;

template <typename T>
void abs(T num){
    // If number is negative.
    if(num < 0){
        cout << "Absolute value of num " << num << "=" << -1*num << endl;
    }
    cout << "Absolute value of num " << num << "=" << num << endl;
}

int main(void){
    cout << "Absolute value template" << endl;
    cout << abs(-7) << endl;
    cout << abs(7.7) << endl;
    return 0;
}