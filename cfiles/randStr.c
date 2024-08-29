#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char* rand_string(size_t length) {
	char *str = malloc(length + 1); /*+1 for NULL terminator (\0)*/

	if (!str) { 
		return NULL; /*handle allocation faliure*/
	} 
for (size_t i = 0; i < length; i++) {
        str[i] = rand() % (122 - 97 + 1) + 97;  /*ASCII table*/
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

