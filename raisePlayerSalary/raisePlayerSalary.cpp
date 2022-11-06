/*
 * Question:
 *  Write a C++ program for a company that uses a system to
 *  control the salaries of it's employees.
 *
 *  In your program, you should show:
 *      1) The name of the employees
 *      2) Employees' salaries
 *      3) Employees' positions
 *
 *  Also users can update the salaries of the employees in the selected
 *  position by adding the amount of percentage that is entered.
 *
 *  In the main function, create an array of object from your class and
 *  print out the results before and after the raises.
 *
 *  Consider the sample run given below.
 *
 *
 * Sample run:
 *  Add employees:
 *  Enter employee's name: LeBron
 *  Enter the position: SF
 *  Enter the salary: 9876
 *
 *  Enter Employee's name: Anthony
 *  Enter the position: PF
 *  Enter the salary: 8765
 *
 *  Enter employee's name: Patrick
 *  Position: PG
 *  Enter the salary: 76543
 *
 *  Enter the raise percentage: 10
 *  Enter the position of the employees to raised: SF
 *
 *  Before raise:
 *  Employee's name: LeBron
 *  Position: SF
 *  Salary: 9876
 *
 *  After raise:
 *  Employee's name: LeBron
 *  Position: SF
 *  Salary: 9876
 *
 *  Before raise:
 *  Employee's name: Anthony
 *  Position: PF
 *  Salary: 8765
 *
 *  After raise:
 *  Employee's name: Anthony
 *  Position: PF
 *  Salary: 8765
 *
 *  Before raise:
 *  Employee's name: Patrick
 *  Position: PG
 *  Salary: 76543
 *
 *  After raise:
 *  Employee's name: Patrick
 *  Position: PG
 *  Salary: 76543
 * */


#include <iostream>
using namespace std;

// Employee class.
class Employee{
    public:
        // Employee attributes.
        string name;
        string position;
        float salary;


        // Constructor.
        Employee(){
            cout << "Enter employee's name: "; cin >> name;
            cout << "Enter the position: "; cin >> position;
            cout << "Enter the salary: "; cin >> salary;
        }

        // Methods.
        // Takes the percentage of raise as parameter.
        void raise(float raise_perc){
            this->salary = salary*raise_perc;
            return;
        }

        // Outputs the employee information.
        // I may use this function for the second attempt !!!!
        /*void print(){
            cout << "Employee's name: " << name << endl;
            cout << "Position: " << position << endl;
            cout << "Salary: " << salary << endl;
            return;
        }*/
};


// Driver function.
int main(void){
    float f_raise_perc;     // Will be passed to 'raise' method.
    int i_emp_num;          // The number of employees will determined by user.
    string str_pos;         // Position of the employees who will have a raise for salary.
    cout << "Enter the number of employees: "; cin >> i_emp_num;

    cout << "Adding employees" << endl;
    // Object array initialization.
    Employee employee[i_emp_num];

    // Raising the salary by position.
    cout << "Enter the raise percentage: ";  cin >> f_raise_perc;
    cout << "Enter the position of the employees to raised: "; cin >> str_pos;

    int i;
    for(i=0; i<i_emp_num; i++){
        // Before raise.
        cout << "Before raise:" << endl << "Employee's name: " << employee[i].name << endl << "Position: " << employee[i].position << endl << "Salary: " << employee[i].salary << "\n\n";

        // After raise.
        if(str_pos == employee[i].position){
            employee[i].raise(f_raise_perc);
        }
        cout << "After raise:" << endl << "Employee's name: " << employee[i].name << endl << "Position: " << employee[i].position << endl << "Salary: " << employee[i].salary << "\n\n";
    }
    return 0;
}






















