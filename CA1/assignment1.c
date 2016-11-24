/*
Program Discription: Emulate the functions of an atm
Program Author: Liam Mc Cormick
OS: Gentoo 2.2 (linux kernel 4.4.6)


error code index:

1. bad main menu selection	(only used for the menu error variable)
2. pin entered is too long
3. pin entered is too short
4. invalid character in pin

*/

#include <stdio.h>
#define LENGTH 4

char input1[LENGTH];	//will hold the input to compare to pin
int error=0;    	//If this is ever a non zero value, there has been invalid input
			//It is always returned to zero once the error has been resolved

int main()
{
	char pin[LENGTH]={'1','2','3','4'};	//The variable to hold the pin code

	char choice='0';	//The variable controlling menu selections and the do while loop
	int menuerror=0;	//ensures no errors while selecting a sub menu
	int check;		//Used to count the number of correct elements in the pin

	char input2a[LENGTH];	//will be used for changing the pin code
	char input2b[LENGTH];

	int correct=0;		//stores the number of times the pin was entered correctly
	int incorrect=0;	//stores the number of times the pin was entered incorrectly

	int i;		//for for loops


	do
	{

		if(menuerror==0)
		{
			printf("Enter a number to make your selection \n \n");

			printf(" 1. Enter your PIN to verify it \n");
			printf(" 2. Change your PIN \n");
			printf(" 3. Display the number of times the pin has been \n    entered, both correctly and incorrectly \n");
			//This will print onto two lines. There are 4 spaces
			//between the new line \n and the word enter. This makes
			//it look neat
			printf(" 4. Exit \n\n");
		}//end if(menuerror=0)

		scanf("%c",&choice);	//make a menu selection
		menuerror=0;		//reset the error so the menu will be printed next time
		printf("\n");		//a neatness line

		switch(choice)
		{

			case '1':
			{
				printf("Enter your %d digit pin number now \n",LENGTH);
				input_code();	//retrieve input from the user

				check=0;
				for(i=0; i<LENGTH; i++)
				{
					if(input1[i]==pin[i])
					{
						check++;
					}//end if

				}//end for i=0...

				switch(error)
				{
					case 2:
					{
						printf("Error: Pin too long \n");
						error=0;
						break;
					}//end case error 2

					case 3:
					{
						printf("Error: Pin too short \n");
						error=0;
						break;
					}//end case error 3


					case 4:
					{
						printf("Error: Non numeric input detected \n");
						error=0;
						break;
					}//end case error 4

					default:
					{
						if(check==LENGTH)
						{
							printf("Correct \n");
							correct++;
						}//end else if error==0....

						else
						{
							printf("Incorrect \n");
							incorrect++;
						}//end else

					}//end error default

				}//end switch
				break;
			}//end case 1




			case '2':
			{
				printf("Enter your new pincode \n");
				input_code();

				switch(error)	//ensure the new pin is valid
				{
					case 2:
					{
						printf("Error: First pin too long \n");
						break;
					}//end case 2

					case 3:
					{
						printf("Error: First pin too short \n");
						break;
					}//end case 2

					case 4:
					{
						printf("Error: non numerical input in first pin \n");
						break;
					}//end case 2

					default:
					{
						for(i=0; i<LENGTH; i++)	//fill input2a with the contents of input1[]
						{
							input2a[i]=input1[i];
						}//end for
					}
				}//end switch(error)

				if(error!=0)	//return to main menu if pin1 invalid
				{
					error=0;
					break;
				}

				printf("Enter again to change your pin \n");
				input_code();

				switch(error)	//ensure the new pin is valid
				{
					case 2:
					{
						printf("Error: Second pin too long \n");
						break;
					}//end case 2

					case 3:
					{
						printf("Error: Second pin too short \n");
						break;
					}//end case 2

					case 4:
					{
						printf("Error: non numerical input in second pin \n");
						break;
					}//end case 2

					default:
					{
						for(i=0; i<LENGTH; i++)	//fill input2b with the contents of input1[]
						{
							input2b[i]=input1[i];
						}//end for
					}
				}//end switch(error)

				if(error!=0)	//return to main menu if pin2 invalid
				{
					error=0;
					break;
				}

				check=0;
				for(i=0; i<LENGTH; i++)	//check the two pins match
				{
					if(input2a[i]==input2b[i])
					{
						check++;
					}//end if input2a...

				}//end for check pins match

				if(check==LENGTH)	//change pin if values match
				{
					printf("Pin sucessfully changed \n");

					for(i=0; i<LENGTH; i++)
					{
						pin[i]=input2a[i];
					}//end for

				}//end if check=LENGTH

				else
				{
					printf("Error: Pins do not match \n");
				}//end else

				break;

			}//end case 2

			case '3':
			{
				printf("You have entered the correct code %d times \n",correct);
				printf("You have entered the wrong code %d times \n",incorrect);
				break;

			}//end case 3

			case '4':		//exit the program
			{
				printf("Have a nice day \n");
				break;
			}//end case 4

			default:
			{
				if(choice>32)	//if the user has not entered a blank space (or other difficult) character
				{
					printf("Error: Invalid option \n");
				}//end if 

				menuerror=1;

			}//end default


		}//end switch(choice)

	if(menuerror==0)//a neatness line
	{
	printf("\n \n");
	}

	}//end do while for main menu
	while(choice != '4');

	return 0;
}//end main

int input_code()
{
	char input;	//this will hold letters to verify before adding to input1[i]
	int i;		//a counter for loops

	i=0;
	scanf("%c",&input);

	do
	{

		if(input=='\n')	//do nothing (in case the first character detected is th return key entered on the previous menu)
		{
		}

		else if(input>'9' || input<'0')
		{
			error=4;
			i++;
		}

		else
		{
			input1[i]=input;
			i++;
		}//end if

		scanf("%c",&input);

	}
	while(input!='\n');

	if(i<LENGTH)	//if pin is too short
	{
		error=3;
	}//end if

	if(i>LENGTH)	//if pin is too long
	{
		error=2;
	}//end if

	return 0;

}//end input_code()
