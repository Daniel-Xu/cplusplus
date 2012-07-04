#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	vector<string> w_vec;
	string name;
	cout << "please input book list you wanna read" << endl;
	while (cin >> name)
		w_vec.push_back(name);

	cin.clear();

	set<string> h_read;
	cout << "please input book list you have read" << endl;
	while (cin >> name)
		h_read.insert(name);
	
	vector<string>::iterator w_it = w_vec.begin();

	string will;
	while (w_it != w_vec.end()) {
		cout << "Do you wanna read this book? yes or no" << endl;
		cin >> will;	
		if (!will.compare("yes")) {
			h_read.insert(*w_it);	
		} 
		else {
			h_read.erase(*w_it);	
			cout << "you never read this book!" << endl;
		}
		w_it++;
	}

	//output
	set<string>::iterator s_it = h_read.begin();
	while (s_it != h_read.end()) {
		cout << "the books you have read are:" << endl
			 << "\t" << *s_it++ << "\t" ;	
	}
	cout << endl;

	return 0;
}
