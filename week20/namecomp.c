#include <stdio.h>
#include <string.h>
#define NAMENO 10
#define NAMELEN 13

int main()
{
	register int i;	//for loops
	int in;	//is name on list

	//list of valid names
	char namelist[NAMELEN][NAMENO]={"John",
					"Matthew",
					"Luke",
					"Peter",
					"Micheal",
					"Brigid",
					"Ellen",
					"Jerremy",
					"Stephen",
					"Timmothy",
					"Henry",
					"Chara",
					"Lucas"};
	//users name
	char username[NAMELEN];

	//user input
	printf("Enter your name\n");
	scanf("%s",username);

	for(i=0; i<NAMENO; i++)
	{
		in=strcmp(username,(namelist+i));

		if(in==0)
		{
			break;

		}//end if

	}//end for

	if(in==0)
	printf("Hello %s\n",username);

	else
	printf("Name not found\n");

}//end main
