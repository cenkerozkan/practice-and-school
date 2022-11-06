/*
 * Question:
 *  Write a constructor and destructor for the class "Countr" considering
 *  the main function given below and according to the following output as
 *  seen below.
 *
 *  main(){
 *      Country Object1("Turkey");
 *      Country Object2("Germany",79);
 *      Country Object3("Brazil",17,214000000);
 *      return 0;
 *
 * Sample run:
 *  Turkey is created.
 *  Germany is created with 79 number of cities.
 *  Brazil is created with 17 number of cities and 214000000 populations.
 *  Brazil is fell down.
 *  Germany is fell down.
 *  Turkey is fell down.
 * */

#include <iostream>
using namespace std;

class Country{
    public:
        string name;
        int cities;
        int population;

        // Constructors.
        Country(string obj_name){
            this->name = obj_name;
            cout << name << " is created." << endl;
        }

        Country(string obj_name, int obj_cities){
            this->name = obj_name;
            this->cities = obj_cities;
            cout << name << " is created with " << cities << endl;
        }

        Country(string obj_name, int obj_cities, int obj_pop){
            this->name = obj_name;
            this->cities = obj_cities;
            this->population = obj_pop;
            cout << name << " is created with " << cities << " and " << population << " populations." << endl;
        }

        // Destructor.
        ~Country(){
            cout << name << " is fell down." << endl;
        }
};


int main(void){
    Country Object1("Turkey");
    Country Object2("Germany",79);
    Country Object3("Brazil",17,214000000);

    return 0;
}
