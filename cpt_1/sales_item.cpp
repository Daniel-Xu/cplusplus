#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() 
{
	Sales_item item1;
	Sales_item item2;
	Sales_item book;
	Sales_item total;

#if 0
	
	//exercise 1.21
	cin >> item1;	
	cout << item1 << endl;

	//exercise 1.22
	cin >> item1 >> item2;
	cout << item1 + item2 << endl;

	// exercise 1.23
	cout << "Ener data information" << endl;

	if (cin >> total) {	
		while (cin >> book) {
			if (total.same_isbn(book))
				total += book;	
			else {
				cerr << "Different ISBN..."	<< endl;
				break;	
			}
		}

	}	
	else {
		cerr << "Err inputing..." << endl;
		
		return -1;
	}
	
	//print final information
	cout << "ISBN " << "sold number " 
		 << "revenue "
		 << "averge price" << endl;
	cout << total << endl;

#endif

	//exercise 1.24
	/*This code has a bug
	 *It can't count the 
	 *number of one kind 
	 *of book for all the
	 *time, only once 
	 */
	
	if (cin >> total ) {
		while (cin >> book) {
			if (total.same_isbn(book))	
				total += book;
			else {
				cout << "ISBN " << "sold number " 
					 << "revenue "
					 << "averge price" << endl;
				cout << total << endl;

				total = book;
			}
		}	
		//when errs occur or stop	
		cerr << "Err book  data information..." << endl;
		return -1;
	}
	else {
		cerr << "Err total data information..." << endl;
		return -1;
	
	}
	
	return 0;
}
