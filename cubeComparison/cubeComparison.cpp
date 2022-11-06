/*
 * Question:
 *  Create a class called "Cube"
 *  - Define length, bradth and height as private members of the class (with double type)
 *  - Create a static data member named as object_counter
 *  - Write a constructor with three parameters, and in the constructor,
 *    increment the object_counter member for each call.
 *  - Write a function called "volume()"(double type) to calculate the volume.
 *  - Write a function calledd "compaer()"(integer type) to check the volumes of
 *    the cubes. Use 'this' pointer to compare.
 *  - Use "static int getCount()" function for counting.
 *
 *
 *  In your main function,
 *  Create two objects with the variables
 *      Cube Cube1(6.3,5.2,4.1)
 *      Cube Cube2(3.2,2.0,2.0)
 *  Output these two objects and output your initial, final stage of the count.
 *
 *
 * Sample run:
 *  Initial Stage Count: 0
 *  Constructor called.
 *  Constructor called.
 *  Final Stage Count: 2
 *  Cube2 is smaller than Cube1
 * */

#include <iostream>
using namespace std;

// Class definition.
class Cube{
    private:
        // Cube attributes.
        double length;
        double breadth;
        double height;

    public:
        // Static members are always same for each
        // object derived from the same class.
        // So every object created from "Cube" class
        // will have the same value as object_counter.
        static int object_counter;

        // Class methods.
        // Calculates the volume of cube object.
        double volume(){
            return (length*breadth*height);
        }
        // Compares two different objects by taking an object as
        // parameter.
        int compare(Cube cube){
            return (this->volume() > cube.volume());
        }
        // Returns the number of objects.
        static int getCount(){
            return object_counter;
        }

        // Constructor.
        Cube(double obj_length, double obj_breadth, double obj_height){
            cout << "Constructor called." << endl;
            this->length = obj_length;
            this->breadth = obj_breadth;
            this->height = obj_height;
            object_counter++;
        }
};
int Cube::object_counter = 0;

int main(void){
    cout << "Initial Stage Count: " << Cube::getCount() << endl;
    Cube Cube1(6.3,5.2,4.1);
    Cube Cube2(3.2,2.0,2.0);
    cout << "Final Stage Count: " << Cube::getCount() << endl;

    if(Cube1.compare(Cube2)){
        cout << "Cube2 is smaller than Cube1." << endl;
    }
    else{
        cout << "Cube2 is equal to or larger than Cube1." << endl;
    }
    return 0;
}
