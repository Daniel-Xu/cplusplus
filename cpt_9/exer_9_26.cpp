#include <iostream>
#include <vector>
#include <list>

using namespace std;
typedef vector<int>::iterator ievc_t;
typedef list<int>::iterator ilist_t;


int main()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	vector<int> ivec;
	list<int> ilist;

	size_t size = sizeof(ia)/sizeof(ia[0]);
	size_t i = 0;
	cout << "size is " << size << endl;

	cout << "ia data is " << endl;
	while (i < size) {
		ivec.push_back(ia[i]);
		ilist.push_back(ia[i]);
		cout << ia[i] << "   ";
		i++;
	}
	cout << endl;

	ievc_t v_first = ivec.begin();
	ilist_t l_first = ilist.begin();
	
	//delete even num in vector
	while (v_first != ivec.end())
		if (*v_first % 2 == 0)
			v_first = ivec.erase(v_first);
		else 
			++v_first;

	//delete odd num in list
	while (l_first != ilist.end())
		if (*l_first % 2)
			l_first = ilist.erase(l_first);
		else
			++l_first;
	
	//print
	ievc_t v_first_p = ivec.begin();
	ilist_t l_first_p = ilist.begin();

	//ivec
	cout << "ivec info" << endl;
	while (v_first_p != ivec.end())
		cout << *v_first_p++ << endl;

	//list
	cout << "list info" << endl;
	while (l_first_p != ilist.end())
		cout << *l_first_p++ << endl;

	return 0;
}
