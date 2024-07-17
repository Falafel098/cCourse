#include <stdio.h       /* 01:17:44 */
#include <stdlib.h>

int main ()
{
	char color [20];
	char pluralNoun [20];
	char celebrity [20];
	/* char celebrityF [20];
	char celebrityL [20]; */
	
	printf ("Enter a color: ");
	scanf("%s", color);
	printf ("Enter a plural noun: ");
	scanf("%s", pluralNoun);
	printf ("Enter a celebrity: ");
	scanf("%s", celebrity);
	/* scanf("%s %s", celebrityF, celebrityL); */

	printf("Roses are %s\n", color);
	printf("%s are blue\n", pluralNoun);
	printf("I love %s\n", celebrity);
	/* printf("I love %s %s\n", celebrityF, celebrityL) */

	return 0;
}
