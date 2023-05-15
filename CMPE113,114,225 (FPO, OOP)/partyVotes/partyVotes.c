/*
 * Question:
 *  Read the number of votes recieved by 5 political parties in an election
 *  into a 5 element integer array called 'votes' and perform the following:
 *
 *      - Print the number of votes each party recieved.
 *      - Print the percentage of the total vote they recieved.
 *      - Print the winning parties number (1-5)
 *
 *  Note that the percentage of each party should b e computed using a function.
 * */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

void percentage(int list[5], int *total); // Votes and percentages.
int is_biggest(int list[5]);
int main(void){
    int party_list[5]; // Votes each party collected.
    int i, i_total = 0; // Total number of votes, required for percentage.
    for(i=0; i<5; i++){
        printf("Enter the votes of party %d: ", i+1);
        scanf("%d", &party_list[i]);
        i_total += party_list[i];
    }
    percentage(party_list, &i_total);
}

// Prints votes of each party and calculates the percentage.
void percentage(int list[5], int *total){
    printf("\nTotal number of votes: %d\n", *total);
    int i, i_won;
    float i_perc = 100.0 / *total;
    for(i=0; i<5; i++){
        printf("Party %d:\n\t%d votes\n\t%.2f percentage\n\n", i+1, list[i], list[i]*i_perc);
    }
    i_won = is_biggest(list);
    printf("Party %d won the elections with %d votes!\n", i_won, list[i_won-1]);
    return;
}

// To announce the party which won the election.
int is_biggest(int list[5]){
    int i, i_max = 0;
    int i_party_won = 0;
    for(i=0; i<5; i++){
        if(list[i] > i_max){
            i_max = list[i];
            i_party_won = i+1;
        }
    }
    return i_party_won;
}