/*
 * Question:
 *  Write a function named 'calculator' that returns the sum(s), the
 *  difference (d), the product (p), and the quotient (q) of two real numbers
 *  num1 and num2.
 *
 *  The values of num1 and num2 should be entered by the main program.
 *  The results should be displayed by the main program.
 * */


function main(){
    let dNum1, dNum2;
    let resultArr = [];
    let i;

    dNum1 = window.prompt('Enter number 1:');
    dNum2 = window.prompt('Enter number 2:');
    calculator(dNum1,dNum2,resultArr);

    // Output
    console.log(" Sum is: ",resultArr[0],"\n","Difference is: ",resultArr[1],"\n","Product is: ",resultArr[2],"\n","Quotient is: ",resultArr[3]);
}


function calculator(num1, num2, result){
    result[0] = parseFloat(num1) + parseFloat(num2);
    result[1] = num1 - num2;
    result[2] = num1 * num2;
    result[3] = num1 / num2;
}

main();