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

OS: Gentoo
Kernel: Linux versions 4.10, (I update regularly)
Compiler: My home computer uses GCC 5.4.0
	  My laptop uses GCC 4.9.4

*/

#include <stdio.h>
#define SECRETCODE 4523		//The encrypted form of 1234, the default passcode

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
