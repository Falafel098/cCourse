#include <stdio.h>   /* 01:00:12 */
#include <stdlib.h>

int main ()
{

	int age;      /*declare this varibale */
	printf ("Enter your age: ");
	scanf ("%d", &age);  /*scanf - allows user...*/ /*scanf - & - pointer*/
	printf ("You're %d years old \n\n", age);

	double gpa;      /*declare this varibale */
	printf ("Enter your gpa: ");
	scanf("%lf", &gpa);  /*scanf - allows user...*/ /* %lf - looking for */ /*scanf - & - pointer*/
	printf ("Your gpa is %f \n\n", gpa);

	char grade;      /*declare this varibale */
	printf ("Enter your grade: ");
	scanf (" %c", &grade);  /*scanf - allows user...*/ /*scanf - & - pointer*/
	printf ("Your grade is %c \n\n", grade);

	char name[20];      /*declare this varibale */
	printf ("Enter your name: ");
	scanf (" %s", name);  /*scanf - allows user...*//*scanf - & - pointer*/
	printf ("Your name is %s \n\n", name);

	getchar();	
	char Name[50];      /*declare this varibale */
	printf ("Enter your full name: ");
	fgets ( Name, 50, stdin);  /*fgets simmilar to scanf*//* stdin - standart input*//* now can store multiple words*/
	printf ("Your full name is %s \n\n", Name);
	
	return 0; 
}

