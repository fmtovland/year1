/*Program Discription: Reads a single numeral from the keyboard and displays its value as a word
Author: Liam Mc Cormick
Date: 10-10-16
OS: Linux Mint 17.2 (kernel 3.16.0-38)
*/

#include <stdio.h>
int main()
{
	unsigned int number;
	number=0;
	printf("Enter a number between 0 and 9	\n");
	scanf("%ud",&number);
	
	switch(number)
	{
		case(0):
		{
			printf("zero \n");
			break;
		}
		
		case(1):
		{
			printf("one \n");
			break;
		}
		
		case(2):
		{
			printf("two \n");
			break;
		}
		
		case(3):
		{
			printf("three \n");
			break;
		}
		
		case(4):
		{
			printf("four \n");
			break;
		}
		
		case(5):
		{
			printf("five \n");
			break;
		}
		
		case(6):
		{
			printf("six \n");
			break;
		}
		
		case(7):
		{
			printf("seven \n");
			break;
		}
		
		case(8):
		{
			printf("eight \n");
			break;
		}
		
		case(9):
		{
			printf("nine \n");
			break;
		}
		
		default:
		{
			printf("That is not a single digit number! \n");
			break;
		}
	
	}//end switch

}//end main
