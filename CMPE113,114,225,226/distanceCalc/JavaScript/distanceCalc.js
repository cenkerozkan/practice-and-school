/*
 * Question:
 *  Write a program that inputs two vectors with size of 3,
 *  calculates the distance between these vectors by
 *
 *      d = sqrt((xi-yi)^2 + (x2-y2)^2)
 *
 * Sample Run:
 *  Enter X vector: 4.0 6.0 -1.0
 *  Enter Y vector: 3.0 8.0 1.0
 *  Distance is: 3.00
 * */


function main(){
    let dVector1=[], dVector2=[];
    let dResult;
    let i;

    // X Vector.
    console.log("Enter X vector:");
    for(i=0; i<3; i++){
        dVector1[i] = parseFloat(window.prompt('X' + (i+1) + ':'));
    }

    // Y Vector.
    console.log("Enter Y vector:");
    for(i=0; i<3; i++){
        dVector2[i] = parseFloat(window.prompt('Y' + (i+1) + ':'));
    }

    dResult = calcDistance(dVector1,dVector2);
    window.alert("Distance is:" + dResult);
}

// Distance calculator.
function calcDistance(vector1,vector2){
    let diffList=[];
    let i;

    for(i=0; i<3; i++){
        diffList.push(Math.pow((vector1[i]-vector2[i]),2));
    }

    // Output.
    return Math.sqrt(diffList[0]+diffList[1]+diffList[2]);
}

main();