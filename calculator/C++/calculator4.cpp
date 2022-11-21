/*
 * (WITH CLASS)
 * (OPERATOR OVERLOADING)
 * Question:
 *  Write a function named 'calculator' that returns the sum(s), the
 *  difference (d), the product (p), and the quotient (q) of two real numbers
 *  num1 and num2.
 *
 *  The values of num1 and num2 should be entered by the main program.
 *  The results should be displayed by the main program.
 * */


#include <iostream>
using namespace std;

// Main class.
class Number{
    public:
        double num1,num2;

        // Constructors.
        //Number() If you define the default constructor like this,
        //         compiler will give you an undefined reference error.
        Number(){}
        Number(double obj_num1,double obj_num2) {num1 = obj_num1; num2 = obj_num2;}

        // Operator overloading.
        // + operand overload.
        Number operator + (Number const &param_obj){
            Number result;
            result.num1 = num1 + param_obj.num1;
            result.num2 = num2 + param_obj.num2;
            return result;
        }
        // - operand overload.
        Number operator - (Number const &param_obj){
            Number result;
            result.num1 = num1 - param_obj.num1;
            result.num2 = num2 - param_obj.num2;
            return result;
        }
        // * operand overload.
        Number operator * (Number const &param_obj){
            Number result;
            result.num1 = num1 * param_obj.num1;
            result.num2 = num2 * param_obj.num2;
            return result;
        }
        // / operand overload.
        Number operator / (Number const &param_obj){
            Number result;
            result.num1 = num1 / param_obj.num1;
            result.num2 = num2 / param_obj.num2;
            return result;
        }
        void print(){
            cout << num1 << " " << num2 << endl;
        }
};


int main(void){
    // Object initialization.
    Number nums1(2,3), nums2(2,3);


    // Addition operand.
    Number res = nums1 + nums2;
    cout << "Addition is: ";
    res.print();
    //cout << &res; DEBUG

    // Substraction operand.
    res = nums1 - nums2;
    cout << "Substraction is: ";
    res.print();
    //cout << &res; DEBUG

    // Multipltication operand.
    res = nums1 * nums2;
    cout << "Multipltication is: ";
    res.print();
    //cout << &res; DEBUG

    // Division operand.
    res = nums1 / nums2;
    cout << "Division is: ";
    res.print();
    //cout << &res; DEBUG
    return 0;
}