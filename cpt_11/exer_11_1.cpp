#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <list>

using namespace std;

int main()
{
#ifdef DB 
	//exercise 11.1
	int data;
	int num = 0;
	vector<int>	 ivec;
	cout << "please input integer" << endl;
	while (cin >> data) 
		ivec.push_back(data);

	num = count(ivec.begin(), ivec.end(), 13);	
	cout << "the value 13 occurs " << num << " times" << endl;
		
#endif

#ifdef DUB 
	list<string> s_list;
	string data;
	int num = 0;
	cout << "please input string" << endl;
	while (cin >> data) 
		s_list.push_back(data);

	num = count(s_list.begin(), s_list.end(), "hi");	
	cout << "the string occurs " << num << " times" << endl;
#endif

	return 0;
}
