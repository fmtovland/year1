/*
Program Discription: Write a program to find the sum of all the odd intagers from 1 to 99.
Note: Using a loop despite that (n/2)*(2a+((n+1)*d)) would probably be more efficient.
Program Author: Liam McCormick
Date: 17-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>

int main()
{
	int i,sum;
	sum=0;
	for(i=1; i<101; i=i+2)
	{
		sum=sum+i;
	}//end loop

	printf("the sum of all the odd intagers from 1 to 99 is %d \n",sum);

}//end main
