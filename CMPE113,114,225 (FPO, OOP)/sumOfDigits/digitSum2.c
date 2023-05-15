/*
 * Question:
 *  Write a function named 'sum_of_digits' that recieves an integer n
 *  and returns the sum of the digits of this integer as the function value.
 *
 *  Main program should input the value of n, call the function, and display
 *  the result.
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0


void sum_of_digits(int *number, int *summary);
int main(void){
    int usr_input, result;
    while(true){
        printf("Enter an integer: "); scanf("%d", &usr_input);

        if(usr_input < 0){
            break;
        }

        sum_of_digits(&usr_input, &result);
        printf("Sum: %d\n\n", result);
    }
    return 0;
}

void sum_of_digits(int *number, int *summary){
    *summary = 0;

    // It adds digits by dividing the number by 10 until it falls into a single digit. After each addition, it divides the number by ten and equalizes itself again.
    while(*number != 0){
        *summary += *number%10;
        *number /= 10;
    }
    return;
}