#include <stdio.h>      /*01:45:37*/
#include <stdlib.h>

double cube(double num) { 
	double result = num * num * num;
	return result;
	/* or return num * num * num; */
}

int main () { /* special line of code - allow them to return imformation back to whoever called them */

				/* 2³ --> 2*2*2 - make a funtion that does that*/
	printf("Answer: %f\n", cube(3.0));

	return 0; 
}
