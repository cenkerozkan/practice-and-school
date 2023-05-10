/*
 * Question:
 *  Write a class called "PlayerInformation".
 *  This class has three public variables,
 *      1) Name (string)
 *      2) Surname (string)
 *      3) Age (int)
 *
 *  In the main function,
 *  create an object from "PlayerInformation" class. Then output the
 *  player information by using the object.
 *
 * Sample run:
 *  Name: Kobe
 *  Surname: Bryant
 *  Age: 44
 * */

#include <iostream>
using namespace std;

class PlayerInformation{
    public:
        string name;
        string surname;
        int age;

        PlayerInformation(string p_name, string p_sname, int p_age){
            this->name = p_name;
            this->surname = p_sname;
            this->age = p_age;
        }

        void display(void){
            cout << "Name: " << name << endl << "Surname: " << surname << endl << "Age: " << age << endl;
            return;
        }
};


int main(void){
    PlayerInformation player1("Kobe","Bryant",44);
    player1.display();
    return 0;
}
