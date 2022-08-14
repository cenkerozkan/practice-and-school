/*
 * Question:
 *  Write a program that does the following:
 *      - Reads two numbers and an arithmetic operator ('+' for addition, '-' for
 *        substraction, "*" for multiplication, '/' for division) into a structure.
 *
 *      - Computes and stores the operation result into the structure.
 *      - Displays the result in the form XXX.XX op XXX.XX = XXX.
 * */


#include <stdio.h>
#include <stdlib.h>

typedef struct Operation{
    double d_num1, d_num2;
    char c_operator;
} operation;


int main(void){
    operation op1;
    double d_result=0;

    // Number 1
    printf("Enter number 1: ");
    scanf("%lf", &op1.d_num1);

    // Number 2
    printf("Enter number 2: ");
    scanf("%lf", &op1.d_num2);

    // Operator
    printf("Enter an operator: ");
    scanf(" %c",&op1.c_operator);

    // Output
    if(op1.c_operator == '+'){
        printf("%lf %c %lf = %lf", op1.d_num1, op1.c_operator ,op1.d_num2, op1.d_num1+op1.d_num2);
    }
    else if(op1.c_operator == '-'){
        printf("%lf %c %lf = %lf", op1.d_num1, op1.c_operator ,op1.d_num2, op1.d_num1-op1.d_num2);
    }
    else if(op1.c_operator == '*'){
        printf("%lf %c %lf = %lf", op1.d_num1, op1.c_operator ,op1.d_num2, op1.d_num1*op1.d_num2);
    }
    else if(op1.c_operator == '/'){
        printf("%lf %c %lf = %lf", op1.d_num1, op1.c_operator ,op1.d_num2, op1.d_num1/op1.d_num2);
    }

    return 0;
}