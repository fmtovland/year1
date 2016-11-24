/*
Program Discription: My first continuous assesment. It emulates the PIN facility
of an ATM. It assumes the pin menu is already open when the program first
executes.

Author: Liam McCormick
Date: 25-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
Tested compiler:gcc 4.8.2 or 4.8.4 (dpkg -l says 2, gcc -v says 4)
*/

#include <stdio.h>
#define HIGHEST 9999	//the highest permitted value of the pin intager
#define LOWEST 0000	//the lowest permitted value of the pin intager
#define LENGTH 4	//how many digits in the pin

int main()
{
	int pin=1234;		//the variable that will contain the pin number,
				//initialised to the default of 1234

	char choice='0';	//The variable that will be used for making menu selections
				//originally an intager, changed to try patch out the loop bug

	char inputA[LENGTH],inputB[LENGTH];	//These will be used in operations comparing user input,
	int  input1,input2;			//for example verifying the pin, or changing the pin,

	int rights=0;	//the number of times the pin was entered correctly
	int wrongs=0;	//the number of times the pin was entered incorrectly
	int i,j;	//for use in for loops

	do
	{

		if(choice!='\n')//this is part of a bug fix. the program may work
				//perfectly without it but on my machine it would
				//sometimes run the menu loop twice after entering
				//into it because for some reason it believed someone
				//had pressed enter, but that input had not been given
				//sorry for the mess.
		{
			printf("Enter a number to make your selection \n \n");

			printf(" 1. Enter your PIN to verify it \n");
			printf(" 2. Change your PIN \n");
			printf(" 3. Display the number of times the pin has been \n    entered, both correctly and incorrectly \n");
			//this will print onto two lines. there are 4 spaces
			//between the new line \n and the word enter. this makes
			//it look neat
			printf(" 4. Exit \n\n");

		}//end if

		scanf("%c",&choice);
		printf("\n");

		switch(choice)
		{
			case '1':
			{
				printf("Please enter your four digit PIN number now\n\n");

				j=1000;		//set to 10 to the power of LENGTH
				input1=0;	//these two lines set the starting point
				for(i=0; i<LENGTH; i++)
				{
					scanf("%c",&inputA[i]);
					if(inputA[i]<48 || inputA[i]>57)
					{
						printf("\nError, invalid PIN number \n");
						break;
					}//end if

					else
					{
						input1=input1+((inputA[i]-48)*j);
						j=j/10;
					}//end else

				}//end for

				printf("\n"); //skip a line for neatness

				if(input1>HIGHEST || input1<LOWEST)	//ie is it a four digit number other than zero
				{
					printf("\nError, invalid PIN number \n");
					break;
				}//end if

				else if(input1==pin)	//ie the pin entered is the one stored
				{
					printf("That is correct \n");
					rights++;	//add one to the counter for times correct pin entered.
					break;
				}//end else if

				else
				{
					printf("That is incorrect \n");
					wrongs++;	//add one to the counter for times incorrect pin entered.
				}//end else

				break;

			}//end case 1

			case '2':	//changes the pin if the same one is entered both times
			{
				printf("Enter your new four digit PIN number now \n");
				scanf("%d",&input1);
				printf("Enter the new PIN again to change your pin number \n");
				scanf("%d",&input2);
				printf("\n");	//another line for neatness

				if(input1>HIGHEST || input1<LOWEST)
				{
					printf("Error: PIN is not four digits \n"); //ensures the pin is four digits
				}

				else if(input1==input2)
				{
					pin=input1;
					printf("Your PIN has been sucessfully updated \n");

					if(pin>999)
					{
						printf("Your new pin is %d",pin);
					}

					else if(pin>99)
					{
						printf("Your new pin is 0%d",pin);
					}

					else if(pin>9)
					{
						printf("Your new pin is 00%d",pin);
					}

					else
					{
						printf("Your new pin is 000%d",pin);
					}

				}

				else
				{
					printf("Error: The numbers entered do not match \nYour pin has not been updated \n");
				}

				break;
			}//end case 2

			case '3':	//as stated above, prints the number of times the pin was entered
					//both correctly and incorrectly.
			{
				printf("You have correctly entered your pin %d times \n",rights);
				printf("You have incorrectly entered your pin %d times \n",wrongs);
				break;
			}//end case 3

			case '4':
			{
				printf("Have a nice day. \n");
				break;
			}//end case 4

			case '\n':
			{
				break;
			}//This is to fix a bug. sorry if it is unneat

			default:
			{
				printf("%c is not a valid option \n",choice);
			}//end default

		}//end switch

		if(choice!='\n')	//that irritating bug again
		{
			printf("\n\n");	//adds 2 lines before the start when
					//the program loops so as to seperate
					//reiterations of the loop
		}//end if

	}//end while
	while(choice!='4');

	return 0;

}//end main
