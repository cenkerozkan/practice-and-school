/*
 * Question:
 *  You're running a free parking service. The parking lost is
 *  a 10 x 10 matrix with each parking space corresponding to a
 *  spot on the matrix. The top left parking spot is [0][0] in the
 *  parking lot and the bottom right is [9][9].
 *
 * Commands:
 *  Command 0: Exit the program, you should print out the last state of the parking lot as
 *             you exit.
 *
 *  Command 1: Print out the current state of the parking lot.
 *  Command 2: A new car will enter the parking lot. After this command, you need to ask
 *             for an input for a new ticket number. The new car will take this ticket and
 *             park.
 *
 *  Command 3: A car will leave the parking lot. After this command, you need to ask for an
 *             existing ticker number. You should find the car with that ticket number and
 *             empty its parking spot. If no car with that ticket number is found, you should
 *             print out an appropriate message and ask for a new command input (not a new ticket
 *             input). If there are more than one car with the same ticket, cars should leave in
 *             the reverse order that they came.
 * */

/*
 * Test cases I tried:
 *  1 - User enters an irrelevant command
 *  2 - User enters a negative ticket number.
 * */


#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

void print(int lot_state[10][10]); // Prints the current state of parking lot.
void new_car(int park_lot[10][10]); // In case of a new car enters.
void remove_car(int park_lot[10][10]); // In case of a car leaves.
int main(void){
    int i_usr_input;  // Required for main loop.
    int i,j;
    int parking_lot[10][10];

    // To fill the parking spot.
    for(i=0; i<=9; i++){
        for(j=0; j<=9; j++){
            parking_lot[i][j] = -1;
        }
    }
    printf("Welcome\n");

    // Main loop.
    while(true){
        printf("Please input your command:\n");
        scanf("%d", &i_usr_input);
        switch(i_usr_input) {
            case 0:
                printf("Goodbye. Here is the final state of parking lot\n");
                print(parking_lot);
                return 0;

            case 1:
                printf("Current state of parking lot\n");
                print(parking_lot);
                break;

            case 2:
                new_car(parking_lot);
                break;

            case 3:
                remove_car(parking_lot);
                break;

            default:
                // In case user input is incorrect.
                printf("Commands:\n\t0: Exit the program\n\t1: Current state of the lot\n\t2: Register a new car\n\t3: Unregister a car\n\n");
                break;
        }
    }
    return 0;
}



void print(int lot_state[10][10]){
    int i, j;
    for(i=0; i<=9; i++){
        for(j=0; j<=9; j++){
            printf("%d\t", lot_state[i][j]);
        }
        printf("\n");
    }
    return;
}


void new_car(int park_lot[10][10]){
    while(true){
        int i_ticket_num, i, j;
        printf("A new car is entering. Please input a ticket number:\n");
        scanf("%d", &i_ticket_num);

        // Invalid ticket number.
        if(i_ticket_num < 0){
            printf("Ticket numbers can not be lower than zero.\n:");
            return;
        }
        else{
            for(i=0; i<=9; i++){
                for(j=0; j<=9; j++){
                    if(park_lot[i][j] == -1){
                        park_lot[i][j] = i_ticket_num;
                        return;
                    }
                }
            }
        }
    }
}


void remove_car(int park_lot[10][10]){
    int i_ticket_number, i, j;
    printf("A car is leaving. Please input the ticket number of the leaving car:\n");
    scanf("%d", &i_ticket_number);

    // Invalid ticket number.
    if (i_ticket_number < 0){
        printf("Ticket numbers can not be lower than zero.\n:");
        return;
    }
    else{
        for(i=9; i>=0; i--){
            for(j=9; j>=0; j--){
                if(park_lot[i][j] == i_ticket_number){
                    park_lot[i][j] = -1;
                    return;
                }
            }
        }
    }
    printf("There is no vehicle with given ticket number %d\n", i_ticket_number);
}

