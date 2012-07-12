#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<int> ivec(array, array+9);

	list<int> ilist;
	vector<int>::reverse_iterator r_it;
		
	for (r_it = ivec.rbegin()+2; r_it != ivec.rend()-2; ++r_it)
		ilist.push_back(*r_it);

	//print
	list<int>::iterator l_it = ilist.begin();
	while (l_it != ilist.end())
		cout << *l_it++ << endl;



	return 0;
}
