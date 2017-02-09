/*
Program Requirements:

- Enter values into the gallons array and miles array.
- Calculate and fill the mpg array using the values contained in the gallons array and
miles array with the formula:
mpg = miles / gallons
- Display the contents of the mpg array

Author: Liam McCormick
Date: 29-11-16
OS: Gentoo
Kernel: 4.8.11
GCC: 4.9.3
*/

#include <stdio.h>
#define NUMNO 5

int main()
{
	float gallons[NUMNO];
	float miles[NUMNO];
	float mpg[NUMNO];
	int i;

	for(i=0; i<NUMNO; i++)
	{
		printf("How many gallons of petrol did car %d use? \n",(i+1));
		scanf("%f",gallons+i);	//fill array gallons

		printf("How many miles did car %d travel? \n",(i+1));
		scanf("%f",miles+i);	//fill miles array

		//perform calculation
		*(mpg+i) = *(miles+i) / *(gallons+i);

	}//end for

	for(i=0; i<NUMNO; i++)	//print array mpg
	{
		printf("Car %d does %.2f miles to the gallon \n",(i+1),*(mpg+i));

	}//end for

}//end main
