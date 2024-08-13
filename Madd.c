#include <stdlib.h>      /*03:09:10 - Memory Addresses*/
#include <stdio.h>
			/* shows the physical memory address where the value of 30/3.4/'A'... is stored in the pc*/
int main () {
	int age = 30;
	double gpa = 3.4;
	char grade = 'A';

	printf("%p\n", &age); /*finds memory addres for age*//* memory address - %p (actually stands for pointer) */
	printf("age: %p\ngpa: %p\ngrade: %p ", &age, &gpa, &grade); /* finds memory address for age gpa and grade */
		/* prints out -	age: 0x7ffe0f1faa4c
				gpa: 0x7ffe0f1faa50
				grade: 0x7ffe0f1faa4b */
	       
		return 0;

}

