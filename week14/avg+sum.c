/*
Program Requirements:
Write a program that uses 2 functions called sum() and average(). Your program must
ask the user to enter 3 numbers inside the main(). Your main() should then pass these
3 values as parameters to the function sum(). This function should calculate the sum
of the 3 numbers. Your function sum() should then pass the sum of the 3 numbers as a
parameter to the function average(). The function average() should then calculate the
average of the 3 numbers and display this on the screen.

AUrhor: Liam McCormick
Date: 02-02-17
OS: Gentoo
Kernel: Linux 4.9.7
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#include <liblml.h>	//contains the function mean_average()
#define NUMNO 3		//size of the array numbers

//prototypes

int total(int*,int);	//santax sum(array,
float mean_average(int*,int);

int main()
{
	int i;			//for loops
	int numbers[NUMNO];	//contains 3 numbers
	int sum;		//sum of numbers
	float average;		//average of numbers

	printf("Enter %d numbers \n",NUMNO);

	for(i=0; i<NUMNO; i++)	//enter 3 numbers
	{
		scanf("%d",numbers+i);
	}//end for

	sum=total(numbers,NUMNO);
	average=mean_average(numbers,NUMNO);

	printf("The sum is %d.\nThe average is %.2f\n",sum,average);

}//end main

int total(int *data, int size)
{
	int i;	//for loops
	int result=0;	//value to return

	for(i=0; i<size; i++)	//enter 3 numbers
	{
		result=result + *(data+i);
	}//end for

	return result;

}//end sum
