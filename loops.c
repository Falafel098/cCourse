#include <stdio.h>       /*02:29:44*/
#include <stdlib.h>

int main() {

	int index = 1; /* if index >5 won't execute anything*/
	while (index <= 5) { /*specify a condition inside of the parentheses - checks the condition first*/
		printf ("%d\n", index); 
		index ++; /* incrementing index */
	}

		/* another type of loop */
	int index1 = 6;
	do {   /* doing whats inside the loop before checking the condition */
		printf("%d\n", index1); 
	} while(index1 <= 5); 
	

	return 0; 
}


