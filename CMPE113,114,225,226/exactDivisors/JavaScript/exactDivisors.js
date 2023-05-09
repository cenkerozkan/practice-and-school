/*
* Question:
 *  Write a function that recieves an integer and
 *  returns the number of exact divisors of this
 *  integer as the function value. This function should
 *  return zero if the integer is less than 1.
 *
 *  Main program should call this function to determine
 *  whether the integers in the range -3 through 10
 *  are prime numbers or not.
 *
 *  Note that, if the number of exact divisors is equal
 *  to 2, then it is a prime number
 *  (It means that the number can only be divided by itself and by 1)
 * */


function main(){
    let i_input, b_flag;
    let i_result = [];

    while(true){
        i_input = window.prompt("Enter an integer: ");
        i_flag = exact_divisors(i_input,i_result);

        if(i_flag <= 2){
            console.log("Given number",i_input,"is a prime number!");
        }
        else{
            let i=0;
            console.log("Exact divisors are:\n");
            for(i=0; i<i_flag; i++){
                console.log("",i_result[i]);
            }
        }
        break;
    }
}


function exact_divisors(input,resultArr){
    let i=0, j=0;
    for(i=1; i<=input; i++){
        if(!(input % i)){
            resultArr.push(i);
            j++;
        }
    }
    return j;
}

main();