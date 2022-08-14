#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 250



void numberOfWords(char const *input);
void vowel(char const *input);
void firstWord();

int main(void){
    char sUsrInp[LEN]; // User string input.
    printf("Input the string: ");
    fgets(sUsrInp,300,stdin);
    strlwr(sUsrInp);

    numberOfWords(sUsrInp);
    return 0;
}


// Counts the number of words.
void numberOfWords(char const *input){
    int iCount=0, i=0;
    for(i=0; i<strlen(input); i++){
        if(input[i] == ' '){
            iCount++;
        }
    }
    printf("Number of words: %d",iCount+1);
}


// Counts the repeated vowels.
void vowel(char const *input){
    // Holds the number of vowels by order of a,e,i,o,u
    int vowelCount[5] = {0,0,0,0,0};
    int i=0, j=0;

    for(i=0; i<strlen(input); i++){
        switch (input[i]) {
            // a
            case 97:
                vowelCount[0] += 1;
                break;
            // e
            case 101:
                vowelCount[1] += 1;
                break;
            // i
            case 105:
                vowelCount[2] += 1;
                break;
            // o
            case 111:
                vowelCount[3] += 1;
                break;
            // u
            case 117:
                vowelCount[4] += 1;
                break;

            default:
                break;

        }
    }

    // Output
    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){

        }
    }
}