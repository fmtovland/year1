/*
a program that reads a sentence from the keyboard and uses separate functions
to do the following:
a) Determines the frequency of the word “is” in the sentence (ensure the string
contains at least 1 occurrence of this word).
b) Calculates the number of characters in the sentence.
c) Appends the sentence to the end of the following string: “My sentence is : “


Author: Liam McCormick
Date: 11-03-17
OS: Gentoo
Kernel: Linux 4.9.12
Compiler: GCC 5.4
*/

#include <stdio.h>
#include <string.h>
#include <lminput.h>
#define SENLEN 30	//max characters in a sentence
#define ADDON 15	//number of extra characters in mysentence

//prototyeps
int iscount(char*);		//count occurences of is
int charcount(char*);		//count the characters in a sentence
void strapon(char*,char*);	//adds my sentence is before a string

int main()
{
	char sentence[SENLEN+1];	//user inputted sentence
	int isno=0;			//number of occurences of is in a sentence
	int charno=0;			//number of characters in the sentence
	char mysentence[SENLEN+ADDON+1];//user inputted sentence with "my sentence is" strapped on to the prefix

	//allow user to enter sentence
	printf("Enter a sentence\n");
	wordget(sentence,SENLEN);

	//count ises
	isno=iscount(sentence);

	//count characters
	charno=charcount(sentence);

	//strap on my sentence is
	strapon(sentence,mysentence);

	//print results
	printf("%s\n",mysentence);
	printf("Is occurs %d times\n",isno);
	printf("There are %d characters\n",charno);

	return 0;

}//end main

int iscount(char *sent)
{
	register int i;
	int count=0;

	for(i=0; i<SENLEN; i++)
	{
		if( *(sent+i)=='i' && *(sent+i+1)=='s' && *(sent+i+2)==' ' )
		count++;
	}

	return count;

}//end iscount

int charcount(char *sent)
{
	int count=0;

	count=strlen(sent);
	return count;

}//end charcount

void strapon(char *in, char *out)
{
	strcpy(out,"My sentence is: ");
	strcat(out,in);
}//end strapon
