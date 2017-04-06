/*
Program description: Write a function to enter the details of 2 passengers flying on the same flight and same
date. Then Write a function to display the details of the passengers entered in part (b) above.

Author: Liam McCormick
Date: 06-04-98
OS: Gentoo
Kernel: 4.9.18
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#include <stdlib.h>
#define	NAMNO 15	//max characters in the firstname
#define SURNO 25	//max characters in the surname

//struct templates
struct date	//hold a date
{
	int day;	//day of the month
	char month[4];	//eg jan, feb or mar
	int year;
};

struct passenger	//hold passenger info
{
	int flightno;		//flight number
	struct date;		//date of departure
	char surname[SURNO];	//surname
	char firstname[NAMNO];	//firstname
	int seatno;		//seat number
};

//prototypes
void enter_psngr(struct passenger);	//enter passenger info
void display_psngr(struct passenger);	//remove passenger info

int main()
{
}//end main
