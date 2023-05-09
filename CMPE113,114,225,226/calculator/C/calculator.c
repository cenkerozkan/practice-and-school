/*
 * Question:
 *  Write a function named 'calculator' that returns the sum(s), the
 *  difference (d), the product (p), and the quotient (q) of two real numbers
 *  num1 and num2.
 *
 *  The values of num1 and num2 should be entered by the main program.
 *  The results should be displayed by the main program.
 * */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

void calculator(double num1, double num2, double *sum, double *dif, double *prod, double *quot);
int main(void){
    double num1, num2, sum, difference, product, quotient;
    while(true){
        printf("Enter number1: "); scanf("%lf", &num1);
        printf("Enter number2: "); scanf("%lf", &num2);

        calculator(num1, num2, &sum, &difference, &product, &quotient);

        printf("\nSum is: %lf\nDifference is: %lf\nProduct is: %lf\nQuotient is: %lf\n\n", sum, difference, product, quotient);
    }
    return 0;
}

void calculator(double num1, double num2, double *sum, double *dif, double *prod, double *quot){
    *sum = num1+num2;
    *dif = num1-num2;
    *prod = num1*num2;
    *quot = num1/num2;

    return;
}