/*
 * Question:
 *  Write a C program that will:
 *      - Initialize the matrix (3x10) to the blank character
 *      - Input a string having three words. Each word is separated by a single blank
 *      - Assign the first word to the first row, the second word to the second row, and
 *        the third word to the third row of the matrix.
 *      - Output the matrix in row-wise order.
 *
 * Sample run:
 *  Enter a string: Ahmet Ali Ziya
 *  Matrix:
 *
 *  Ahmet
 *  Ali
 *  Ziya
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char matrix[3][10]={' '};
    char usr_input[30];
    int i_length,i,j=0,k=0;

    printf("Enter a string:");
    fgets(usr_input,30,stdin);
    i_length=strlen(usr_input);

    // Assigning to the matrix.
    for(i=0; i<i_length; i++){
        if(usr_input[i] != ' '){
            matrix[j][k] = usr_input[i];
            k++;
        }
        else{
            j++;
            k=0;
        }
    }

    printf("\n");
    // Output
    for(i=0; i<3; i++){
        for(j=0; j<10; j++){
            printf("%c",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}