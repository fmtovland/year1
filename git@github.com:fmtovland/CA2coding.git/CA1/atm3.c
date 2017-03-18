/*
Program Discription: Emulation of the function of an automated teller machines pin services
Author: Liam McCormick
Date: 27-10-16
OS: Linux Mint 17.2 (kernel 3.16.38-0)
Compiler: 4.8.2
*/

#include <stdio.h>
#define LENGTH 4	//the number of digits in the pin code

int main()
{
	int pin[LENGTH]={49,50,51,52};	//the array to contain the pin number, intitialised to 1234
					//the numbers are stored as their ascii character values
					//this allows use of getchar() for input
					//it also allows all four numbers to be read form the same line

	char choice;			//the variable for making menu selections
	int i;				//A counter for for loops
	int input1[LENGTH];		//to hold input before writing to an array and for checking the pin number
	int correct=0;			//this will count the number of times the correct pin was entered
	int incorrect=0;		//this will count the number of times the incorrect pin was entered
	int fail;			//a counter too see how many digits of the pin are correct

	do
	{
		if(choice!='\n')
		{
			printf("\nEnter a number to make your selection \n \n");

			printf(" 1. Enter your PIN to verify it \n");
			printf(" 2. Change your PIN \n");
			printf(" 3. Display the number of times the pin has been \n    entered, both correctly and incorrectly \n");
			//this will print onto two lines. there are 4 spaces
			//between the new line \n and the word enter. this makes
			//it look neat
			printf(" 4. Exit \n\n");
		}//end if preventing an error message if no input is given

		choice=getchar();

		switch(choice)
		{
			case '1':
			{
				printf("Enter your %d digit PIN code now \n",LENGTH);
				fail=4;

				for(i=0; i<LENGTH; i++)
				{
					if(input1[i]>=48 || input1[i]<=57)	//if input[i] is not a character representing a number (0-9)
					{
						printf("Error, invalid PIN number \n");
						break;
					}//end if



					if(input1[i]==pin[i])
					{
						fail--;
						printf("%d",fail);
					}//end if

					else
					{
						printf("%d",input1[i]);
					}

				}//end for



				if(fail==0)
				{
					printf("\nCorrect \n");
				}//end if

				else
				{
					printf("\nIncorrect %d \n",fail);
				}//end else

			break;

			}//end case '1'

			case '2':
			{
				
			break;
			}//end case '2'

			case '3':
			{
				
			break;
			}//end case '3'

			case '4':
			{
				
			break;
			}//end case '4'

			case '\n':
			{
				
			break;
			}

			default:
			{
				printf("That is not a valid option \n");
			}//end default

		}//end switch

	printf("\n");

	}//end do
	while(choice!='4');

}//end main
