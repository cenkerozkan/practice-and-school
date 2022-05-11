/*
 * Question:
 *  Write a program that inputs:
 *      - The number of students in a class.
 *      - The student numbers into an array named st_id and their
 *        scores (out of 100) into another array named scores
 *        respectively
 *      - Display the student numbers that have scores between 70 and 80.
 * */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

void print(int id_list[], int score_list[], int *i_size);
int main(void){
    int i_students, i;
    printf("Enter the number of students:\n");
    scanf("%d", &i_students);
    int st_id[i_students];
    int st_scores[i_students];

    for(i=0; i<i_students; i++){
        st_scores[i] = i+1;
    }
    printf("Enter the grades of each student\n");
    for(i=0; i<i_students; i++){
        printf("Student %d: ", i+1);
        scanf("%d", &st_scores[i]);
    }
    printf("\nStudents whose grades are between 70 - 80 are:\n");
    print(st_id, st_scores, &i_students);
    return 0;
}

void print(int id_list[], int score_list[], int *i_size){
    int i;
    for(i=0; i<*i_size; i++){
        if(score_list[i] > 70 && score_list[i] < 80){
            printf("\tStudent %d: %d\n", i+1, score_list[i]);
        }
    }
    return;
}