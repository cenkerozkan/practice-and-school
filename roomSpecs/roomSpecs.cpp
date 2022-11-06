/*
 * Question:
 *  Create a class named "Room".
 *  "Room" class has three public variables.
 *      1) length (double)
 *      2) breadth (double)
 *      3) height (double)
 *  Also, it has two member functions that calculate
 *  the area and volume of the room.
 *
 *  In the main function;
 *      - Assign the values of length, breadth and height.
 *      - Create an object from class "Room" to calculate the
 *        area and volume of a room.
 *      - Call the related member functions to perform the
 *        calculations.
 *
 *
 * Sample run:
 *  Area of Room = 1600.75
 *  Volume of Room = 33935.9
 * */

#include <iostream>
using namespace std;

class Room{
    public:
        double length;
        double breadth;
        double height;

        // Constructor.
        Room(double len, double bred, double heig){
            this->length = len;
            this->breadth = bred;
            this->height = heig;
        }


        void area(void){
            cout << "Area of Room = " << (length*breadth) << endl;
        }

        void volume(void){
            cout << "Volume of Room = " << (length*breadth*height) << endl;
        }

};


int main(void){
    // Required variables.
    double d_lenght, d_height, d_breadth;

    // User input.
    cout << "Enter the length of the room: ";   cin >> d_lenght;
    cout << "Enter the breadth of the room: ";   cin >> d_breadth;
    cout << "Enter the height of the room: ";   cin >> d_height;

    // Object initialization.
    Room room1(d_lenght,d_breadth,d_height);

    // Class methods to calculate area/volume.
    room1.area();
    room1.volume();

    return 0;
}

