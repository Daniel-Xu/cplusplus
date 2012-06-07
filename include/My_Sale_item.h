#ifndef MY_SALE_ITEM_H
#define MY_SALE_ITEM_H

#include <iostream>
#include <string>

using namespace std;

class My_Sale_item {
public:
	//default constructor
	My_Sale_item():units_sold(0), revenue(0.0) {}
	
	//output
  	ostream &output(ostream &out) const;

	//input
	istream &input(istream &in);
	
	//add
	My_Sale_item add(My_Sale_item &another);

	//same judge
	bool name_isbn(const My_Sale_item &rhs) const
	{
		return isbn == rhs.isbn;	
	}

	//average
	double avg_price(void) const;


private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};

#endif



