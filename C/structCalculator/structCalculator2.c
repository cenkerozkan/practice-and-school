/*
 * Question:
 *  Write a program:
 *      - Reads 10 records (each containing two numbers and an operator) and
 *        stores them in an array of structures
 *
 *      - Processes this array to compute the results. (Results should be
 *        stored into this array of structures.)
 *
 *      - Displays the operation results in the form
 * */


#include <stdio.h>
#include <stdlib.h>

typedef struct Operations{
    double d_num1;
    double d_num2;
    double d_result;
    char c_operator;
} operations;



int main(void){
    // Array of structure
    operations op_arr[10];

    int i=0, j=0;
    for(i=0; i<10; i++){
        // Number 1
        printf("Enter number 1: ");
        scanf("%lf", &op_arr[i].d_num1);

        // Number 2
        printf("Enter number 2: ");
        scanf("%lf", &op_arr[i].d_num2);

        // Operator output
        printf("Enter the operator: ");
        scanf(" %c", &op_arr[i].c_operator);

        // Output
        if(op_arr[i].c_operator == '+'){
            op_arr[i].d_result = op_arr[i].d_num1 + op_arr[i].d_num2;
        }
        else if(op_arr[i].c_operator == '-'){
            op_arr[i].d_result = op_arr[i].d_num1 - op_arr[i].d_num2;
        }
        else if(op_arr[i].c_operator == '*'){
            op_arr[i].d_result = op_arr[i].d_num1 * op_arr[i].d_num2;
        }
        else if(op_arr[i].c_operator == '/'){
            op_arr[i].d_result = op_arr[i].d_num1 / op_arr[i].d_num2;
        }
        printf("%d: %lf %c %lf = %lf\n", i+1, op_arr[i].d_num1, op_arr[i].c_operator ,op_arr[i].d_num2, op_arr[i].d_result);
    }
    return 0;
}