/*
Program requirements: You are required to develop a program that will perform
security authorisation based on access codes. The access codes are 4 single-digit
integer numbers between 0-9. The program should allow a user to enter a code,
encrypt the number and compare it to an authorised access code.
The program should also allow the user to decrypt an encrypted code.
For a more verbose list of requirements, see README.md.

Program Author: Liam McCormick

Dates:
22-02-17 - started project
23-02-17

OS: Gentoo
Kernel: Linux versions 4.10, (I update regularly)
Compiler: My home computer uses GCC 5.4.0
	  My laptop uses GCC 4.9.4

*/

#include <stdio.h>
#define NUMNO 4			//The number of numbers in the secret passcode

//prototypes
int get_code(int*);		//writes user input code into the passed intager array
				//the return value is non zero if invalid input is detected

void encrypt_code(int*);	//performs the encryption algorithm specified in README.md
void decrypt_code(int*);	//performs the encryption algorithm specified in README.md in reverse

int verify_code(int*);		//check if encrypted code is correct. return value of 0 if correct.

void records(int);		//print number of times the code was entered sucessfully and incorrectly
				//if argument is 1, increment sucesses
				//if argument is 2, increment errors
				//if argument is 0, print the values of sucesses and errors
				//sucesses and errors are both static variables.

void overflow();		//prevent invalid input

//global variables
const int secret_code[NUMNO]={4,5,3,2};	//The encrypted form of 1234, the default passcode

int main()
{
	//variables
	int user_code[NUMNO];		//the code the user will enter
	char menu_choice='1';	//will hold the users decision of which menuitem they wish to execute
	int menu_mode=0;	//will effect what menu selection options are available

	while(menu_choice != '0')	//display a menu with options the user is allowed to pick
	{
		printf("Enter a number to select a function\n");
		printf("\n0: Exit program");
		printf("\n1: Enter Code");
		printf("\n2: View Log");

		if(menu_mode==1)	//if a code has been entered but not encrypted
		{
			printf("\n3: Encrypt code");

		}//end if

		if(menu_mode==2)	//if a code has been entered and encrypted
		{
			printf("\n3: Decrypt code");

		}//end if

		//take user input
		printf("\n\n");
		scanf("%c",&menu_choice);

		switch(menu_choice)
		{
			case '0':	//exit program
			{

				break;

			}//end exit program

			case '1':	//enter the code
			{
				if(get_code(user_code)==0)	//this if statement executes the code for recieving user input
				{
					menu_mode=1;	//add encrypt code option to the menu if get_code exited gracefully

				}//end if
				break;
			}//end enter code

			case '2':	//print the log
			{

				break;
			}//end log

			case '3':	//encrypt or decrypt the code
			{

				break;
			}//end encrypt/decrypt

			default:	//print an error
			{
				printf("Invalid input\n");

			}//end error message

		}//end switch

		//if multiple characters were entered, ensure only the first one counts as input
		overflow();

		//4 lines for neatness
		printf("\n\n\n\n");

	}//end while

}//end main

//function to get user input
int get_code(int *user_input)
{
	//variables
	register int i;		//for the loop
	int errors=0;		//number of incorrect characters
	char input[NUMNO];	//if you enter an invalid character to an intager in a while loop, it becomes perpetual
				//so I will take in user input as characters and convert them to intagers

	scanf("%4s",input);	//take in a 4 character string

	//verify as valid
	for(i=0; i<NUMNO; i++)
	{
		if( *(input+i) < '0' || *(input+i) > '9' )
		{
			errors++;

		}//end if

	}//end for

	//convert the string to intagers and write to passed array
	for(i=0; i<NUMNO; i++)
	{
		if(errors=0)	
		{
			*(user_input+i) = *(input+i) - 48;

		}//end if

	}//end for

	return errors;

}//end get_code

//a funtion that will print number of times the code was entered sucessfully
//static ints hold the number of times each happened
void records(int mode)
{
	static int sucesses=0;	//number of times a correct code was sucessfully entered
	static int errors=0;	//number of times an incorrect code was entered

	if(mode==0)
	{
		printf("The code has been entered sucessfully %d times.\nThe code has been entered incorrectly %d times.\n",sucesses,errors);

	}//end if

	if(mode==1)
	{
		sucesses++;

	}//end if

	if(mode==2)
	{
		errors++;

	}//end if

}//end records

//make sure too many characters were not entered
void overflow()
{
	char a='\0';	//hold a character to check if input is done

	do	//suck input to the ether until a newline is detected
	{
		scanf("%c",&a);

	}//end while
	while(a != '\n');

}//end overflow
