/*
 * Question:
 *  Write a program that:
 *      - Inputs a positive integer N(N<=30).
 *      - Inputs two matrices A and B of size NxN
 *      - Finds the matrix multiplication of A.B, This multiplication will be done in a function with suitable parameters.
 *      - Displays the resultant matrix.
 * */

#include <stdio.h>
#include <stdlib.h>
#define size 30
#define true 1
#define false 0

void multiplication(int matrixA[30][30], int matrixB[30][30], int matrixC[30][30], int *i_arr_size);
int main(void){
    int i_size, i,j;
    int usr_matrix1[size][size], usr_matrix2[size][size], resultant_matrix[size][size];
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &i_size);
    }while(i_size > 30 || i_size < 1);

    // 1st matrix
    printf("Enter matrix A:\n");
    for(i=0; i<i_size; i++){
        for(j=0; j<i_size; j++){
            scanf("%d", &usr_matrix1[i][j]);
        }
    }

    // 2nd matrix
    printf("Enter matrix B:\n");
    for(i=0; i<i_size; i++){
        for(j=0; j<i_size; j++){
            scanf("%d", &usr_matrix2[i][j]);
        }
    }

    // 3rd matrix (resultant matrix)
    multiplication(usr_matrix1, usr_matrix2, resultant_matrix, &i_size);
    for(i=0; i<i_size; i++){
        for(j=0; j<i_size; j++){
            printf("%d  ", resultant_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void multiplication(int matrixA[30][30], int matrixB[30][30], int matrixC[30][30], int *i_arr_size){
    int i,j,k;
    for(i=0; i<*i_arr_size; i++){
        for(j=0; j<*i_arr_size; j++){
            matrixC[i][j] = 0;
            for(k=0; k<*i_arr_size; k++){
                // Row * Column
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return;
}