/*
 * Question:
 *  This game is about the betting over guessing the correct number.
 *  You need to guess a number between 0 and 100. The game will continue
 *  if the user wants to continue and has enough money. Initially the
 *  game starts with you entering a starting account (money).
 *  Then you need to enter your bet (money).
 *
 *  This game gives you 3 chances to find the number. If you gess the number
 *  correctly in 3 chances, you will win the game. If you didn't guess the
 *  number in your 3rd chance, you will lose the game.
 * */



#include <stdio.h>
#include <stdlib.h>
#include <time.h> // srand, rand functions
#define MAX_VAL 100 // Second seed for random number
#define MIN_VAL 0 // First seed for random number
#define true 1
#define false 0


void game(int *rand_int, int *round, int *usr_guess, char *usr_status, int *usr_account, int *usr_bet); // rand_int: random_number, round: game_round, usr_guess: user_guess, usr_status: user_status
void guess(int *rand_num); // rand_num represents 'random_number' in main
int main(void){
	// Random number seed
	srand(time(MIN_VAL));
	
	// Variables
	int user_account;  // Will hold the total acount 
	int user_bet;	   // Will hold the bet (for each game)
	int game_round;    // Will hold the round, (1 - 3)
	int random_number; // Will be generated under 'guess' function
	int user_guess;    // Will be compared with 'random_number'
	char user_status = 'N';  // 'W' or 'L' (Win or Lose) (N for null)
	char end_game = 'N'; 	   // 'y' or 'n' (Yes or no, ends game depends what user choices) (N for null)
	
	printf("Enter a start account for the game:\n"); 
	scanf("%d",&user_account);
	// TO DO: call the guess function to generate random number
	
	while(true){
		// To start the game
		game_round = 1;
		
		// Generate the random number
		printf("Enter the bet amount: ");
		scanf("%d",&user_bet);
		
		guess(&random_number);
		
		
		//user_bet vs user_account
		if(user_bet > user_account){
			printf("Your bet cannot higher than your account, try again!\n");
		    continue;
		    
		}
		// Game starts
		else{
			while(true){
				
				user_status = 'N';
				for(game_round = 0; game_round <= 3; game_round++){
    				printf("Enter a number between %d-%d: ", MIN_VAL, MAX_VAL); scanf("%d",&user_guess);
    				if(user_guess > MAX_VAL || user_guess < MIN_VAL){
    					game_round--;	
					}
					else{
						game(&random_number, &game_round, &user_guess, &user_status, &user_account, &user_bet);
    			    	if(user_status != 'N'){
    			        	break;
    			    	}	
					}
				}
				
				
				if(user_status == 'W'){
					user_account = user_account + user_bet;
					printf("You win the game! The number was %d\nYour account is %d$\n",random_number,user_account);
					break;
				}
				else if(user_status == 'L'){
					user_account = user_account - user_bet;
					printf("You lost the game! The number was %d\nYour account is %d$\n",random_number,user_account);
					break;
				}
				user_status = 'N';
			}
			if(user_account == 0){
				printf("You lost all your money!\nThank you for playing. See you next time!");
				break;
			}
			else{
				printf("Do you want to play again?\n:"); scanf(" %c",&end_game);
				if(end_game == 'y' || end_game == 'Y' || end_game == 'n' || end_game == 'N'){
					if(end_game == 'n' || end_game == 'N'){
						printf("Thank you for playing. See you next time!\n");
						return 0;
					}
				}
			}
		}
	}
	return 0;
		
}

void game(int *rand_int, int *round, int *usr_guess, char *usr_status, int *usr_account, int *usr_bet){
	 //printf("%d\n",*round);
	switch(*round){
		case 0 ... 1:
			if(*usr_guess == *rand_int){
				*usr_status = 'W';
			}
			else{
				if(*usr_guess < *rand_int){
					printf("Try a bigger number!\n");
				}
				else if(*usr_guess > *rand_int){
					printf("Try a lower number!\n");
				}
			}
			break;
		case 2:
			// Win
			if(*usr_guess == *rand_int){
				*usr_status = 'W';
			}
			// lose
			else{
				*usr_status = 'L';
			}
			break;
		
	}
}



void guess(int *rand_num){
	*rand_num = rand() % MAX_VAL + MIN_VAL;
	return;
}