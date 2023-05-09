/*
 * Question:
 *  Write a C++ Program for calculating the cost of staying
 *  in a hotel for a family (mother, father and  child).
 *  Your program should read the age of the child and the
 *  total number of staying days in the hotel from the user.
 *
 *  Then the cost should be calculated according to the given
 *  table below
 *
 *
 *      Age             Daily price
 *    _______          _____________
 *
 *       <5                 0
 *   5<= and <=10          100
 *       >10               150
 *
 *
 *  Sample Run 1:
 *      Enter the age of the child: 3
 *      How many days will you stay in the hotel? 4
 *      Total price: 1200
 *
 *  Sample Run 2:
 *      Enter the age of the child: 7
 *      How many days will you stay in the hotel? 2
 *      Total price: 800
 * */


#include <iostream>

// Normally I don't include that statement but
// Teachers want us to include it.
using namespace std;
int main(void){
    // Variables.
    int i_age, i_day, i_total_price;

    // Child age correction.
    do {
        cout << "Enter the age of the child: ";
        cin >> i_age;


    } while (i_age < 0);

    // Staying days.
    cout << "How many days will you stay in the hotel? ";
    cin >> i_day;

    switch (i_age) {
        // Age < 5
        case 0 ... 4:
            i_total_price = (i_day*2*150);
            break;

        // <=5 Age <= 10
        case 5 ... 10:
            i_total_price = (i_day*2*150) + (i_day*100);
            break;

        // Age > 10
        default:
            i_total_price = (i_day*3*150);
            break;
    }

    // Output.
    cout << "Total price: " << i_total_price << endl;
    return 0;
}