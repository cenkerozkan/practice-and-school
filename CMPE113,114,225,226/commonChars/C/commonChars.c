/*
 * Question:
 *  Write a program to read two names, 5 characters each, and output
 *  the common characters.
 *
 * Sample run:
 *  Enter a name: SALIH
 *  Enter a name: YASIN
 *  Common characters: S A I
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

/*
 * NOTE:
 *  fgets will add '\0' character to the end of the string, remember that!
 * */

int main(void){
    char usr_inp1[10], usr_inp2[10];
    int i,j;

    // First input
    printf("Enter a name:\n");
    fgets(usr_inp1,10,stdin);

    // Second input
    printf("Enter a name:\n");
    fgets(usr_inp2,10,stdin);

    // Output
    printf("Common characters: ");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(usr_inp1[i] == usr_inp2[j]){
                printf("%c ",usr_inp1[i]);
            }
        }
    }
    return 0;
}