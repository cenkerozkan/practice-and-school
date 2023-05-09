/*
Question:
	Write a C++ code that has three classes.
	
	- First one is named 'Student'
		a. studentId (int)
		b. constructor
		c. int getStudentId()  (method)
		
	- Second one is named 'Teacher'
		a. registrationNo (int)
		b. constructor
		c. int getRegistrationNo() (method)
		
	
	- Third one is 'Assistant'. It has a constructor with
	  two parameters to initialize all of the data members
	  Use multiple inheritance, consider a base classes
	  Student and Teacher, derived class Assistant
*/
#include <iostream>
using namespace std;

// Base classes
// 1st Base class.
class Student{
	protected:
		int stdId;
	
	public:
		// Constructors.
		Student(){cout << "Default constructor Student" << endl;}
		Student(int pId){
			this->stdId = pId;
		}
		
		// Methods.
		int getId(){
			return stdId;
		}
};


// 2nd Base class.
class Teacher{
	protected:
		int regNo;
		
	public:
		// Constructors.
		Teacher(){cout << "Default constructor Teacher" << endl;}
		Teacher(int pRegNo){
			this->regNo = pRegNo;
		}
		
		// Methods.
		int getRegNo(){
			return regNo;
		}
};


// Derived class.
class Assistant:public Student, public Teacher{
	public:
		//
		Assistant(){}
		Assistant(int pId, int pRegNo):Student(pId),Teacher(pRegNo){
			cout << "Assistant object created succesfully" << endl;
		}
};


int main(void){
	Assistant a1(9753,987);
	
	// Default constructor of base classes
	// Will also be called when you declare 
	// your derivec object.
	Assistant a2;
	cout << "Student id: " << a1.getId() << endl << "Registration number: " << a1.getRegNo() << endl;
	return 0;
}