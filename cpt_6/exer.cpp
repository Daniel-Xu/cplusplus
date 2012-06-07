#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
#if 0
	//exercise 6.12
	vector<string> ivec;
	vector<string>::iterator iter; 
	string data;
	string c_data;
	int i = 1;
	int max = 0;

	//input data	
	while (cin >> data)
		ivec.push_back(data);
	iter = ivec.begin();

#if 1
	while (iter != ivec.end()-1) {

		if (*iter == *(iter+1) && iter != ivec.end()-2) {
			i++;
		}
		else {
			if (iter == ivec.end()-2 )
				i++;
			if (max < i ) {
				max = i;		
				c_data = *iter;
			}
			i = 1;
		}

		iter++;	
	}
	cout << "the data content is " << c_data 
		 << "\n" << "the num is " << max << endl;
#endif
#endif

#if 0 
	//exercise 6.16
	vector<int> ivec1;
	vector<int> ivec2;
	int data;

	//input ivec1
	cout << "please input data" << endl;
	while (cin >> data)
		ivec1.push_back(data);

	cout << endl;	
	cin.clear();

	//input ivec2
	cout << "please input data" << endl;
	while (cin >> data)
		ivec2.push_back(data);

	//compare
	
	for (vector<int>::size_type index = 0; 
		index < (ivec1.size()>ivec2.size()?ivec2.size():ivec1.size()); ++index)
		if (ivec1[index] != ivec2[index]) {
			cout << "It's not true..."	<< endl;
			return -1;	
		}
			
	cout << "It's  true..."	<< endl;

#endif

#if 0 
	string str1;
	string str2;
	string rep;
	
	do {
		cout << "please input two string data" << endl;

		cin >> str1 >> str2;
		
		cout << "the small one is:" << endl;
		if (str1 > str2)
			cout << str2 << endl;
		else 
			cout << str1 << endl;

		cout << "again or exit, please input yes or no" << endl;
		cin >> rep;
	
	} while (!rep.empty() && rep[0] != 'n');

#endif 

#if 0 
	//exercise 6.20
	
	string data;
	string predata;
	string c_data;	//current data

	cout << "please input string data" << endl;
	cin >> data;
	predata = data;

	//loop
	while (1) {
		cout << "please input next data" << endl;
		cin >> c_data;

		if (c_data == predata) {
			cout << "the " << c_data << " is the same one" << endl;
			break;
		}
		else {
			predata = c_data;
			cout << "nothing is same" << endl;
		}
	}
	
#endif 

#if 1 
	//exercise 6.20.2
	
	string predata;
	string c_data;	//current data

	cout << "please input string data" << endl;

	//loop
	while (cin >> c_data) {

		if (c_data == predata && isupper(c_data[0])) {
			cout << "the " << c_data << " is the same one" << endl;
			break;
		}
		else {
			predata = c_data;
			c_data = "eof is setted";
		}

		cout << "please input next word" << endl;
	}
	
	if (c_data != predata)
		cout << "there's no repeated word" << endl;
	
#endif 
	return 0;
}
