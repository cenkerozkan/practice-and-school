/*
Question:
    Write a C++ program to create a class called Math.
    It has three integer member variables, num1, num2 and result.
    This class has three member functions as follows;

    - The function named add does the summation of num1 and num2 
      variables, then assigns the summation to the result variable.

    - The function named substract substracts num1 from num2 and then
      assigns the substraction result to the result variable.

    - The function named multiply multiplies num1 and num2, then assigns
      the result to the result variable.

    You need to overload the operator '>>' as a friend function to
    input a math object. Also overload the operator '<<' as a friend
    function to output a Math object.

    In your main function, create an object, and assign the inputted
    integers to the data members of the object using an overloaded (>>)
    operator. Then, call all the functions, and output the object using an
    overlaoded operator (<<) as given in Sample Run below.

Sample Run:
    Enter two integers:
    11
    7
    addition:18
    substraction:4
    multiplication:77
*/

#include <iostream>
using namespace std;

class Math{
  private:
    int num1, num2, result;

  public:
    // Methods.
    void add(){
      result = num1 + num2;
    }

    void substract(){
      result = num1 - num2;
    }

    void multiply(){
      result = num1 * num2;
    }


    // Friend operator overloading.
    friend ostream & operator << (ostream &out, Math &_obj_);
    friend istream & operator >> (istream &in, Math &_obj_);
};


// Overloaded functions.
ostream & operator << (ostream &out, Math&_obj_){
  out<<_obj_.result;
  return out;
}

istream & operator >> (istream &in, Math &_obj_){
  cin>>_obj_.num1>>_obj_.num2;
  return in;
}


int main(void){
  Math c;
  cout << "Enter two integers: " << endl;
  cin>>c;

  c.add();
  cout << "addition: " <<c<<endl;
  c.substract();
  cout << "substraction: " <<c<<endl;
  c.multiply();
  cout << "multiplication: " <<c<<endl;

  return 0;
}