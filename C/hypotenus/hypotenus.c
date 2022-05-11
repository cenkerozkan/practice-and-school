/*
* Question:
 *  Write a function that determines and returns the length of
 *  the hypotenuse of a right-angled triangle when the other two
 *  sides are passed to this function.
 *
 *  Main program should input the lengths of the two sides, call
 *  the function, and print the hypotenus value returned from the
 *  function.
 *
 *          To find hypotenus;
 *
 *              a^2 + b^2 = hypotenus^2
 * */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define true 1
#define false 0

void hypotenuse(double *a, double *b, double *hypo);
int main(void){
    double a,b,hypotenus;
    printf("Enter the sides: "); scanf("%lf %lf", &a, &b);
    hypotenuse(&a, &b, &hypotenus);
    printf("Hypotenuse is: %lf\n", hypotenus);
    return 0;

}

void hypotenuse(double *a, double *b, double *hypo){
    *hypo = sqrt(pow(*a, 2.0) + pow(*b, 2.0));
    return;
} 
