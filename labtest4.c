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
#define PASNO 2		//number of passengers the program can deal with

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
	struct date flyday;	//date of departure
	char surname[SURNO];	//surname
	char firstname[NAMNO];	//firstname
	int seatno;		//seat number
};

//prototypes
void enter_psngrs(struct passenger*,int);	//enter passenger info
void display_psngrs(struct passenger*,int);	//display passenger info
int overflow();
int wordget(char*,int);


int main()
{
	struct passenger mypassengers[PASNO];	//hold passenger data

	//ask user to enter passenger details
	enter_psngrs(mypassengers,PASNO);

	//Display passenger info
	display_psngrs(mypassengers,PASNO);

	return 0;

}//end main

void enter_psngrs(struct passenger *editable,int passno)	//passno is the number of passengers to enter
{
	register int i;			//for loops
	int flightno;			//both passenger's flight number
	struct date day_of_flight;	//the day both passengers fly out

	//get flight and date for both passengers
	printf("Enter Flight number for the %d passengers\n",passno);
	scanf("%d",&flightno);

	printf("Enter Flight date for the %d passengers (eg. 06/04/1998)\n",passno);
	scanf("%2d %*c %3s %*c %4d",&day_of_flight.day,day_of_flight.month,&day_of_flight.year);	//will scan in a year in the format above

	for(i=0; i<passno; i++)		//copy this data into the passenger sturct array
	{
		(editable+i)->flightno=flightno;
		(editable+i)->flyday=day_of_flight;
	}//end for

	//get the rest of the passenger info
	for(i=0; i<passno; i++)
	{
		printf("Enter firstname for passenger %d: ",i);
		wordget((editable+i)->firstname,NAMNO);

		printf("Enter surname for passenger %d: ",i);
                wordget((editable+i)->surname,NAMNO);

		printf("Enter seat number for passenger %d: ",i);
		scanf("%d",(editable+i)->seatno);
	}
}//end enterpsngrs

void display_psngrs(struct passenger *person2disp,int passno)	//passno is number of passengers
{
}

//make sure too many characters were not entered (good for scanfs)
int overflow()
{
	char a='\0';	//hold a character to check if input is done
	register int i=-1;

	do	//suck input to the ether until a newline is detected
	{
		scanf("%c",&a);
		i++;

	}//end while
	while(a != '\n');

	return i;

}//end overflow

//Input a string of length defineable by #defines or variables
int wordget(char *output, int length)
{
	length=length-1;	//auto account for the null character
	register int i=0;
	char buffer=0;

	while(i<length)
	{
		scanf("%c",&buffer);	//scan character into buffer
		if(buffer!='\n')	//if not at end of input
		*(output+i)=buffer;	//put buffer into next slot of output
		else
		break;	//end before i = length if a \n is detected

		i++;
	}

	*(output+i)='\0';	//null termiate

	i=0;
	if(buffer!='\n')
	i=overflow();	//move all overflow to the ether

	return i;	//return the number of characters over the limit I am

}//end wordget
