#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char* rand_string(size_t length) {
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	size_t charset_size = sizeof(charset) - 1; /* exclude NULL terminator*/
	
	char *str = malloc(length + 1); /*+1 for NULL terminator (\0)*/

	if (!str) { 
		return NULL; /*handle allocation faliure*/
	} 
		for (size_t i = 0; i < length; i++) {
        	int random_index = rand() % charset_size; /*(122 - 97 + 1) + 97; */
		str[i]= charset[random_index];
        }
        	str[length] = '\0';

	return str; /*returns the pointer to the dynamacally allocated random string */

}


int main (int argc, char* argv[]) {
	srand(time(NULL)); /* srand - always in the begining of int main*/
	
	size_t length = 10;

	char* str = rand_string(length); /*calls rand... function generate random string in specified length*/

	if (str) {
	printf("Your new password: %s\n\n", str);
	
	free(str); /*to avoid memory leaks*/
	} else { 
		printf("Memory allocation failed! \n");
	}
return 0;
}

