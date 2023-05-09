/*
 * Question:
 *  Write a program that inputs:
 *      - An integer N(N<=30).
 *      - N distinct integers into an array.
 *      - Another integer num.
 *
 *  Search this num in the array and delete it.
 *  Finally, display the new array.
 *
 * Sample run:
 *  Enter the array size (1-30): 6
 *  Enter 6 integers: 15 20 11 -5 8 10
 *  Enter an integer: 11
 *  New array is: 15 20 -5 8 10
 *
 *  Works for only one integer.
 *
 *  TO DO:
 *      Try recursive !
 * */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
int i_size;

int delete(int list[]); // Finds the given number and removes.
int main(void){
    int i, i_result;

    // To check whether it is in the range of 1 to 30.
    do {
        printf("Enter the array size (1-30): ");
        scanf("%d", &i_size);
    } while (i_size < 1 || i_size > 30);

    int num_list[i_size];
    printf("Enter %d integers:\n", i_size);
    for(i=0; i<6; i++){
        scanf("%d", &num_list[i]);
    }
    i_result = delete(num_list);
    if(i_result == -1){
        printf("Given number has not been found in the list.\n");
        return -1;
    }
    else{
        printf("New array:\n");
        for(i=0; i<i_size-1; i++){
            printf("%d\t", num_list[i]);
        }
    }
    return 0;
}


int delete(int list[i_size]){
    int i, j, i_num;
    printf("Enter an integer: ");
    scanf("%d", &i_num);

    for(i=0; i<i_size; i++){
        if(list[i] == i_num){
            for(j=i; j<i_size; j++){
                list[j] = list[j+1];
            }
        }
    }
}