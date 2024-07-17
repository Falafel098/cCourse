#include <stdio.h>  /* 00:45:26 */
#include <stdlib.h>
#include <math.h>

int main ()
{
	printf("%f \n", 6.7); /* <-- prints - 6.7 */
	printf("%f \n", 6.7 + 3.5); /* <-- prints - 10.2 (can use / + - *) */ 

	printf("%d \n", 6 / 5); /* <-- 1 eventho the answer is 1,... */
	
	int num = 6;
	printf("%d \n", num); /* <-- prints - 6 */

	printf ("%f \n", pow (2, 3) ); /* <-- means -> 2³ prints - 8 */
	printf ("%f \n", sqrt (36) ); /* <-- prints - 6 */

	printf ("%f \n", ceil(34.543)); /* <-- prints - 35 */
	printf ("%f \n", floor(34.543)); /* <-- prints - 34 */
	
	return 0;
}
