/*
 * Question:
 *  Write a C++ program that determines whether the triangle is perpendicular or
 *  not. You can find this by using Pythagorsa Theorem h^2 = s^2 + t^2
 *
 *  In your program, you should get the sides of the triangle from the user.
 *  Consider the sample runs given below.
 *
 *
 * Sample run 1:
 *  Enter two sides of the triangle: 3 4
 *  Enter the hypotenuse of the triangle: 5
 *  Perpendicular triangle
 *  Do you want to continue ?(Y/N): Y
 *  Enter two sides of the triangle: 5 8
 *  Enter the hypotenuse of the triangle: 9
 *  Do you want to continue? (Y/N): N
 *
 *
 * Sample run 2:
 *  Enter two sides of the triangle: 5 12
 *  Enter the hypotenuse of the triangle: 13
 *  Perpendiculat triangle
 *  Do you want to continue? (Y/N): N
 * */


#include <iostream>
// Normally I don't include that statement but
// Teachers want us to include it.
using namespace std;
int main(void){
    // Required variables.
    float f_side1, f_side2, f_hypo; // Two sides and the hypotenuse.
    char c_flag; // If user wishes to continue.

    while(true){
        // User input.
        cout << "Enter two sides of the triangle: ";
        cin >> f_side1 >> f_side2;
        cout << "Enter the hypotenuse: ";
        cin >> f_hypo;

        // Output.
        float f_sides = f_side1*f_side1 + f_side2*f_side2;
        float f_hypsq = f_hypo*f_hypo;
        switch (f_sides == f_hypsq) {
            case 1:
                cout << "Perpendicular triangle" << endl;
                break;
            default:
                cout << "Not perpendicular triangle" << endl;
                break;
        }

        // Continue?
        cout << "Do you want to continue? (Y/N): ";
        cin >> c_flag;

        if(c_flag != 'N' && c_flag != 'n' && c_flag != 'Y' && c_flag != 'y'){
            cout << "Invalid argument!" << endl;
        }
        else if(c_flag == 'N' || c_flag == 'n'){
            break;
        }
    }
    return 0;
}