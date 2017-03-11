/*
enter a country. print the capital.
Author: Liam McCormick
Date: 11-03-17
OS: Gentoo
Kernel: Linux 4.9.12
Compiler: GCC 5.4
*/

#include <stdio.h>
#include <string.h>
#define NUMNO 10

int main()
{
	char input[21];	//maximum input size is 20
	register int i; //for the loop

	//list of countrys an cities
	char *countries[NUMNO]={"Australia",
				"Belgium",
				"China",
				"Denmark",
				"England",
				"France",
				"Greece",
				"Ireland",
				"Scotland",
				"Wales"	};

	char *cities[NUMNO]={	"Canberra",
				"Brussles",
				"Beijing",
				"Copenhagen",
				"London",
				"Paris",
				"Athens",
				"Dublin",
				"Edinburgh",
				"Cardiff"};

	//get user input
	printf("Enter a country to print the capital\n");
	scanf("%s",input);

	//compare user input to list and print output
	for(i=0; i<NUMNO; i++)
	{
		if(strcmp(countries[i],input)==0)
		{
			printf("The capital of %s is %s\n",countries[i],cities[i]);
			return 0;
		}//end if

	}//end for

	printf("Never heard of it\n");
	return 1;

}//end main
