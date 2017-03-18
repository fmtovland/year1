/*
Program Discription: Input a character and decide if it is a vowel.
Author: Liam Mc Cormick
Date: 10-10-16
OS: Linux mint 17.2 (kernel version 3.16.0-48)
*/

#include <stdio.h>

int main()
{
	char character;
	printf("Enter a letter \n");
	scanf("%c",&character);
	
	switch(character)
	{
		case('e'):
		case('a'):
		case('i'):
		case('o'):
		case('u'):
		case('A'):
		case('E'):
		case('I'):
		case('O'):
		case('U'):
		{
			printf("This is a Vowel \n");
			break;
		}//end case
		
		default:
		{
			printf("This is not a Vowel \n");
			break;
		}//end default
		
	}//end switch
		
}//end main
