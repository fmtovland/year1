/*
program requirements: Enter current date, then display current date plus 1 day
author: Liam McCormick
Date: 30-03-17
OS: Gentoo
Kernel: Linux 4.9.17
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#include <lminput.h>

struct date_rec
{
	int day;
	int month;
	int year;
};

//prototypes
int isleap(int);	//check if number is leapyear

int main()
{
	struct date_rec current_date;
	register int i;
	int febdays;	//number of days in february

	//ask user for input
	printf("Please enter the current date, sepperated by /s\n");
	scanf("%2d %*c %2d %*c %2d",&current_date.day,&current_date.month,&current_date.year);
	overflow();

	//add 1 day
	current_date.day++;

	switch(current_date.month)
	{
		case 2:	//february
		{
			febdays=isleap(current_date.year);

			current_date.month=current_date.month+(current_date.day/febdays);
			current_date.day=current_date.day%febdays;
			break;

		}//end case 2

		case 4:	//april, june and november
		case 6:
		case 11:
		{
			current_date.month=current_date.month+(current_date.day/30);
			current_date.day=current_date.day%30;
			break;

		}//end case 4,6,11

		default:
		{
			current_date.month=current_date.month+(current_date.day/31);
			current_date.day=current_date.day%31;

		}//end default

	}//end switch

	current_date.year=current_date.year+(current_date.month/12);
	current_date.month=current_date.month%12;
	current_date.year=current_date.year%100;

	//print current time
	printf("date is ");
	for(i=0; i<3; i++)
	{
		printf("%2d",*(&current_date.day+i));
		if(i==2)
		printf("\n");
		else
		printf("/");
	}

}//end main

int isleap(int year)	//copied straight form lab test 1
{
	if(year>70)
	year=year+1900;
	else
	year=year+2000;

	int test1,test2,test3;

//test1 will be whether the number divided by 4 has a remainder. if not, the test is a sucess.
	test1=year%4;

	//test2 will check if it is evenly divisable by 100.  if the remainder is zero this test is a failure only redeemable by the results of the next test.
	test2=year%100;

	//test3 will check if it is evenly divisable by 400. If not, and if it is evenly divisable by 100 then the number is NOT a leap year.
	test3=year%400;


	//and it all comes together
	if(test1 == 0 && test2 != 0)
	{
		return 29;
	}

	else if(test1 == 0 && test2 == 0 && test3 == 0)
	{
		return 29;
	}


	else
	{
		return 28;
	}
	//end logic to print results of test

}//end isleap
