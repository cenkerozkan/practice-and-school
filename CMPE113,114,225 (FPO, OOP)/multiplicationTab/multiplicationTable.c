/*
 * Question:
 *  Write a program that inputs an integer,
 *  prepares a multiplication table with respect to
 *  given integer by user.
 *
 * Sample run:
 *  Enter an integer: 6
 *  1   2   3   4   5   6
 *  2   4   6   8   10  12
 *  3   6   9   12  15  18
 *  4   8   12  16  20  24
 *  5   10  15  20  25  30
 *  6   12  18  24  30  36
 * */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

// Global.
int i_size;

void multiTable(int table[i_size][i_size]);
int main(void){
    while(i_size != -1){
        printf("Enter an integer (-1:quit):");
        scanf("%d", &i_size);
        int m_table[i_size][i_size];
        multiTable(m_table);
    }
    return 0;
}

void multiTable(int table[i_size][i_size]){
    int i,j;
    for(i=0; i<i_size; i++){
        for(j=0; j<i_size; j++){
            table[i][j] = (i+1)*(j+1);
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
    return;
}