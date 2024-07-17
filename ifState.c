#include <stdio.h>      /*01:53:24*/
#include <stdlib.h> 


int max(int num1, int num2, int num3) {
	int result;

	if (num1 >= num2 && num1 >= num3){
		result = num1;       
	} else 
	if (num2 >= num1 && num2 >= num3){ 
		result = num2; 
	} else { 
		result = num3;
	}
}
int main() {

	printf("%d\n", max(1, 2, 3)); /* prints 3*/

	if (3 > 2 || 2 > 5) { /* || = or */
		printf("True\n"); 
		
	} else { 
		printf("False\n"); 
	}

	if (3 !=2 ) { /* != = not equal to */
		printf("True\n"); 
	} 

	if (!(3 > 2)) {/* this is false */
		printf("True"); /* not gonna prinft true */	
	}	
	if (!(3 < 2)) {/* this is true */
		printf("True\n"); /* gonna prinft true */
	}
	return 0;
}
