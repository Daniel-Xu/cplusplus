#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef multimap<string, string>::iterator M_it;
typedef multimap<string, string>::size_type sz_type;

int main()
{
#if 0 
	//exercise 10.26
	multimap<string, string> list;
	string author, book;
	do {
		cout << "please input author name" << endl;
		cin >> author;
		if (!cin)
			break;
		
		cout << "please add book for the author" << endl;
		while (cin >> book)
			list.insert(make_pair(author, book));
		cin.clear();
	} while (cin);
	
	cin.clear();

	cout << "please input author you wanna search" << endl;
	while (cin >> author) {
		//sz_type cnt = list.count(author);
		M_it it = list.find(author);
		if (it != list.end()) {		
			list.erase(author);
			cout << "deleted! please input next name!" << endl;
		}
		else 
			cout << "There's no author in the list, please input again!" << endl;
	}

	//output
	cout << "information" << endl;
	for (M_it it = list.begin(); it != list.end(); ++it) {
		cout << it->first << "\t\t"	<< it->second << endl;
	}
#endif

#if 0
	//exercise 10.27
	multimap<string, string> list;
	string author, book;
	do {
		cout << "please input author name" << endl;
		cin >> author;
		if (!cin)
			break;
		
		cout << "please add book for the author" << endl;
		while (cin >> book)
			list.insert(make_pair(author, book));
		cin.clear();
	} while (cin);
	
	cin.clear();

	cout << "please input author you wanna search" << endl;
	while (cin >> author) {
		//sz_type cnt = list.count(author);
		pair<M_it, M_it> range = list.equal_range(author);
		if (range.first != range.second) {		
			list.erase(author);
			cout << "deleted! please input next name!" << endl;
		}
		else 
			cout << "There's no author in the list, please input again!" << endl;
	}

	//output
	cout << "information" << endl;
	for (M_it it = list.begin(); it != list.end(); ++it) {
		cout << it->first << "\t\t"	<< it->second << endl;
	}
#endif

#if 1
	//exer10.28
	multimap<string, string> list;
	string author, book;
	do {
		cout << "please input author name" << endl;
		cin >> author;
		if (!cin)
			break;
		
		cout << "please add book for the author" << endl;
		while (cin >> book)
			list.insert(make_pair(author, book));
		cin.clear();
	} while (cin);
	
	cin.clear();

	//output
	M_it m_it = list.begin();
	string cur_athor, pr_athor;
	do {
		cur_athor = m_it->first;
		if (cur_athor[0] != pr_athor[0])
			cout << "Author names beginning with " << cur_athor[0] << endl;

		pair<M_it, M_it> range = list.equal_range(cur_athor);
		cout << cur_athor; 
		while (range.first != range.second)	{
			cout << ",\t" << range.first->second;
			++range.first;
		}
		cout << endl;
		m_it = range.second;;
		pr_athor = cur_athor;
										
	} while (m_it != list.end());

#endif
	return 0;
}
