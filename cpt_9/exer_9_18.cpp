#include <iostream>
#include <list>
#include <deque>

using namespace std;
typedef list<int>::iterator ilist_t;
typedef deque<int>::iterator ique_t;


int main()
{
	list<int> list;
	deque<int> odd;
	deque<int> even;
	int data;

	cout << "init ilist" << endl;
	while (cin >> data)
		list.push_back(data);

	ilist_t first = list.begin();
	ilist_t last = list.end();

	while (first != last) {
		if (*first % 2)	
			odd.push_back(*first);
		else
			even.push_back(*first);
	
		++first;
	}

	//print even
	cout << "even data" << endl;
	ique_t e_first = even.begin();
	ique_t e_last = even.end();

	while (e_first != e_last)
		cout << *e_first++ << endl;
	
	//print odd
	cout << "odd data" << endl;
	ique_t o_first = odd.begin();
	ique_t o_last = odd.end();

	while (o_first != o_last)
		cout << *o_first++ << endl;

	return 0;
}
