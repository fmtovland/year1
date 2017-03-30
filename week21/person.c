/*
program requirements:
Design structure templates, incorporating the use of nested structures, to store
biographical data about a person.
Your program must:
a) Enter data for a person's firstname, surname, date of birth, height, weight, eye
colour & country of citizenship.
b) Display the data entered.
c) Copy the data and store it in a 2nd person's record and then modify it.
d) Display the new data for the 2nd person.

Program Author: Liam McCormick
Date: 30-03-17
OS: Gentoo
Kernel: Linux 4.9.17
Compiler: GCC 4.9.4
*/

#include <stdio.h>
#include <lminput.h>
#define NAMLEN 15	//length of firstname and nation name
#define SURLEN 25	//length of surname

struct date
{
        int day;
        int month;
        int year;
};


struct person
{
	char firstname[NAMLEN];
	char surname[SURLEN];
	struct date dob;
	int height;		//should be around 150cm
	int weight;		//in grammes
	unsigned int eyecolour;	//hexidecimal colour value. #00ff00 is green for example
	char country[NAMLEN];	//eg Scotland
};

//prototypes
struct person getman();
void display(struct person);

int main()
{
	struct person john,mike; //two records for people

	john=getman();
	printf("\n");
	display(john);

}

struct person getman()
{
	struct person man;
	register int i;

	printf("Enter firstname: ");
	wordget(man.firstname,NAMLEN);

	printf("Enter surname: ");
	wordget(man.surname,NAMLEN);

	printf("Enter date of birth: ");
	for(i=0; i<3; i++)
	{
		scanf("%2d",&man.dob.day+i);
		if(i==2)
		overflow();
		else
		scanf("%*c");
	}

	printf("Enter height in cm: ");
	scanf("%d",&man.height);

	printf("Enter weight in grammes: ");
	scanf("%d",&man.weight);

	printf("Enter eyecolour (hexidecimal): #");
	scanf("%x",&man.eyecolour);
	overflow();

	printf("Enter home country: ");
	wordget(man.country,NAMLEN);

	return man;

}//end getman

void display(struct person man)
{
	printf("Firstname is %s\n",man.firstname);
	printf("Surname is %s\n",man.surname);
	printf("date of birth is %d/%d/%d\n",man.dob.day,man.dob.month,man.dob.year);
	printf("height is %d\n",man.height);
	printf("weight in grammes is %d\n",man.weight);
	printf("eyecolour is #%x\n",man.eyecolour);
	printf("home country is %s\n",man.country);

}//end display
