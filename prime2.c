#include <stdio.h>   //prime numbers
#include <stdlib.h>



int main () {

        int num;
        int prime = 1;

        printf("Enter a positive number: ");
        scanf("%d", &num);

	if (num <= 1){ 
		printf("%d is not a prime number", num);
		return 0;	
	}  

	for (int i = 2; i * i <= num; i++) {
		if(num % i == 0) {
		prime = 0; //number is  not prime
		break;
		}
	}

	if (prime) {
		printf("%d is a prime number\n", num);
	} else {
		printf("%d is not a prime number\n", num);
	return 0;
	}
}

