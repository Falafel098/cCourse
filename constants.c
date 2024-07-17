#include <stdio.h>     /* 00:56:00 */
#include <stdlib.h>

int main ()
{ 
	int num = 5;
	printf ("%d\n", num); /* prints 5 */
	num = 8; 
	printf ("%d\n", num); /*prints 8 */

	const int NUM = 5;
	printf ("%d\n", num); 
	num = 8;  /* error will happen cause num is constant (5) */
	printf ("%d\n", num); 
	
	return 0;
}
