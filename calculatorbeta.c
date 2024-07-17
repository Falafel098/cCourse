#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
	



	int num1, num2;
	char op;
	char input[10];  
	/* char input[] = "yes";
 	char input2[] = "no";*/		
	int result;
	
	while(1) { 

	printf("Enter your first number: \n");
	scanf(" %d", &num1);
	printf("Enter operator: \n");
	scanf(" %c",&op);
	printf("Enter your second number: \n");
	scanf(" %d", &num2); 

	
	if (op == '+') {
		result = num1 + num2;
	} else
	if (op == '-') {
		result = num1 - num2;
	} else
	if (op == '/') {
		if (num2 != 0){
		result = num1 / num2;
	} else { 
		printf("Error: Division with zero is not allowed \n");
		exit(1); /* or return 1; */
		}	
	} else
	if (op == '*') {
		result = num1 * num2;
	} else {
		printf("Invalid operator \n");
		exit(1); /* or return 1; */
       	}
		printf("Results: %d\n\n", result);
	

		printf("Do you wish to continue. [yes or no]?  \n"); 
		scanf("%s", input); 
				 
				
			if (strcmp(input, "no") == 0){ /* checks if input - equal to "no" */
				break; 

			} else if (strcmp(input, "yes") != 0) { /*chechs if input - not equal to "yes" */
			
				printf("Invalid input. Please enter 'yes' or 'no'\n"); 
				
				}
	}
			

	return 0;
}
