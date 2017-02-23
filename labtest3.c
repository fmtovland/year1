/*
Program requirements:
Enter 5 tempretures in celcius and manupulate them to farenheit and kelvin

Author: Liam McCormick
Date: 23-02-17
OS: Gentoo
Kernel: Linux 4.10
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#define NUMNO 5		//number of tempretures in the array temps_celcius

//prototypes
float convert_temp(float*);	//convert to farenheit and calculate average
float in_Kelvin(float);	//convert from celcius to kelvin

int main()
{
	//variables
	float temps_celcius[NUMNO];	//hold 5 temps
	float mean;			//holds the mean of the 5 numbers
	register int i;			//for loops


	//enter data
	printf("Enter 5 temperatures\n");
	for(i=0; i<NUMNO; i++)
	{
		scanf("%f",temps_celcius+i);

	}//end for

	//execute convert_temp
	mean = convert_temp(temps_celcius);

	//print average to the screen
	printf("\nThe average tempreture is %f\n",mean);

}//end main

float convert_temp(float *celcius_temps)
{
	//variables
	register int i;	//for loops
	float farenheit_temps[NUMNO];
	float average=0;

	//convert to farenheit and print to screen
	for(i=0; i<NUMNO; i++)
	{
		average=average + *(celcius_temps+i);	//this should go under calculate average, but to save runtime it was placed into the existing loop
		*(farenheit_temps+i)= ((*(celcius_temps+i)*9)/5)+32);	 //°F = ((°C x 9) / 5) + 32
		printf("%f \t %f \n",*(celcius_temps),*(farenheit_temps));	//print result to screen

	}//end for

	//calculate average
	average=average/NUMNO;	//when this statement executes, the float average will already contain the total, and there are NUMNO numbers

	return average;

}
