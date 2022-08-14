/*
 * Question:
 *  Write a program that inputs a 10-element array, and sends the array
 *  to a function that counts and returns the number of 2-digit elements
 *  in the array. The main program will output the count.
 *
 * Sample run:
 *  Enter 10 integers: 2 13 3 788 3 5 56 7 0 4
 *  There are 3 elements with 2 digits.
 * */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int two_digit(int list[]);
int main(void){
    int num_array[10];
    int i, i_result;

    printf("Enter 10 integers:\n");
    for(i=0; i<10; i++){
        scanf("%d", &num_array[i]);
    }

    i_result = two_digit(num_array);
    printf("There are %d elements with 2 digits.\n", i_result);
    return 0;
}

int two_digit(int list[]){
    int i, i_count=0;
    for(i=0; i<10; i++){
        if(list[i] > 10 && list[i] < 100){
            i_count++;
        }
    }
    return i_count;
}