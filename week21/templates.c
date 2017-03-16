//just some struct templates. this code is uncompilable

struct card
{
	int num;	//a value between 1 and 13. 1 is ace. 11 is jack. 12 is queen. 13 is king. other for joker
	int suit;	//a value between 1 and 4. 1 is spades, two is hearts, 3 is clubs and 4 is diamonds. if above is joker, %2 this value. if 0 then red joker, else black joker
};

struct stock_rec
{
	int id;			//stock id
	char discription[21];	//20 character stock discription
	int instock;		//number of items in stock
};

struct lib_book
{
	char isbn[14];	//isbn with extra slot for null character
	char name[31];	//name of book
	char author[26];//name of author
	float price;	//what the book costs to replace
};

struct customer_rec
{
	unsigned int id_no;	//the customers unique id on the system
	char name[26];		//the customers name
	char address[46];	//the customers address
	double balance;		//customers outstanding bill. negitive if company is in customers debt

};

struct transaction
{
	char type;	//the type of transaction
	short date[3];	//the date of the transaction (dd/mm/yy)
	float cost;	//the amount of money that changed hands

};
