#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <ctime>

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

	//random num seed
	srand((unsigned int)time(NULL));
	cin.clear();	


	string will;
	string bookname;
	bool timeover = false;
	while (!w_vec.empty() && !timeover) {
		cout << "Do you wanna read a book? yes or no" << endl;
		cin >> will;	
		if (will[0] == 'y' || will[0] == 'Y') {
			int i = rand()%w_vec.size();
			bookname = w_vec[i];
			h_read.insert(bookname);	
			w_vec.erase(w_vec.begin()+i);
			cout << "the bookname is " << bookname << endl;

			cout << "whether you read it or not? yes or no" << endl;
			cin >> will;
			if (will[0] == 'n' || will[0] == 'N') {
				w_vec.push_back(bookname);
				h_read.erase(bookname);
			}
		} 

		cout << "time over? yes or no" << endl;
		cin >> will;
		if (will[0] == 'y' || will[0] == 'Y') {
			timeover = true;
		}
	}

	if (timeover) {
		//output
		set<string>::iterator s_it = h_read.begin();
		cout << "the books you have read are:" << endl;
		while (s_it != h_read.end()) {
			cout << "\t" << *s_it++ << endl;	
		}

		vector<string>::iterator w_it = w_vec.begin();
		cout << "the books you wanna read but never read are:" << endl;
		while (w_it != w_vec.end()) {
			cout << "\t" << *w_it++ << endl;
		}
	}
	else {
		cout << "you have read all of the books! Congratulations!" << endl;
	}

	return 0;
}
