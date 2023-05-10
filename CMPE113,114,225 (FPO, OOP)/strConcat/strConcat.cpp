/*
Question:
    Write a C++ program that overloads the operator '+' as
    a member function to concatenate two strings.
    Create a class called String.

    - Define a string array as a member of the String class.
    - Write a constructor that has one parameter (array object)
    - Use an implicit pointer to an object for copying the strings.
    - Write a member function called print() to display the string 
      after the concatenation.
    - Overlaod '+' operator to concatenate the strings. Use the strcat()
      function to concatenate two strings and use the strcpy() function
      to copy the string to the string to be returned.

    In your main function, create two objects with the variables given below:
    
    String s1(str1)
    String s2(str2)
    char str1[]="Overloading"
    char str2[]="MemberFunction"

    Later on, create the third object named s3.
    Use the overloaded operator '+' to concatenate two strings that are already
    assigned to the s1 and s2 objects, then assign the concatenated string to the 
    s3 object. In the end, output the concatenated string as seen on the sample run

Sample run:
    Concatenated String: OverloadingMemberFunction
*/


#include <iostream>
#include <string.h>
using namespace std;

// String class.
class String{
  private:
    char _str[100];

  public:
    // Constructors.
    String(){};
    String(char _param_[]){strcpy(this->_str, _param_);}

    // Methods.
    // + operator overloading.
    String operator+ (String &_paramobj){
      String s3;

      // It concatenates variable of object parameter 
      // onto local object variable.
      strcat(this->_str, _paramobj._str);

      // Then it copies the concatenated string to the 
      // s3 object which will be returned at the end.
      strcpy(s3._str, this->_str);

      return s3;
    }


    void display(){
      cout << "New string: " << _str << endl;
    }
};

int main(void){
  // Required variables.
  char str1[] = "Overloading";
  char str2[] = "MemberFunction";

  // Required objects.
  String s1(str1);
  String s2(str2);
  String s3;

  // Operator overloading.
  s3 = s1 + s2;
  s3.display();
  return 0;
}