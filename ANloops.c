#include <stdio.h>      /*02:59:10   -  2 dimensional arrays + nested loops*/
#include <stdlib.h>

int main () {

	int nums[3][2] = {  /* 3 elementd in the array and each array has two elements indside of it*/ 
		{1, 2}, 
		{3, 4},
		{5, 6}
	
	};


	/* printf("%d", nums[0][0]); -  prints out 1*/


	int i, j;
	for(i = 0; i < 3; i ++) { /*going though this four loop three times*/
	
		for(j = 0; j < 2; j++) { /*2 equal to the elements inside of the arrays*/
			printf("%d,", nums[i][j]);
		}
		printf("\n");
	}

	return 0; 
}
