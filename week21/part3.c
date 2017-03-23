/*
Requirements:
given a template, write statments to assign, input and display a value to each member of stock_item

Author: Liam McCormick
Date: 23-03-17
OS: Gentoo
Kernel: linux 4.9.16
Compiler: GCC 4.9.4
*/
#include <stdio.h>
#include <string.h>
#include <lminput.h>
#define DESLEN 21	//number of characters that can be held in stock_record.description

struct stock_record
{
	int no;
	char description[DESLEN];
	float price;
	int qty;

};

//prototypes
void assign(struct stock_record*);
void getinput(struct stock_record*);
void display(struct stock_record);

int main()
{
	struct stock_record stock_item;

	//assign a value to each and display
	assign(&stock_item);
	display(stock_item);

	//allow user to input a stock record for each
	getinput(&stock_item);
	display(stock_item);

	return 0;
}

void assign(struct stock_record *item)
{
	(*item).no=1357975;
	strcpy((*item).description,"an old sock");
	(*item).price=2.50;
	(*item).qty=3;
}

void getinput(struct stock_record *item)
{
	printf("Enter value for item number: ");
	scanf("%d",&(*item).no);
	overflow();

	printf("Enter item description: ");
	wordget((*item).description,DESLEN-2);

	printf("Enter value for item price: ");
	scanf("%f",&(*item).price);
	overflow();

	printf("Enter value for item quantity: ");
	scanf("%d",&(*item).qty);
	overflow();
}

void display(struct stock_record record)
{
	printf("Item %d is %s costing %.2f.\nWe have %d in stock\n",record.no,record.description,record.price,record.qty);

}
