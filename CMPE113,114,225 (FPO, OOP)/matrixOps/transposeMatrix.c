/*
 * Question:
 *  Write a program that includes a function to find
 *  the transpose of a matrix. The program should input
 *  the matrix, find its transpose by calling the function,
 *  and output the result.
 *
 * Sample run:
 *  Enter matrix:
 *  1   2   3   4
 *  5   6   7   8
 *  9   10  11  12
 *  13  14  15  16
 *
 *  Transposed matrix:
 *  1   5   9   13
 *  2   6   10  14
 *  3   7   11  15
 *  4   8   12  16
 *
 *  NOTE:
 *    Works only with square matrices.
 * */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

// Global
int i_size = 0;

void transpose(int matrix[i_size][i_size]);
int main(void){
    int i,j;
    while(i_size != -1){
        printf("Enter size: ");
        scanf("%d", &i_size);
        int i_matrix[i_size][i_size];

        printf("Enter matrix:\n");
        for(i=0; i<i_size; i++){
            for(j=0; j<i_size; j++){
                scanf("%d", &i_matrix[i][j]);
            }
        }

        printf("Matrix:\n");
        for(i=0; i<i_size; i++){
            for(j=0; j<i_size; j++){
                printf("%d  ", i_matrix[i][j]);
            }
            printf("\n");
        }

        printf("Transposed matrix:\n");
        transpose(i_matrix);

    }
    return 0;
}


void transpose(int matrix[i_size][i_size]){
    int i,j;
    int transpose[i_size][i_size];

    for(i=0; i<i_size; i++){
        for(j=0; j<i_size; j++){
            transpose[i][j] = matrix[j][i];
        }
    }

    // Prints the transpose matrix.
    for(i=0; i<i_size; i++){
        for(j=0; j<i_size; j++){
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
    }
    return;
}