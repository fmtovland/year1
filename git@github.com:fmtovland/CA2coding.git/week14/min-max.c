/*
Program Requirements:
Write a program that uses a function to find the highest and lowest number of 3
values. These 3 values must be passed as parameters to the function, i.e.
function_name(int, int, int). Your function should find these values and display
messages stating:
The Highest value is x
The Lowest value is y

Program Author: Liam Mc Cormick
Date: 02-02-17
OS: Gentoo
Kernel: Linux 4.9.7
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#define NUMNO 3		//number of values to compare

//prototype
void function_name(int, int, int);

int main()
{
	int values[NUMNO];
	int i;

	printf("Enter %d values\n",NUMNO);

	for(i=0; i<NUMNO; i++)
	{
		scanf("%d",values+i);

	}//end for

	function_name(values[0],values[1],values[2]);

	return 0;

}//end main

void function_name(int a, int b, int c)
{
	if(a<b)
	{
		if(b<c)
		{
			printf("The Highest value is %d \n",c);

		}//end if

		else if(b>c)
		{
			printf("The Highest value is %d \n",b);

		}//end else if

	}//end if


	else
	{
		if(a<c)
		{
			printf("The Highest value is %d \n",c);

		}//end if

		else if(a>c)
		{
			printf("The Highest value is %d \n",a);

		}//end else if

	}//end else
	
	
	if(a>b)
	{
		if(b>c)
		{
			printf("The Lowest value is %d \n",c);

		}//end if

		else if(b<c)
		{
			printf("The Lowest value is %d \n",b);

		}//end else if

	}//end if


	else
	{
		if(a>c)
		{
			printf("The Lowest value is %d \n",c);

		}//end if

		else if(a<c)
		{
			printf("The Lowest value is %d \n",a);

		}//end else if

	}//end else

}//end function_name
