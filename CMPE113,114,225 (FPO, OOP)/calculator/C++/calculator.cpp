/*
 * (WITHOUT CLASSES)
 *
 * Question:
 *  Write a function named 'calculator' that returns the sum(s), the
 *  difference (d), the product (p), and the quotient (q) of two real numbers
 *  num1 and num2.
 *
 *  The values of num1 and num2 should be entered by the main program.
 *  The results should be displayed by the main program.
 *
 * */


#include <iostream>
using namespace std;

void calculator(float num1, float num2, float *result_arr);
int main(void){
    int i = 0;
    float f_num1, f_num2;
    float result_list[4];
    while(true){
        // Input.
        cout << "Enter number 1: ";
        cin >> f_num1;
        cout << "Enter number 2: ";
        cin >> f_num2;
        calculator(f_num1,f_num2,result_list);

        // Output.
        cout << "Addition: " << result_list[0] << endl << "Substraction: " << result_list[1] << endl << "Multiplication: " << result_list[2] << endl << "Division: " << result_list[3] << endl;

    }
}


void calculator(float num1, float num2, float *result_arr){
    result_arr[0] = num1+num2;  // Addition.
    result_arr[1] = num1-num2;  // Substraction.
    result_arr[2] = num1*num2;  // Multiplication.
    result_arr[3] = num1/num2;  // Division.
    return;
}