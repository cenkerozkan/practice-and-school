/*
 * Question:
 *  Write a program to enter a line of input and replace all uppercase
 *  letters with lowercase letters.
 *
 * Sample run:
 * Please enter a line:
 * How ARE yOU?
 *
 * Line with lowercase letters:
 * how are you?
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
    i_length=strlen(usr_input);

    // Output with lowercases
    for(i=0; i<i_length; i++){
        if(usr_input[i] <= 'Z' && usr_input[i] >= 'A'){
            usr_input[i]+=32;
        }
    }
    printf("\nLine with lowercase letters:\n%s",usr_input);

    return 0;
}