/*
 * Question:
 *  Write a C++ code that has two classes. Use composition (Class objects as members of
 *  classes)
 *
 *  The first one is named "Date" and has the following data members and functions:
 *      1) day (integer)
 *      2) month (integer)
 *      3) year (integer)
 *
 *  A constructor function should make assignments using member initialization.
 *  Create a void function called display() to print day,month,year
 *
 *
 *  The second class is named "Person" and has the following data members and functions:
 *      1) name (string)
 *      2) Date birthday (a birthday is an object with type Date class)
 *  A constructor to initialize the name and also send the day, month, and year to the
 *  constructor of the birthday object.
 *  Create a void function called display() to print day,month,year
 *
 *
 *  In your main function,
 *  Create two objects with the variables
 *  P1("Kobe",23,7,1978)
 *  P2("Stephen",14,3,1988)
 *  and call the display function from Person class for both.
 * */

#include <iostream>
using namespace std;

// Date class. (1st)
class Date{
    // Date attributes.
    // This class will be used as a data type for another class.
    public:
        int day;
        int month;
        int year;

        // Different constructor expression.
        // NOTE: If you don't add blank curly braces at the end of the
        //       constructor declaration, compiler will give you an error.
        Date(int obj_day, int obj_month, int obj_year):day(obj_day),month(obj_month),year(obj_year){};
        void display();
};

void Date::display(){
    cout << day << "/" << month << "/" << year << endl;
    return;
}



// Person class (2nd)
class Person{
    public:
        string name;
        Date birthday;  // Attribute which has a type of another class.

        Person(string obj_name,int day, int month, int year):birthday(day,month,year){
            name = obj_name;
        };

        void display();
};

void Person::display(){
    cout << name << "  "; birthday.display();
    return;
}


// Driver function.
int main(void){
    Person P1("Kobe",23,7,1978);
    Person P2("Stephen",14,3,1988);
    P1.display();
    P2.display();
    return 0;
}

