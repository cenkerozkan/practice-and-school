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

function main(){
    // Strings
    let sUsrInput, sResult;

    // Normally, I could have written my own character replacement
    // function by iterating the string searching for blank character.
    // But since the reason of learning javascript is about my web project
    // which is related to my company, being quick on learning js is more
    // important than writing an algorithm which I have already done it
    // with C programming language. So I chose to use 'replaceAll()' function
    // to get it done.
    sUsrInput = window.prompt('Please enter a line:\n');
    sResult = sUsrInput.replaceAll(" ","*");

    console.log("Line with asterisks:\n" + sResult);
}

main();
