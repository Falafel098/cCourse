#include <stdio.h>     /*01:12:09*/
#include <stdlib.h>

int main ()
{
	int num1; /*can use double */
	int num2; /* can use double */
	printf("Enter first number: ");
	scanf("%d", &num1); /* double --> %lf */ 

	printf("Enter second number: ");
	scanf("%d", &num2); /* double - %lf */ 

	printf("Answer: %d \n", num1 + num2); /* can use (+ - * /) */ /* double - %f */

	return 0;
}
