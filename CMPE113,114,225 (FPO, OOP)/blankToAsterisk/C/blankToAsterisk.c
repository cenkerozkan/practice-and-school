/*
 * Question:
 *  Write a program to enter a line of input and replace
 *  all blanks with asterisks '*'
 *
 * Sample run:
 *  Please enter a line:
 *  This is a text  with normal   blanks.
 *
 *  Line with asterisks:
 *  This*is*a*text***with*normal***asterisks.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char usr_input[100];
    int i,i_length;

    // User input
    printf("Please enter a line:\n");
    fgets(usr_input,100,stdin);
    i_length = strlen(usr_input);
    printf("%s",usr_input);

    // Output with asterisks
    for(i=0; i<i_length; i++){
        if(usr_input[i] == ' '){
            usr_input[i] = '*';
        }
    }
    printf("\nLine with asterisks:\n%s",usr_input);

    return 0;
}