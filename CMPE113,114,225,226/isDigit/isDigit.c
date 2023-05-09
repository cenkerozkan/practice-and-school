#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

/*
 * Question:
 *  Program uses a function where it accepts a character and returns 1 if it is a digit;
 *  returns 0 otherwise. 1 or 0 is returned under a parameter.
 *
 *  Sample Execution:
 *      Enter a positive integer: 4
 *
 *      Enter a character: A
 *      A is not a digit.
 *
 *      Enter a character: 7
 *      7 is a digit
 *
 *      Enter a character: 9
 *      9 is a digit
 *
 *      Enter a character: t
 *      t is not a digit
 * */

int main(void){
    char usr_input;
    char dum; // Buffer
    while(true){
        printf("Enter a digit: ");
        scanf(" %c",&usr_input);

        if(usr_input == 'q' || usr_input == 'Q'){
            break;
        }
        else{
            if(usr_input >= 48 && usr_input <= 57){
                printf("%c is a digit\n\n", usr_input);
            }
            else{
                printf("%c is not a digit\n\n", usr_input);
            }
        }
    }
    return 0;
}