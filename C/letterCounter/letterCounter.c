/*
 * Question:
 *  Write a program that inputs an arbitrary number of words of sentence
 *  and finds the number of words containing 2,3, and 4 letters. Assume
 *  that no punctuation characters are used and words are separated exactly
 *  by a single blank. Also there are no spaces before the first and after
 *  the last words.
 *
 * Sample run:
 *  Find the number of words containing two three and four letters
 *
 *  The number of 2 letters words: 1
 *  The number of 3 letters words: 3
 *  The number of 4 letters words: 2
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char usr_input[200];
    int i, i_length, i_counter=0;
    int count_array[3]={0,0,0};

    // User input
    printf("Please enter a string:\n");
    fgets(usr_input,200,stdin);
    i_length = strlen(usr_input);

    // Output
    for(i=0; i<i_length; i++){
        if(usr_input[i] != ' '){
            i_counter++;
        }
        else{
            switch (i_counter) {
                // 2 Letters
                case 2:
                    count_array[0] += 1;
                    break;

                // 3 Letters
                case 3:
                    count_array[1] += 1;
                    break;

                // 4 Letters
                case 4:
                    count_array[2] += 1;
                    break;

                default:
                    break;
            }
            i_counter=0;
        }
    }

    for(i=0; i<3; i++){
        printf("The number of %d letters words: %d\n",i+2,count_array[i]);
    }
    return 0;
}