/*
 * Question:
 *  Write a C++ program for ATMs (Automated Teller Machines) that are
 *  used for financial transactions. ATMs can be used to withdraw money
 *  or deposit money or even to know the information of an account like
 *  the balance amount etc.
 *
 *  In your main function, you should create a menu-driven program that
 *  includes transactions for user requests. Your balance value is 1000
 *  at the beginning of the program. You should check both the selected
 *  transaction and the balance of the account in your program.
 *
 *  Please consider the sample runs given below
 *
 *
 * Sample Run 1:
 *  Your balance: 1000
 *  **** TRANSACTION ****
 *  1. Withdrawal
 *  2. Deposit
 *  3. Check balance
 *  4. Cancel
 *  Enter your transaction: 2
 *  Your balance : 1000
 *  Enter the amount that you want to deposit : 200
 *  New balance is: 1200
 *  Enter your transaction: 1
 *  Your balance : 1200
 *  Enter the amount that you want to withdraw : 50
 *  New balance is : 1150
 *  Enter your transaction: 4
 *  Have a nice day.
 *
 *
 * Sample Run 2:
 *  **** TRANSACTION ****
 *  1. Withdrawal
 *  2. Deposit
 *  3. Check balance
 *  4. Cancel
 *  Enter your transaction: 1
 *  Your balance : 1000
 *  Enter the amount that you want to withdraw : 100
 *  New balance is: 900
 *  Enter your transaction: 1
 *  Your balance : 900
 *  Enter the amount that you want to withdraw : 50
 *  New balance is: 850
 *  Enter your transaction: 2
 *  Your balance : 850
 *  Enter the amount that you want to deposit : 75
 *  New balance is: 925
 *  Enter your transaction: 4
 *  Have a nice day.
 * */


#include <iostream>
#define f_default 1000; // Balance will always 1000 dollars at the beginning.

// Normally I don't include that statement but
// Teachers want us to include it.
using namespace std;
int main(void){
    // Required variables.
    float f_balance = f_default; // Default balance is 1000$
    float f_swap = 0; // Amount of money that user determines for transactions.
    int i_usr_sel; // User transaction var.

    // Welcome screen.
    cout << "**** TRANSACTION ****\n1.Withdrawal\n2.Deposit\n3.Check balance\n4.Cancel" << endl;
    while(true){
        // Transaction input.
        cout << "Enter your transaction: ";
        cin >> i_usr_sel;

        // Input validation.
        if(i_usr_sel < 1 || i_usr_sel > 4){
            cout << "Invalid argument!" << endl;
        }
            // Cancel.
        else if(i_usr_sel == 4){
            cout << "Have a nice day." << endl;
            break;
        }
            // Happy path.
        else{
            switch (i_usr_sel) {
                // Withdrawal.
                case 1:
                    // Current balance.
                    cout << "Your balance: " << f_balance << endl << "Enter the amount that you want to withdrawal: ";
                    cin >> f_swap;

                    // Error handling.
                    if(f_swap > f_balance){
                        cout << "You don't have enough money!" << endl;
                    }
                    else{
                        f_balance -= f_swap;
                        cout << "New balance: " << f_balance << endl;
                    }
                    break;

                    // Deposit.
                case 2:
                    // Current balance.
                    cout << "Your balance: " << f_balance << endl << "Enter the amount that you want to deposit: ";
                    cin >> f_swap;

                    // Error handling.
                    if(f_swap < 0){
                        cout << "You have entered a negative number, will be evaluated as positive!" << endl;
                        f_swap = -1 * f_swap;
                    }
                    f_balance += f_swap;
                    cout << "New balance: " << f_balance << endl;
                    break;

                    // Check balance.
                case 3:
                    cout << "Your balance: " << f_balance << endl;
                    break;

            }
        }
    }
    return 0;
}