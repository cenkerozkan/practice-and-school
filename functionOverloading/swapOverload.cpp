/*
 * Question:
 *  Write two functions that swap both parameters to send from the
 *  main by the user. The first function takes values as references
 *  and the second function takes values as pointers.
 *
 *  Test the code and change the parameters of the first functions as
 *  value, and print the result before exiting the function and after
 *  calling the function. Observe the results.
 * */


#include <iostream>
using namespace std;
// Function overloading with different call methods.
void swap(int *val1, int *val2);    // With pointer.
void swap(int &val1, int &val2);    // With reference.
int main(void){
    // Variables before swap operation.
    int num1=3, num2=4;
    cout << "Variables before swap operation:\nNumber1:" << num1 << "\nNumber2:" << num2 << endl;

    // 1st swap call.
    swap(&num1,&num2); // With pointer.
    cout << "Variables after swap operation:\nNumber1:" << num1 << "\nNumber2:" << num2 << endl;

    // 2nd swap call.
    swap(num1,num2); // With reference.
    cout << "Variables after swap operation:\nNumber1:" << num1 << "\nNumber2:" << num2 << endl;

    return 0;

}


// 1st function.
void swap(int *val1, int *val2){
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
    return;
}

// 2nd function.
void swap(int &val1, int &val2){
    int temp;
    temp = val1;
    val1 = val2;
    val2 = temp;
    return;
}