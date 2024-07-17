#include <stdio.h>     /*02:21:26*/ 
#include <stdlib.h> 
#include <string.h> 

/*data structore where we can store a group of data types*/

struct student { 
	char name[50];
	char major [50];
	int age;
	double gpa;
};

int main() {

	struct student student1; /*crated a containr where i can store name major etc.*/
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy( student1.name, "Jim");	
	strcpy( student1.major, "Business");

	printf("%f\n", student1.gpa); /*prints 3.2 */
	printf("%s\n", student1.name);  /* prints Jim*/  
	
	struct student student2; /*can create another student*/
	student2.age = 23;
	student2.gpa = 4.6;
	strcpy( student2.name, "Tom");	
	strcpy( student2.major, "Art");
	
	printf("%f\n", student2.gpa); /* prints 4.6 */
	printf("%s\n", student2.name);  /* prints Tom */  
	
return 0;
}	
