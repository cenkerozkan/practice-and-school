/*
 * Question:
 *  Write a program that inputs a positive integer and
 *  outputs the left most and the right most digits of this number.
 *
 *  This process continues until user enters a negative integer.
 *  In your program, you should use a function that recieves a
 *  positive integer ant returns the left most and right most digits.
 *
 * Sample Run:
 *
 *  Enter an integer: 1234
 *  Left most digit is 1
 *  Right most digit is 4
 *
 *  Enter an integer: 945
 *  Left most digit is 9
 *  Right most digit is 5
 * */

#include <stdio.h>
#include <stdlib.h>

void most_digit(int number, int *left, int *right);
int main(void){
    int i_input, i_left_most=0, i_right_most=0;  // To avoid garbage values, left and right are initialized to zero.
    printf("Enter an integer: "); scanf("%d", &i_input);

    while(i_input > 0){
        most_digit(i_input, &i_left_most, &i_right_most);
        printf("Left most digit is %d\nRight most digit is %d\n\n", i_left_most, i_right_most);
        printf("Enter an integer: "); scanf("%d", &i_input);
    }
    return 0;
}


// To collect the left most digit, it divides and initializes the integer until it is lower than 10.
void most_digit(int number, int *left, int *right){
    *right = number%10;
    while(number > 10){
        number /= 10;
    }
    *left = number;
    return;
}


