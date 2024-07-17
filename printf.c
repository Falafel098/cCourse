#include <stdio.h>  /* 00:38:31 */ 
#include <stdlib.h>

int main()
{

	printf ("Hello world \n");
	printf ("Hello \n world \n"); /* <-- new line (\n) */
	printf ("Hello\" world \n");  /* <-- prints " */

	printf ("%d \n", 349); /*<-- allows you to print numbers (% --> print somthing speciel) */
	printf ("my favorit numbr is %d \n", 500); /*--> prints - my favorit number is 500 */
	
	printf ("%s \n", "chocolate is nice"); /* <-- allow us to include some text */
	printf ("my favorit %s is %d \n", "number", 500); /*--> prints - my favorit number is 500 */

	printf ("%f \n", 576.32);  /* <-- decimal numbers */
	printf ("my favorit %s is %f \n", "number", 500.456); /* --> prints - my favorit number is 500.456 */

	printf ("%c \n", 'b'); /* <-- allow us to print a single character */

	int favNum = 90;
	printf ("my favorit %s is %d \n", "number", favNum); /* --> prints - my favorit number is 90 */

	return 0;
}
