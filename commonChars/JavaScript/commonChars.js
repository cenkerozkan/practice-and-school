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

function main(){
    let sUsrIn1, sUsrIn2, result=[];
    let i,j;

    console.log('Enter two names.\n5 character each.');
    while(true){
        sUsrIn1 = window.prompt('Enter name 1:').toLowerCase();
        sUsrIn2 = window.prompt('Enter name 2:').toLowerCase();

        if(sUsrIn1.length < 5 || sUsrIn2.length < 5){
            console.log('You should enter five characters exactly for each name!');
        }
        else{
            if(sUsrIn1.length > 5 || sUsrIn2.length > 5){
                console.log('Exceeded number of characters, only first five characters will be checked !!');
            }
            console.log('Common characters:\n');
            for(i=0; i<5; i++){
                for(j=0; j<5; j++){
                    if(sUsrIn1.charAt(i) === sUsrIn2.charAt(j)){
                        if(result.includes(sUsrIn2.charAt(j)) === false){
                            result.push(sUsrIn1.charAt(i));
                        }
                    }
                }
            }
            console.log(result);
            break;
        }
    }
}

main();