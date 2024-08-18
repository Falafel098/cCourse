#include <stdio.h> /*used for - printf*/      /* random string */
#include <stdlib.h> /* used for - rand*/
#include <time.h> /* used for - time (random string everytime)*/

	static char *rand_string(char *str, size_t size) { /*create randon string and returns*/
		const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; /* list of characters that there will be used*/
		if (size) { /*checks if the size is greater than 0 before making a string*/
		--size; /*so it knowa when the string ends */
		for(size_t n = 0; n < size; n++) { /* loop will keep running as long n is less then size*/
			int key = rand() % (int) (sizeof charset - 1); /* sizeof...-1 would be 62 not 63(removes \0)*/ /* rand()% - ensures that random munber (key) is between 0 - 62*/
		       	
	 		str[n] = charset[key]; /* uses key as index to pick a random string*/
  				}
      			str[size] = '\0';
			}
	return 0;
	}	
	
	
	
int main() {

	srand(time(NULL)); /*different starting point, each time execute*/
	size_t size = 10; /*sets random string to 10 characters*/
	char str[size]; /*empty space for random string*/
	rand_string(str, size); /*fills empty space with 10 random characters*/

	printf("Your new password: %s\n", str); /* executes the random string*/


	return 0; 
}
