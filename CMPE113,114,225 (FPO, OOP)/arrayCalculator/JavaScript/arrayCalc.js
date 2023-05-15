/*
 * Question:
 *  Write a program that inputs
 *      - An integer N(N<=30)
 *      - A two dimensional array of integers of sizes N.
 *      - An operator (+, -, *)
 *
 *  If the operator is '+' add the corresponding elements of the arrays, if
 *  the operator is '-', substract the corresponding elements of the second array
 *  from the first array and if the operator is '*', multiply the corresponding
 *  elements. For each operation, write a function. Each function should recieve
 *  two dimensional array, the size and return the resultant array.
 *
 * Sample run:
 *  Enter the array size (1-30): 6
 *  Enter 6 integers: 15 20 11 5 8 10
 *  Enter 6 integers: 1 12 3 4 -2 4
 *  Enter an operator: -
 *  Result: 14 8 8 1 10 14
 * */


function main(){
    // Variables.
    let i,j, iSize, usrInput;
    let numList = [[],[],[]]; // 2nd index will be the result row.
    let cUsrSelect;
    iSize = window.prompt('How many numbers are you going to enter?\n:');

    for(i=0; i<2; i++){
        for(j=0; j<iSize; j++){
            do{
                usrInput = window.prompt("Enter a number between 1 and 30:");
            }while(usrInput < 1 || usrInput > 30)
            numList[i][j] = usrInput;
        }
    }
    cUsrSelect = window.prompt('Operator:');

    switch (cUsrSelect){
        case '+':
            addition(iSize,numList);
            break;

        case '-':
            substraction(iSize,numList);
            break;

        case '*':
            multipltication(iSize,numList)
            break;

        case '/':
            division(iSize,numList)
            break;

        default:
            console.log("Wrong operator!");
            break;
    }

    console.log(numList);
}

function addition(iSize,usrArr){
    let i;
    for(i=0; i<iSize; i++){
        usrArr[2][i] = parseInt(usrArr[0][i]) + parseInt(usrArr[1][i]);
    }
}

function substraction(iSize,usrArr){
    let i;
    for(i=0; i<iSize; i++){
        usrArr[2][i] = usrArr[0][i] - usrArr[1][i];
    }
}

function division(iSize,usrArr){
    let i;
    for(i=0; i<iSize; i++){
        usrArr[2][i] = usrArr[0][i] / usrArr[1][i];
    }
}

function multipltication(iSize,usrArr){
    let i;
    for(i=0; i<iSize; i++){
        usrArr[2][i] = usrArr[0][i] * usrArr[1][i];
    }
}

main();