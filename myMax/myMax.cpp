/*
 * Question:
 *  Write a function named as "myMax()" that returns the maximum variable of
 *  the related variables. Use a function template, and define your function
 *  that works for all data types.
 *  (Do not overload the function. Solve the problem by using a function template)
 *
 * Sample run:
 *  Enter two integer variables (3,7), Max is: 7
 *  Enter two double variables (3.0, 7.0), Max is: 7
 *  Enter two character variables (g,a), Max is: g
 * */

#include <iostream>
using namespace std;

// Function template can work with all data types.
template <typename T>
T myMax(T var1, T var2){
    return var1 > var2 ? var1 : var2; // TO DO: Çalışırsa açıkla
};

int main(void){
    // To pass to the function.
    int i_val1, i_val2;
    double d_val1, d_val2;
    char c_val1, c_val2;


    // Input.
    cout << "Enter two integer variables: "; cin >> i_val1 >> i_val2;
    cout << "Enter two double variables: "; cin >> d_val1 >> d_val2;
    cout << "Enter two character variables: "; cin >> c_val1 >> c_val2;

    // DEBUG (To see if variables are assigned correctly).
    //cout << "test" << i_val1 << i_val2 << endl;
    //cout << "test" << d_val1 << d_val2 << endl;
    //cout << "test" << c_val1 << c_val2 << endl;

    // Output.
    cout << "For integers, max is: " << myMax(i_val1, i_val2) << endl;
    cout << "For doubles, max is: " << myMax(d_val1, d_val2) << endl;
    cout << "For characters, max is: " << myMax(c_val1, c_val2) << endl;

    return 0;
}
