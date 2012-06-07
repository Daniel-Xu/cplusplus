#include <iostream>
#include <string>
#include "My_Sale_item.h"

using namespace std;

ostream &My_Sale_item::output(ostream &out) const
{
	cout << "The result is\n"
		 << "isbn"
		 << "\t"
		 << "sold num"
		 << "\t"
		 << "total revenue" << "\t"
		 << "average price"
		 << endl;

	out << isbn << "\t\t"
		<< units_sold << "\t\t"
		<< revenue  << "\t\t"
		<< avg_price()
		<< endl;

	return out;
}

istream &My_Sale_item::input(istream &in)
{
	double price;

	cout << "please input\n"
		 << "isbn"
		 << "\t"
		 << "sold num"
		 << "\t"
		 << "price"
		 << endl;

	in >> isbn >> units_sold >> price;

	if (in) {
		revenue = units_sold * price;	
	}
	else {
		units_sold = 0;	
		revenue = 0.0;
	}

	return in;
}

My_Sale_item My_Sale_item::add(My_Sale_item &another)
{
	units_sold += another.units_sold;
	revenue +=  another.revenue;

	return *this;
}
//average
double My_Sale_item::avg_price() const
{
	if (units_sold)
		return revenue/units_sold;
	else 
		return 0;
}

int main() 
{
#if 0
	My_Sale_item item;

	cout << "please input\n"
		 << "isbn"
		 << "\t"
		 << "sold num"
		 << "\t"
		 << "price"
		 << endl;

	while (item.input(cin))
	{
		if (item.isbn == )
		item.output(cout);	
		cout << endl;

		cout << "please input\n"
			 << "isbn"
			 << "\t"
			 << "sold num"
			 << "\t"
			 << "price"
			 << endl;
	}
#endif

#if 1
	My_Sale_item another, total;

	if (total.input(cin)) {
	
		while (another.input(cin)) {
			if (another.name_isbn(total))	
				total.add(another);
			else {
				total.output(cout);	
				total = another;
			} 
		}

		total.output(cout);	
	}
	else {
		cout << "there is no data..." << endl;
	}
	
#endif

	return 0;
}

