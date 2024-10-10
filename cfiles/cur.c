#include <stdio.h>      /*main function's parapeters - current converter*/
#include <stdlib.h>
#include <string.h>


double convert_currency(double amount, char *in_currency, char *out_currency) {
	
	double result;

	/*THE RATES*/
	const double USD_EURO_RATE = 0.9056;
        const double USD_DKK_RATE = 6.7377;
        const double USD_IQD_RATE = 1310;
        const double EURO_DKK_RATE = 7.4685;
        const double EURO_IQD_RATE = 1452.4625;
        const double DKK_IQD_RATE = 0.0051;

	/*IN CURRENCY + OUT CURRENCY*/
        if (strcmp(in_currency, "usd") == 0 && strcmp(out_currency, "euro") == 0) 
                return amount * USD_EURO_RATE;
        else if (strcmp(in_currency, "euro") == 0 && strcmp(out_currency, "usd") == 0) 
                return amount / USD_EURO_RATE;
        else if (strcmp(in_currency, "usd") == 0 && strcmp(out_currency, "dkk") == 0) 
                return amount * USD_DKK_RATE;
        else if (strcmp(in_currency, "usd") == 0 && strcmp(out_currency, "iqd") == 0) 
                return amount * USD_IQD_RATE;
        else if (strcmp(in_currency, "iqd") == 0 && strcmp(out_currency, "usd") == 0) 
                return amount / USD_IQD_RATE;
        else if (strcmp(in_currency, "euro") == 0 && strcmp(out_currency, "dkk") == 0) 
                return amount * EURO_DKK_RATE;
        else if (strcmp(in_currency, "dkk") == 0 && strcmp(out_currency, "euro") == 0)
                return amount  / EURO_DKK_RATE;
        else if (strcmp(in_currency, "euro") == 0 && strcmp(out_currency, "iqd") == 0) 
                return amount  * EURO_IQD_RATE;
        else if (strcmp(in_currency, "iqd") == 0 && strcmp(out_currency, "euro") == 0) 
                return amount  / EURO_IQD_RATE;
        else if (strcmp(in_currency, "dkk") == 0 && strcmp(out_currency, "iqd") == 0) 
                return amount  * DKK_IQD_RATE;
        else if (strcmp(in_currency, "iqd") == 0 && strcmp(out_currency, "dkk") == 0) 
	       	return amount   / DKK_IQD_RATE;
		
}

int main(int argc, char *argv[]) {

        double amount = atof(argv[1]);
        char *in_currency = argv[2];
        char *out_currency = argv[3];
	
	convert_currency(amount, in_currency, out_currency);
	double result= convert_currency(amount, in_currency, out_currency);

	printf("\n%f %s is %f %s\n\n", amount, in_currency, result, out_currency);
 

        return 0;
}

