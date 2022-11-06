/*
 * Question:
 *  Write a C++ code that has two classes "Enclose" and "Inner".
 *  The "Inner" class is defined inside the class "Enclose", so it is
 *  a nested class.
 *
 *  The class "Inner" contains:
 *      1) number(private)
 *      2) getdata() function: takes the data (public)
 *      3) putdata() function: d,splays the data (public)
 *
 *  In the main function, you should define an object and then call the
 *  getdata() and putdata() functions using the variable object.
 *
 *
 *
 * Sample run:
 *  Nested classes in C++
 *  The number is 7
 * */

#include <iostream>
using namespace std;

// Outside class
class Enclose{
    // Outside (nested) class.
    public:
        class Inner{
            private:
                int number;
            public:
                //Inner(); Compiler gives an undefined reference error because of the
                //         constructor. (INVALID SYNTAX)
                Inner(){}; // Normally compiler creates a default constructor with or
                           // without our code. But If you want to create an empty
                           // Constructor, this is the right way create it.
                double getData(double obj_number){
                    this->number = obj_number;
                    return 0;
                }
                void putData(void){
                    cout << "The number is " << number << endl;
                    return;
                }
        };
};

int main(void){
    cout << "Nested classes in C++" << endl;
    Enclose :: Inner obj1;
    obj1.getData(7);
    obj1.putData();
    return 0;
}
