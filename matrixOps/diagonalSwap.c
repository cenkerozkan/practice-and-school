/*
 * Question:
 *  Write a program that:
 *      - Inputs a positive integer N(N<=30).
 *
 *      - Inputs NxN integer numbers into a 2D array x in
 *        column-wise order.
 *
 *      - Swaps the major diagonal elements and minor diagonal
 *        elements. That is the values in x[0][0] and x[0][n-1] are
 *        swapped, the values in x[1][1] and x[1][n-2] are swapped,
 *        the values x[2][2] and x[2][n-3] and so forth.
 *
 *      - Output this new matrix in row-wise order.
 *
 *
 *  Sample run:
 *      Matrix:
 *       1 5 9 13
 *       2 6 10 14
 *       3 7 11 15
 *       4 8 12 16
 *
 *      New matrix:
 *       13 2 3 16
 *       5 10 11 8
 *       9 6 7 12
 *       1 14 15 4
 *
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 30
#define MIN_SIZE 1

// Global
int i_size;

void print(int num_matrix[i_size][i_size]);
void fill(int num_matrix[i_size][i_size]);
void change(int num_matric[i_size][i_size]);
int main(void){
    do {
        printf("Enter a positive integer (1-30): ");
        scanf("%d", &i_size);
    }while(i_size < MIN_SIZE || i_size > MAX_SIZE);

    int usr_matrix[i_size][i_size];

    printf("Enter the matrix:\n");
    fill(usr_matrix);

    printf("The matrix (column-wise):\n");
    print(usr_matrix);  // Column-wise order.

    printf("New matrix (row-wise):\n");
    change(usr_matrix);
    return 0;

}

// Column insertion.
void fill(int num_matrix[i_size][i_size]){
    int i, j;
    for(i=0; i<i_size; i++){
        for(j=0; j<i_size; j++){
            scanf("%d", &num_matrix[j][i]);
        }
    }
    return;
}


void change(int num_matrix[i_size][i_size]){
    int i,j, i_swap;
    for(i=0; i<i_size; i++){
        for(j=0; j<i_size; j++){
            if(i == j){
                i_swap = num_matrix[i][j];
                num_matrix[i][j] = num_matrix[i][i_size-(i+1)];
                num_matrix[i][i_size-(i+1)] = i_swap;
            }
        }
    }
    // Final matrix
    for(i=0; i<i_size; i++){
        for(j=0; j<i_size; j++){
            printf("%d ", num_matrix[j][i]);
        }
        printf("\n");
    }
    return;
}


void print(int num_matrix[i_size][i_size]){
    int i,j;
    for(i=0; i<i_size; i++){
        for(j=0; j<i_size; j++){
            printf("%d ", num_matrix[i][j]);
        }
        printf("\n");
    }
    return;
}