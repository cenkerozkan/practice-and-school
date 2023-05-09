/*
Question:
    Write a C++ program to create a class called ComplexNumber.

    - Define real and imaginary variables (float).
        a. real: to store the real coefficient.
        b. imaginary: to store the imaginary coefficient.
    
    - Create your constructor.
    
    - Overload '+' and '-' operators to add and substract two
      complex numbers.
    
    - Declare display() function to print out the result on the screen.

Sample Run:
    Enter real and complex coefficient of the first complex number:
    7 9

    Enter real and complex coefficient of the second complex number:
    3 5

    Addition result: 10 + 14i
    Substraction result: 4 + 4i
*/

#include <iostream>
using namespace std;

class ComplexNumber{
    public:
        // Required variables.
        float _real;
        float _imaginary;

        // Constructors.
        ComplexNumber(){}
        ComplexNumber(float _real_, float _imaginary_){_real = _real_; _imaginary = _imaginary_;}


        // Methods.
        ComplexNumber operator+ (ComplexNumber _obj_){
            ComplexNumber ret;
            ret._real = _real + _obj_._real;
            ret._imaginary = _imaginary + _obj_._imaginary;
            return ret;
        }

        ComplexNumber operator- (ComplexNumber _obj_){
            ComplexNumber ret;
            ret._real = _real - _obj_._real;
            ret._imaginary = _imaginary - _obj_._imaginary;
            return ret;
        }


        void display(){
            cout << _real << " + " << _imaginary << "i" << endl;
        }
};


int main(void){
    // Objects.
    ComplexNumber n1, n2, n3;

    cout << "Enter real and complex coefficient of the first number:" << endl;
    cin >> n1._real >> n1._imaginary;

    cout << "Enter real and complex coefficient of the second number:" << endl;
    cin >> n2._real >> n2._imaginary;

    n3 = n1 + n2;
    cout << "addition result:" << endl;
    n3.display();

    cout << "substraction result:" << endl;
    n3 = n1 - n2;
    n3.display();

    return 0;
}