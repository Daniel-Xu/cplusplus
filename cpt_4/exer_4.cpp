#include <iostream>
#include <vector>
#include <iterator>


using namespace std;

int main()
{
#if 0
	//exercise 4.7
	vector<int> v1;
	vector<int> v2;

	int data;

	cout << "please input data..." << endl;
	while (cin >> data) {
		v1.push_back(data);	
	}

	vector<int>::size_type i = 0;

	while (i < v1.size()) {
		v2.push_back(v1[i]);	
		i++;
	}

	cout << "the v2 information" << endl;
#endif

#if 0 
	for (i = 0; i < v1.size(); i++)
		cout << v2[i] << endl;

#endif

#if 0 
	//exercise 4.8
	vector<int>::iterator iter1 = v1.begin();
	vector<int>::iterator iter2 = v2.begin();

	if (v1.size() != v2.size()) {
		cout << "not equal lenth" << endl;
		return -1;
	}
	else {
		for (iter1 = v1.begin(), iter2 = v2.begin(); iter1 != v1.end(); iter1++, iter2++)						
			if (*iter1 != *iter2) {
				cout << " not equal... " << endl;
				return -1;
			}	
	}

	cout << "equal..." << endl;
#endif

#if 1
	//exercise 4.9
	int array[10];

	for (int i = 0; i < 10; i++) {
		array[i] = i+1;
		cout << array[i] << endl;
	}
		


#endif
	return 0;
}



