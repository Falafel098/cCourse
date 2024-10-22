#include <stdio.h> /*p-calendar.c*/
#include <stdlib.h>
#include <time.h>

void printMonth(int year, int month);

int numberOfDays(int monthNumber, int year);  

int main() {
    // Get the current time
    time_t t = time(NULL);
    struct tm currentTime = *localtime(&t);

    int currentYear = currentTime.tm_year + 1900; // tm_year is years since 1900
    int currentMonth = currentTime.tm_mon + 1;    // tm_mon is 0-11, so add 1 to get 1-12

    // Print the next 3 months
    for (int i = 0; i < 3; i++) {
        printMonth(currentYear, currentMonth);

    	// Move to next month
    	currentMonth++;
    	if (currentMonth > 12) {
   		currentMonth = 1;
    		currentYear++; 
    		} 
   	}

    return 0;
    }

void printMonth(int year, int month) {

const char *months[] =  {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	printf("\n%s %d\n", months[month - 1], year);
	
	printf("Mon Tue Wen Thu Sat Sun\n");

}

int numberOfDays(int monthNumber, int year)  
{  
    // January  
    if (monthNumber == 0)  
        return (31);  
  
    // February  
    if (monthNumber == 1) {  
        // If the year is leap then Feb  
        // has 29 days  
        if (year % 400 == 0  
            || (year % 4 == 0  
                && year % 100 != 0))  
            return (29);  
        else
            return (28);  
    }  
  
    // March  
    if (monthNumber == 2)  
        return (31);  
  
    // April  
    if (monthNumber == 3)  
        return (30);  
  
    // May  
    if (monthNumber == 4)  
        return (31);  
  
    // June  
    if (monthNumber == 5)  
        return (30);  
  
    // July  
    if (monthNumber == 6)  
        return (31);  
  
    // August  
    if (monthNumber == 7)  
        return (31);  
  
    // September  
    if (monthNumber == 8)  
        return (30);  
  
    // October  
    if (monthNumber == 9)  
        return (31);  
  
    // November  
    if (monthNumber == 10)  
        return (30);  
  
    // December  
    if (monthNumber == 11)  
        return (31);  
} 

