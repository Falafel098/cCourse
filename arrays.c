#include <stdio.h>      /*01:26:28*/
#include <stdlib.h>

int main() 
{ 
	/* int[]; --> array that hold intger */
	/* char[];--> array that holds charecters */
	/* double[]; -->  array that hold decimal numbers */
	
	int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
	printf("%d\n", luckyNumbers[0]); /* prinfts 4*/

	luckyNumbers[1]=200;
	printf("%d\n", luckyNumbers[1]); /*prints 200*/

	int LuckyNumbrs[10]; /*if you dont know the elemnts*/
	luckyNumbers [1] = 80;
	luckyNumbers [0] = 90; 
	printf("%d\n", luckyNumbers[0]);

	char phrase[] = "Arrays";

	return 0;
}
