/*
Question:
    Suppose, you want to design the classes to model geometric objects such as
    circles and rectangles. Geometric objects have many common properties and
    behaviors. They can be drawn in a certain color, filled or unfilled. Thus
    a general class 'GeometricObject' can be used to model all geometric objects.

    The 'Circle' class inherits all accessible data fields and methods from
    the 'GeometricObject' class. In addition, it has a new data field radius and
    its associated methods.

    The 'Rectangle' class inherits all accessible data fields and methods from the 
    'GeometricObject' class. In addition, it has new data fields width and height
    and its associated methods.


    In the main function, create a Circle and a Rectange object and use 
    'calcArea()' and 'calcPerimeter()' methods of related objects to display
    the following output.
*/
#include <iostream>
#include <math.h> 	// pow()
using namespace std;

// Base class.
class GeometricObject{
	protected:
		string obj_color;
		bool obj_filled;
		
	public:
		// Constructors.
		GeometricObject(){}
		GeometricObject(string param_color){
			obj_color = param_color;
		}
		GeometricObject(bool param_filled){
			obj_filled = param_filled;
		}
		GeometricObject(string param_color, bool param_filled){
			obj_filled = param_filled;
		}
		
		// Methods.
		string getColor(){
			return obj_color;
		}
		
		bool isFilled(){
			return obj_filled;
		}
		
		void setColor(string param_color){
			obj_color = param_color;
			return;
		}
		
		void setFilled(bool param_filled){
			obj_filled = param_filled;
			return;
		}
};


// Derived classes.
class Circle:public GeometricObject{
	private:
		double obj_rad;
		double const pi = 3.14;
		
	public:
		// Constructors.
		Circle(){obj_rad = 2;}
		Circle(double param_rad){
			obj_rad = param_rad;
		}
		
		// Methods.
		void setRadius(double param_rad){
			obj_rad = param_rad;
		}
		
		double calcArea(void){
			return (pow(obj_rad,2)*pi);
		}
		
		double calcPerimeter(void){
			return obj_rad*2*pi;	
		}
};


class Rectangle:public GeometricObject{
	private:
		double obj_s1, obj_s2;	// Object side1, side2
		
	public:
		// Constructors.
		Rectangle(){}
		Rectangle(double param_s1, double param_s2){
			obj_s1 = param_s1;
			obj_s2 = param_s2;
		}
		
		
		// Methods.
		double calcArea(void){
			return obj_s1*obj_s2;
		}
		
		double calcPerimeter(void){
			return (2*(obj_s1 + obj_s2));
		}
};


int main(void){
	// Circle output.
	Circle c;
	cout << "A circle created with" << endl;
	cout << "Color: " << c.getColor() << endl;
	cout << "Filled: " << c.isFilled() << endl;
	cout << "The area: " << c.calcArea() << endl;
	cout << "The perimeter: " << c.calcPerimeter() << endl;
	cout << "\n\n";
	
	
	// Rectangle output.
	Rectangle r(2,4);
	cout << "A rectangle created with" << endl;
	cout << "Color: " << r.getColor() << endl;
	cout << "Filled: " << r.isFilled() << endl;
	cout << "The area: " << r.calcArea() << endl;
	cout << "The perimeter: " << r.calcPerimeter() << endl;
	
	return 0;
}
