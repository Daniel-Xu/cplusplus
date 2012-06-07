#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

int main()
{
#if 0
	//exercise 4.28
	vector<int> ivec;
	int data;

	cout << "please input data..." << endl;

	while (cin >> data) 
		ivec.push_back(data);	

	int *p = new int[ivec.size()];	
	
	vector<int>::size_type i = 0;

	while (i < ivec.size()) {
		p[i] = ivec[i];
		i++;
	}	

	for (i = 0; i < ivec.size(); i++) 
		cout << "the " << i+1 << "th data is: "
			 << p[i] << endl;

	delete [] p;
#endif
	
#if 1
	//exercise 4.30

	//c style string
	char *str1 = "hello";
	char *str2 = "world";
	int n = 0;

	n = strlen(str1) + strlen(str2) + 1;
	char *p = new char[n];
	
	strcpy(p, str1);
	strcat(p, str2);

	cout << "c style string is: " << p << endl;

	delete [] p;

	//c++ style string
	string str3("hello");
	string str4("world");

	string str5;

	str5 = str3 + str4;

	cout << "c++ style string is: " << str5 << endl;

#endif
	return 0;
}
