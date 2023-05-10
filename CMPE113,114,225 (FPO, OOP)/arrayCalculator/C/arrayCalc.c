/*
 * Question:
 *  Write a program that inputs
 *      - An integer N(N<=30)
 *      - A two dimensional array of integers of sizes N.
 *      - An operator (+, -, *)
 *
 *  If the operator is '+' add the corresponding elements of the arrays, if
 *  the operator is '-', substract the corresponding elements of the second array
 *  from the first array and if the operator is '*', multiply the corresponding
 *  elements. For each operation, write a function. Each function should recieve
 *  two dimensional array, the size and return the resultant array.
 *
 * Sample run:
 *  Enter the array size (1-30): 6
 *  Enter 6 integers: 15 20 11 5 8 10
 *  Enter 6 integers: 1 12 3 4 -2 4
 *  Enter an operator: -
 *  Result: 14 8 8 1 10 14
 * */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

// It will always be required.
int i_size;

void print(int final_list[i_size]); // To print the result array
void add(int list[2][i_size], int final_list[i_size]);
void substract(int list[2][i_size], int final_list[i_size]);
void multiply(int list[2][i_size], int final_list[i_size]);
void divide(int list[2][i_size], int final_list[i_size]); // Has not been included in the question.
int main(void){
    int i,j;
    char c_usr_op; // Operator

    while(true){
        // Size arrangement.
        printf("\nEnter the array size (1-30)(-1: Quit): ");
        scanf("%d", &i_size);
        if(i_size == -1){
            printf("Goodbye.\n");
            break;
        }
        else{
            int num_arr[2][i_size];
            int result_arr[i_size];

            // User inputs.
            for(i=0; i<2; i++){
                switch (i) {
                    case 0:
                        printf("\nEnter %d integers:\n", i_size);
                        for(j=0; j<i_size; j++){
                            scanf("%d", &num_arr[i][j]);
                        }
                        break;

                    case 1:
                        printf("\nEnter %d integers:\n", i_size);
                        for(j=0; j<i_size; j++){
                            scanf("%d", &num_arr[i][j]);
                        }
                        break;

                    default:
                        printf("Something went wrong!");
                }
            }

            printf("\nEnter an operator: ");
            scanf(" %c", &c_usr_op);
            // Quit case.
            if (c_usr_op == 'q') {
                printf("Goodbye.\n");
                break;
            }
            else {
                // Using the ASCII list
                switch (c_usr_op) {
                    // 43: + (Add)
                    case 43:
                        add(num_arr, result_arr);
                        printf("Result:\t");
                        print(result_arr);
                        break;

                        // 45: - (Substract)
                    case 45:
                        substract(num_arr, result_arr);
                        printf("Result:\t");
                        print(result_arr);
                        break;

                        // 42: * (Multiply)
                    case 42:
                        multiply(num_arr, result_arr);
                        printf("Result:\t");
                        print(result_arr);
                        break;

                        // 47: / (Divide)
                    case 47:
                        divide(num_arr, result_arr);
                        printf("Result:\t");
                        print(result_arr);
                        break;

                        // Invalid input.
                    default:
                        printf("Invalid operator!\n");
                        break;
                }
            }
        }
    }
    return 0;
}

void add(int list[2][i_size], int final_list[i_size]){
    int i,j;
    for(i=0; i<1; i++){
        for(j=0; j<i_size; j++){
            final_list[j] = list[i][j] + list[i+1][j];
        }
    }
    return;
}

void substract(int list[2][i_size], int final_list[i_size]){
    int i,j;
    for(i=0; i<1; i++){
        for(j=0; j<i_size; j++){
            final_list[j] = list[i][j] - list[i+1][j];
        }
    }
    return;
}

void multiply(int list[2][i_size], int final_list[i_size]){
    int i,j;
    for(i=0; i<1; i++){
        for(j=0; j<i_size; j++){
            final_list[j] = list[i][j] * list[i+1][j];
        }
    }
    return;
}

void divide(int list[2][i_size], int final_list[i_size]){
    int i,j;
    for(i=0; i<1; i++){
        for(j=0; j<i_size; j++){
            final_list[j] = list[i][j] / list[i+1][j];
        }
    }
    return;
}

void print(int final_list[i_size]){
    int i;
    for(i=0; i<i_size; i++){
        printf("%d\t", final_list[i]);
    }
}