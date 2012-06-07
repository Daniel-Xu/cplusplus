#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;
//typedef vector<string>::iterator it_t;
typedef list<string>::iterator it_t;

int main()
{
#if 0
	string data;		
	vector<string> ivec;

	cout << "vector init" << endl;
	while (cin >> data)
		ivec.push_back(data);

	it_t first = ivec.begin();
	it_t last = ivec.end();
	cout << "vector content" << endl;
	while (first != last)	
		cout << *first++ << endl;
#endif

	string data;		
	list<string> ivec;
	it_t cur = ivec.begin();

	cout << "vector init" << endl;
	while (cin >> data)
		ivec.push_back(data);

	it_t first = ivec.begin();
	it_t last = ivec.end();

	cout << "vector content" << endl;
	while (first != last)	
		cout << *first++ << endl;

	return 0;
}

