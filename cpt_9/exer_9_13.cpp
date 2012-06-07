#include <iostream>
#include <vector>

using namespace std;

typedef vector<int>::iterator it_t;

it_t &f_int(it_t &first, it_t &last, int data)
{
	while (first != last)
		if (*first == data)
			break;
		else
			++first;

	return first;
}

int main()
{
	int data;
	vector<int> ivec;

	cout << "vector init" << endl;
	while (cin >> data)
		ivec.push_back(data);

	it_t first = ivec.begin();
	it_t last = ivec.end();
	
	cin.clear();
	cout << "please input the number you want to find..." << endl;
	cin >> data;

	it_t cur = f_int(first, last, data);
	if (cur != last)
		cout << "find it" << endl;
	else 
		cout << "not yet" << endl;

	return 0;
}
