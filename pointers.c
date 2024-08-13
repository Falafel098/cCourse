#include <stdlib.h>     /* 03:17:22  -  Pointers */
#include <stdio.h>
			/* a type of data = memory address */

int main () {

	int age = 30;
	int * pAge = &age; /* pointer variable is storing the memory address of the age variable */ 
	
	double gpa = 3.4; 
	double * pGpa = &gpa; /* pointer variable is storing the memory address of the gpa variable */ 
	
	char grade = 'A';
	char * aGrade = &grade; /* pointer variable is storing the memory address of the grade variable */ 

	printf("age's memory address: %p\n", &age); /*when you put & --> gives you - physical address */
return 0;
}

