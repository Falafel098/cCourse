#include <stdio.h>    //split an integer
#include <stdlib.h>

int main() {

	int num;

	printf("Enter an number: ");
	scanf("%d", &num);

	while(num > 0) {
		int mod = num % 10; // modulo(%) operation - the remainder when dividing

	printf("%d\n", mod);

	num = num / 10;
	}



	return 0;
}

