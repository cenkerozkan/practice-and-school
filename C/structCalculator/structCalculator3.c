/*
 * Question:
 *  Write a program to read the information about students in a class
 *  into an array of structures. The student information consists of the
 *  name, 3 midterm grades and a final grade. Output the students' average
 *  by performing the following:
 *      - Discard the lowest midterm grade
 *      - Remaining two midterms 30% each, and the final is 40%
 * */

#include <stdio.h>
#include <stdlib.h>

// To use it as a type.
typedef struct Student{
    char std_id[50];
    double arr_midterm[3];
    double d_final;
} student_db;


int main(void){
    int i_size=0, i,j;
    double d_discarded=0, d_avg=0;
    printf("Enter the number of students: ");
    scanf("%d", &i_size);

    // Array of structures
    student_db st_db[i_size];

    // Inputs
    for(i=0; i<i_size; i++){
        // 1.Student id
        printf("Enter student id:\n");
        getchar();
        fgets(st_db[i].std_id,50,stdin);

        // 2.Midterm grades
        for(j=0; j<3; j++){
            printf("Enter midterm %d grade:\n", j+1);
            scanf("%lf", &st_db[i].arr_midterm[j]);
        }

        // 3.Final grade
        printf("Enter final grade:\n");
        scanf("%lf", &st_db[i].d_final);
    }

    // To find the average midterm grade (minimum grade will be discarded).
    for(i=0; i<i_size; i++){
        d_avg=0;
        // Symbolic minimum value.
        d_discarded = st_db[i].arr_midterm[0];
        // Each student midterm array will be evaluated.
        for(j=0; j<3; j++){
            if(d_discarded > st_db[i].arr_midterm[j]){
                d_avg += d_discarded*0.3;
                d_discarded = st_db[i].arr_midterm[j];
            }
            else{
                d_avg += st_db[i].arr_midterm[j]*0.3;
            }
        }
        d_avg += st_db[i].d_final*0.4;
        printf("\nAverage grade of %s: %lf", st_db[i].std_id, d_avg);
    }
    return 0;
}