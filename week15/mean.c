/*
Program Requirements:
Returning a value from a function. Write a program that uses a function to calculate
the average of 3 numbers. Your main() should ask the user to enter these 3 numbers
and they should be passed to the function as parameters. Your function should
calculate the average and return this value back to the main(). Your main() should
then display this average value.

Author: Liam McCormick
Date 09-02-17
OS: Gentoo
Kernel: Linux 4.9.8
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#include <liblml.h>	//a library I wrote that contains an appropriate function
#define NUMNO 3

//prototypes
float mean_average(int*,int);

int main()
{
	int list[NUMNO];	//array to hold numbers to find average of
	float average;		//will hold the average
	int i;			//for loops

	printf("Enter %d Numbers \n",NUMNO);

	for(i=0; i<NUMNO; i++)
	{
		scanf("%d",list+i);

	}//end for

	average=mean_average(list,NUMNO);

	printf("The average is %.2f \n",average);

}//end main

/*
float mean_average(int *numbers, int size)
{
	float total=0;
	int i;
	float result;

	for(i=0; i<size; i++)
	{
		total = total + *(numbers+i);

	}//end for

	result = total/size;

	return result;

}//end mean_average

*/
