/*
 * Question:
 *  Write a program that reads 10 integers into a one-dimensional array
 *  and output whether the numbers are ascending order or not.
 *
 * Sample Run:
 *  Enter 10 integers:
 *  -44 -25 2 56 87 99 102 132 140 164
 *  The numbers are in ascending order.
 * */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int is_ascending(int list[10]);
int main(void){
    int i_list[10], i, i_result;
    printf("Enter 10 integers:\n");
    for(i=0; i<10; i++){
        scanf("%d", &i_list[i]);
    }

    i_result = is_ascending(i_list);
    if(i_result == 1){
        printf("The numbers are in ascending order.\n");
    }
    else{
        printf("The numbers are not in ascending order.\n");
    }
    return 0;
}

// Checks if given numbers are ascending or not.
int is_ascending(int list[10]){
    int i, flag = 0;
    for(i=0; i<9; i++){
        if(list[i] < list[i+1]){
            flag = 1;
        }
        else{
            return 0;
        }
    }
    return flag;
}