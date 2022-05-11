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


#include <stdio.h>
#include <stdlib.h>
#define size 32
#define true 1
#define false 0

void is_prime(int *number, int i_list[], int *count); // [int,double,..],[array]
int main(void){
    int i_input, i_flag;
    int i_result[size];

    while(true){
        printf("Enter integer: "); scanf("%d",&i_input);
        is_prime(&i_input, i_result, &i_flag);

        // Without iteration, checks if prime or not. (AAD)
        if(i_flag <= 2){
            printf("Given number is %d is a prime number!\n", i_input);
        }
        else{
            int i;
            printf("Exact divisors are:\n");
            for(i=0; i<i_flag; i++){
                printf("%d\t", i_result[i]);
            }
        }
        break;
    }
    printf("\n");
    return 0;
}


void is_prime(int *number, int i_list[], int *count){
    int i,j = 0;
    for(i=1; i<=*number; i++){
        if(!(*number % i)){
            i_list[j] = i;
            j++;
        }
    }
    *count = j;
    return;
}