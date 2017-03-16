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

