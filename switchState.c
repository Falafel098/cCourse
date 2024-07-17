#include <stdio.h>       /*02:14:52*/
#include <stdlib.h> 

int main () {

	char grade = 'A'; 
	
	switch (grade) {
		case 'A' : /*diffrent conditions*/
			printf("You did great! ");
			break;	
		case 'B' : 
			printf("You did alright! ");
			break;
		case 'C' : 
			printf("You did poorly! ");
			break;
		case 'D' : 
			printf("You did very bad! ");
			break;
		case 'E' : 
			printf("You did very terrible! ");
			break;
		case 'F' : 
			printf("You failed! ");
			break;
		default : /*executes when the input is non of these upove*/
			printf("Invalid grade");

	}

	return 0;
}
