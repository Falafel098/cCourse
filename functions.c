#include <stdio.h>     /* 01:36:46*/
#include <stdlib.h> 

/* function is a colloctions of code that preforms a specific task*/ 

/* void sayHi() { this function inst gonna return any information 
	printf("Hello User"); 
}
int main()    main = function 
{ 
	 
	sayHi ();   prints Hello User
	return 0;
} */


void sayHii(char name [], int age) { /* parameter = a value that we give to a function*/
	printf("Hello %s, you are %d\n", name, age); } 

int main()  
{ 
	 
	sayHii("Mike", 40); /* prints Hello Mike*/
	sayHii("Tom", 19); /* prints Hello Mike*/
	sayHii("Oliver", 58); /* prints Hello Mike*/
	return 0;
}


