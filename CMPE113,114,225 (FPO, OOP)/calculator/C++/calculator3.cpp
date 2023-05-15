/*
 * (WITH CLASS)
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
class Calculator{
public:
    float num1,num2;
    Calculator(){};
    Calculator(float obj_num1, float obj_num2){this->num1=obj_num1; this->num2=obj_num2;}

    // Method prototype.
    void calc(void);
};

// Outside class method.
void Calculator::calc(void){
    cout << "Addition: " << (num1+num2) << endl << "Substraction: " << num1-num2 << endl << "Multipltication: " << (num1*num2) << endl << "Division: " << (num1/num2) << endl;
}


int main(void){
    float f_num1,f_num2;
    while(true){
        cout << "Enter number 1: ";
        cin >> f_num1;
        cout << "Enter number 2: ";
        cin >> f_num2;

        // Object initialization.
        Calculator obj1(f_num1,f_num2);
        obj1.calc();
    }
}
