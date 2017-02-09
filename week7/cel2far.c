/*
Program Discription: Read in three tempretures in fahrenheit
and convert to celsius. Print all tempretures in both when done.

Program author: Liam McCormick
Date: 29-10-16
OS: Linux mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>
#define NTMPS 3		//the number of tempretures to convert

int main()
{
	int celsius[NTMPS]={0};		//the tempreture in celsius
	int fahrenheit[NTMPS]={0};	//the tempreture in farenheit
	int i;				//to be used in for loops

	for(i=0; i<NTMPS; i++)
	{
		if(i==0)//give a different message when entering the first number
		{
			printf("Enter a tempreture \n");
		}//end if

		else
		{
			printf("Enter another tempreture \n");
		}//end else

		scanf("%d",&fahrenheit[i]);		//read in tempretures in farenheit
		celsius[i]=(fahrenheit[i]-32.0)*(5.0/9.0);	//convert to celsius
	}//end for

	printf("Fahrenheit   Celsius \n");	//column headers

	for(i=0; i<NTMPS; i++)
	{
	printf("  %d            %d \n",fahrenheit[i],celsius[i]);		//hopefull the tempretures will align under their respective headings
	}//end for

}//end main
