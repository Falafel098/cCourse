#include <stdio.h>     /*02:37:48*/
#include <stdlib.h> 
#include <time.h>

int main() { 

	int rNum;
	int guess; 
	int guessCount = 0; 
	int guessLimit = 3; 
	int outOfGuesses = 0; 
	
	printf("Guess the correct number (its from 0 - 9). \nYou have 3 guesses.\n\n");
	
	srand(time(NULL)); /* for a random number*/
	int rNum = rand() %10; /*%10 = number between 0 - 9 */ 
	
	while (guess != rNum && outOfGuesses == 0){  /*checks if guess - not edual to  secret number + keep looping if  outofguesses - equal to zero */
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
		printf("the secret number is %d\n", rNum);
	}else {
	printf("You win!\n");
	}
	return 0;
}

