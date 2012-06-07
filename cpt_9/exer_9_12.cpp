#include <iostream>
#include <vector>

using namespace std;

typedef vector<int>::iterator it_t;

bool f_int(it_t &first, it_t &last, int data)
{
	while (first != last)
		if (*first == data)
			return true;
		else
			++first;

	return false;
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

	if (bool status = f_int(first, last, data))
		cout << "find it" << endl;
	else 
		cout << "not yet" << endl;

	return 0;
}
