/*
 * Question:
 *  Write a program that inputs two vectors with size of 3,
 *  calculates the distance between these vectors by
 *
 *      d = sqrt((xi-yi)^2 + (x2-y2)^2)
 *
 * Sample Run:
 *  Enter X vector: 4.0 6.0 -1.0
 *  Enter Y vector: 3.0 8.0 1.0
 *  Distance is: 3.00
 * */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void d_distance(double v1[], double v2[], double *result);  // Calculates distance
int main(void){
    double d_vector_x[3];
    double d_vector_y[3];
    double d_result = 0;
    int i;

    printf("Enter X Vector: ");
    for(i=0; i<3; i++){
        scanf("%lf", &d_vector_x[i]);
    }
    printf("Enter Y Vector: ");
    for(i=0; i<3; i++){
        scanf("%lf", &d_vector_y[i]);
    }

    d_distance(d_vector_x, d_vector_y, &d_result);
    printf("Distance is: %lf", d_result);

    return 0;
}

void d_distance(double v1[], double v2[], double *result){
    int i;
    for(i=0; i<3; i++){
        *result += pow((v1[i] - v2[i]),2);
    }
    *result = sqrt(*result);
}