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


#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(void){
    char s_input[256];
    char s_input2[256];
    int i=0;

    // Input.
    cout << "Enter a string: ";
    //cin >> s_input; (For some reason, cin does not accept blank spaces.
    //                 So I used fgets to take the input)
    fgets(s_input,256,stdin); // fgets append an aditional '\n' to the end of the string.


    // Output
    cout << "Before parsing: " << s_input << endl;
    for(i=0; i<(strlen(s_input)-1); i++){
        // Why it wants me to use single quotes instead of double for comparison ??
        // Answer: Single quotes are defined to express character literals.
        if(s_input[i] == ' '){
            s_input[i] = '*';
        }
    }
    cout << "After parsing: " << s_input << endl;
    return 0;
}