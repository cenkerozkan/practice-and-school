/*
* Question:
 *  Heron's formula for computing the area of a triangle with sides:
 *  a, b, c is
 *
 *          sqrt(s*(a-b)*(s-b)*(s-c)
 *
 *       where s = (a + b + c)/2
 *
 *  write a function named 'area' that reads the sides of a triangle,  computes
 *  and displays its area. Main program should only call the function area.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define true 1
#define false 0

void area(void);
int main(void){
    while(true){
        area();
        break;
    }
    return 0;
}

void area(void){
    double a,b,c; // Sides
    printf("Enter sides: "); scanf("%lf %lf %lf", &a,&b,&c);
    double s = (a+b+c)/2;
    printf("Area is %lf\n", sqrt(s*(s-a)*(s-b)*(s-c)));
    return;

} 
