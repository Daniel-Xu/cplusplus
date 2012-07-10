#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>

using namespace std;

int main()
{
	//notice
	/* this code has a bug
	 * when you input 1 2 2 1 3 4
	 * it outputs 4 3 1 2 1
	 * 1 hasn't been erase
	 */
	list<int> ilist;
	int data;
	cout << "input data" <<endl;

	while (cin >> data)
		ilist.push_front(data);

	vector<int> ivec;
	unique_copy(ilist.begin(), ilist.end(), back_inserter(ivec));

	for (vector<int>::iterator it = ivec.begin(); it != ivec.end(); ++it)
		cout << *it << "\t";

	cout << endl;

	return 0;
}

