/*
 * Question:
 *  Write a program that holds the information about students in an
 *  array of structures. Each structure information about one student:
 *  ID numberi name, surname and GPA (out of 4.00). Display out the
 *  list of students that have cumulative GPA above 3.00
 * */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

// Size of struct array
int i_size=0;

typedef struct Student{
    char st_name[SIZE];
    char st_surname[SIZE];
    int i_id;
    double d_gpa;
} st_db1;


void print(st_db1 arr[i_size]);
int main(void){
    int i=0;
    printf("Enter the number of students: ");
    scanf("%d", &i_size);

    // Array of struct
    st_db1 db1[i_size];

    // User input
    for(i=0; i<i_size; i++){
        // Student id
        printf("Enter the student id number: ");
        scanf("%d", &db1[i].i_id);

        // Student name,surname
        printf("Enter the name of student: ");
        fscanf(stdin, "%s", &db1[i].st_name,SIZE);
        printf("Enter the surname of student: ");
        fscanf(stdin, "%s", db1[i].st_surname, SIZE);

        // Student GPA
        printf("Enter the GPA of student: ");
        scanf("%lf", &db1[i].d_gpa);
    }
    print(db1);
    return 0;
}

void print(st_db1 arr[i_size]){
    int i;
    for(i=0; i<i_size; i++){
        if(arr[i].d_gpa >= 3.0){
            fprintf(stdout,"%d %s %s: %lf\n", arr[i].i_id, arr[i].st_name, arr[i].st_surname, arr[i].d_gpa);
        }
        else{
            continue;
        }
    }
    return;
}