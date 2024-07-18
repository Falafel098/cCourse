#include <stdio.h>     /*02:37:48*/
#include <stdlib.h>

int main() { 

	int secretNumber = 5; /*storing the number they need to guess*/
	int guess; /*keep track of the user's guess eacth time*/
	int guessCount = 0; /* how many times they have guessed the number */
	int guessLimit = 3; /*How many times they can guess */
	int outOfGuesses = 0; /* wortheir or not the user is out og guesses */
	
	printf("Guess the correct number (its from 0 - 9). \nYou have 3 guesses.\n\n");

	while (guess != secretNumber && outOfGuesses == 0){  /*checks if guess - not edual to  secret number + keep looping if  outofguesses - equal to zero */
		if (guessCount < guessLimit){ 
		printf ("Enter a number: ");
		scanf("%d", &guess);
		guessCount++;
		} else {
			outOfGuesses = 1; 
		}
	}
	if(outOfGuesses == 1) {
		printf("You lost:(\n");
	}else {
	printf("You win!\n");
	}
	return 0;
}

