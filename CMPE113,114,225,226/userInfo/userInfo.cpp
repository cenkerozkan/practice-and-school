/*
 * Question:
 *  Create a class called "Address" to hold the address information. (Aggregation)
 *      1) Define addressLine, city, and state as private members of the class
 *      2) Write a constructor with three parameters.
 *
 *  Create a class called "Employee" to hold information about an employee
 *      1) Define address_1 pointer (type: Address) as a private member of
 *         the class.
 *      2) Define id(type: integer) and name (type: string) as public members of
 *         the clas.
 *      3) Write a constructor with three parameters.
 *      4) Write a member function called display() to display the information
 *         of the employee.
 *      5) Write a member function called display() to display the information
 *         of the employee.
 *      6) Write get and/or set methods if you need them.
 *
 *  The main function is given as:
 *      int main(void){
 *          Adress a1=Address("Bahcelievler 7. Cadde","Ankara","TR");
 *          Employee e1 = Employee(225,"Bobo",&a1);
 *          e1 display();
 *          return 0;
 *      }
 *
 * Sample run:
 *  225 Bobo Bahcelievler 7. Cadde Ankara TR)
 * */
#include <iostream>
using namespace std;

// Address class which will be used in another
// as class member variable type.
class Address{
    private:
        string address_line;
        string city;
        string state;
    public:
        Address(string obj_address, string obj_city, string obj_state){
            address_line = obj_address;
            city = obj_city;
            state = obj_state;
        }

        string getState(){
            return state;
        }

        string getCity(){
            return city;
        }

        string getAddress(){
            return address_line;
        }
};


class Employee{
    private:
        Address *address_1;
    public:
        int id;
        string name;

        Employee(string obj_name, int obj_id, Address *address1){
            name = obj_name;
            id = obj_id;
            address_1 = address1;
        }

        void display(void){
            cout << id << " " << name << " " << address_1->getAddress() << " " << address_1->getCity() << " " << address_1->getState() << endl;
        }
};


int main(void){
    Address a1=Address("Bahcelievler 7. Cadde","Ankara","TR");
    Employee e1 = Employee("Bobo",225,&a1);
    e1.display();
    return 0;
}
