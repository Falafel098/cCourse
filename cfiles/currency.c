#include <stdio.h>      /*main function's parapeters - current converter*/
#include <stdlib.h>
#include <string.h>
	


double convert_currency(char *amount[], char *in_currency[], char *out_currency[]) {

	char *amount = argv[1];
	char *in_currency = argv[2]; 
	char *out_currency = argv[3];

	double result;

	const int USD_EURO_RATE = 0.9056;
	const int USD_DKK_RATE = 6.7377;
	const int USD_IQD_RATE = 1310;
	const int EURO_DKK_RATE = 7.4685;
	const int EURO_IQD_RATE = 1452.4625;
	const int DKK_IQD_RATE = 0.0051;

		/*USD_EURO_RATE = 0.9056;*/
	if (strcmp(in_currency, "usd") == 0 && strcmp(out_currency, "euro") == 0) {
		printf("\n%s usd is ", argv[1]);
		result = atof(argv[1]) * USD_EURO_RATE;
		printf("%f euro\n\n", result); }
	
	else if (strcmp(in_currency, "euro") == 0 && strcmp(out_currency, "usd") == 0) {
	/*if(argc > 1) { */
		printf("\n%s euro is ", argv[1]);
		result = atof(argv[1])/USD_EURO_RATE;
		printf("%f usd\n\n", result); } 
	

		/*USD_DKK_RATE = 6.7377; */
	else if (strcmp(in_currency, "usd") == 0 && strcmp(out_currency, "dkk") == 0) {
		printf("\n%s usd is ", argv[1]);
		result = atof(argv[1]) * USD_DKK_RATE;
		printf("%f dkk\n\n", result); }
	
	else if (strcmp(in_currency, "dkk") == 0 && strcmp(out_currency, "usd") == 0) {
		printf("\n%s dkk is ", argv[1]);
		result = atof(argv[1]) / USD_DKK_RATE; 
		printf("%f euro\n\n", result); }


		/*USD_IQD_RATE = 1.31;*/
	else if (strcmp(in_currency, "usd") == 0 && strcmp(out_currency, "iqd") == 0) {
		printf("\n%s usd is ", argv[1]);
		result = atof(argv[1]) * USD_IQD_RATE;
		printf("%f iqd\n\n", result); }
	
	else if (strcmp(in_currency, "iqd") == 0 && strcmp(out_currency, "usd") == 0) {
		printf("\n%s iqd is ", argv[1]);
		result =atof(argv[1]) / USD_IQD_RATE;
		printf("%f usd\n\n", result); }


		/*EURO_DKK_RATE = 7.4685;*/
	else if (strcmp(in_currency, "euro") == 0 && strcmp(out_currency, "dkk") == 0) {
		printf("\n%s euro is ", argv[1]);
		result = atof(argv[1]) * EURO_DKK_RATE; 
		printf("%f dkk\n\n", result); }
	
	else if (strcmp(in_currency, "dkk") == 0 && strcmp(out_currency, "euro") == 0) {
		printf("\n%s dkk is ", argv[1]);
		result = atof(argv[1]) / EURO_DKK_RATE; 
		printf("%f euro\n\n", result); }
	

		/*EURO_IQD_RATE = 1452.4625;*/
	else if (strcmp(in_currency, "euro") == 0 && strcmp(out_currency, "iqd") == 0) {
		printf("\n%s euro is ", argv[1]);
		result = atof(argv[1]) * EURO_IQD_RATE;
		printf("%f iqd\n\n", result); } 

	else if (strcmp(in_currency, "iqd") == 0 && strcmp(out_currency, "euro") == 0) {
		printf("\n%s iqd is ", argv[1]);
		result = atof(argv[1]) / EURO_IQD_RATE;
		printf("%f euro\n\n", result); }

		/*DKK_IQD_RATE = 0.0051;*/
	else if (strcmp(in_currency, "dkk") == 0 && strcmp(out_currency, "iqd") == 0) {
		printf("\n%s dkk is ", argv[1]);
		result = atof(argv[1]) * DKK_IQD_RATE;
		printf("%f iqd\n\n", result); }
	
	else if (strcmp(in_currency, "iqd") == 0 && strcmp(out_currency, "dkk") == 0) {
		printf("\n%s iqd is ", argv[1]);
		result = atof(argv[1]) / DKK_IQD_RATE; 
		printf("%f dkk\n\n", result); }
	
	

	/*printf("argc = %d\n", argc); */

	/*printf("Have %d arguments: \n", argc);
	for(int i = 0; i < argc; i++) {
        printf("%d: %s\n", i, argv[i] );	} */

} 

int main(int argc, char *argv[]) {
		
	char *amount[50] 
	char *in_currency[10] = {"usd", "euro", "dkk", "iqd"};
	char *out_currency[10] = {"usd", "euro", "dkk", "iqd"};

	convert_currency(amount, in_currency, out_currency);



	return 0;
}

