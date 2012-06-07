#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

int main() 
{
	
#if 0 
	//exercise 4.32
	int array[10] = {1, 2, 3, 4, 5, 6 , 7, 8, 9, 10};
	vector<int> ivec(array, array+3);

	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
		cout << *iter << endl;

#endif

#if 0 
	//exercise 4.34
	string data;
	vector<string> ivec;
	

	cout << "please input data..." << endl;
	while (cin >> data)
		ivec.push_back(data);

	//assign value
	char **p = new char *[ivec.size()];
	
	//for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
	for (int i = 0; i < ivec.size(); ++i) {
		p[i] = new char[ivec[i].size()+1];
		strcpy(p[i], ivec[i].c_str());	

		cout << i+1 << "th " << " array data is: " << p[i] << endl;;

		delete [] p[i];
	}

	delete [] p;
	

#endif

#if 1
	//exercise 4.4.1
	int ia[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
	};

	int (*p)[4];

	for (p = ia; p < ia+3; p++)
		for (int *q = *p; q < *p+4; q++)
			cout << *q << endl; 

#endif

	return 0;
}
