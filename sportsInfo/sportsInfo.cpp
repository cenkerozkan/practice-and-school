/*
 * Question:
 *  Write a class called "Sports", its constructor takes a string
 *  parameter and prints a message "(string parameter value) is created."
 *  In the main function, you have to create an object from the
 *  "Sports" class and send "Basketball" as a parameter and print the
 *  result as shown in the sample run.
 *
 *  Use the overloaded constructor to ensure the sample run given
 *  below.
 *
 * Sample run:
 *  Basketball is created.
 *  Team: Golden State Warriors
 *  Player name: Stephen Curry
 * */

#include <iostream>
using namespace std;

class Sports{
    public:
        string name;    // Object name.
        string p_name;  // Player name.
        string p_team;  // Player team.

        Sports(string obj_name){
            this->name = obj_name;
            cout << name << " is created." << endl;
        }

        Sports(string obj_name, string player_name, string player_team){
            this->name = obj_name;
            this->p_name = player_name;
            this->p_team = player_team;

            cout << name << " is created." << endl << "Team: " << p_team << endl << "Player name: " << p_name << endl;
        }
};


int main(void){
    Sports sport1("Basketball","Stephen Curry","Golden State Warriors");
    return 0;
}
