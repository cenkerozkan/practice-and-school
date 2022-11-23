/*
 * Question:
 *  Write a program that inputs two vectors with size of 3,
 *  calculates the distance between these vectors by
 *
 *      d = sqrt((xi-yi)^2 + (x2-y2)^2)
 *
 * Sample Run:
 *  Enter X vector: 4.0 6.0 -1.0
 *  Enter Y vector: 3.0 8.0 1.0
 *  Distance is: 3.00
 * */

#include <iostream>
#include <math.h>   // To use power function.
using namespace std;

// I will create two objects from created from
// Vector class to calculate the distance between them.
class Vector{
private:
    // The reason I store it as private is to access them
    // via class methods.
    float vec_array[3];

public:
    // Constructors.
    Vector(){}
    Vector(float fX, float fY, float fZ){this->vec_array[0]=fX; this->vec_array[1]=fY; this->vec_array[2]=fZ;}

    // Methods.
    // This time I take an adress of an object as parameter.
    float calcDistance(Vector *);
};

// Outline class method.
float Vector::calcDistance(Vector *vec){
    int i;
    float f_dum=0;  // Will be returned to the result variable.
    for(i=0; i<3; i++){
        f_dum += pow((vec_array[i] - vec->vec_array[i]),2);
    }
    return sqrt(f_dum);
}



int main(void){
    // Required var.
    float x,y,z;
    float f_result;

    // 1st vector object.
    cout << "Enter vector 1: "; cin >> x >> y >> z;
    Vector vec1(x,y,z);

    // 2nd vector object.
    cout << "Enter vector 2: "; cin >> x >> y >> z;
    Vector vec2(x,y,z);

    // Calculation
    f_result = vec1.calcDistance(&vec2);

    // Output.
    cout << "The distance between two vectors is: " << f_result << endl;

    return 0;
}
