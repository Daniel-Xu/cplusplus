#include <iostream>
#include <string>

using namespace std;

int main() 
{

#if 0 
	string str1;	
	
	if (str1[0] == '\0')
		cout << "null" << endl;
	else 
		cout << "empty is not equel to NULL" << endl;
#endif

#if 0
	//exercise 3.7
	string str1("hello world");
	string str2("allen iverson");

	if (str1 == str2)
		cout << "equal" << endl;
	else {
		if (str1 > str2)	
			cout << str1 << endl;
		else
			cout << str2 << endl;
	}
#endif

#if 0
	//exercise 3.7.2
	string str1("hello world");
	string str2("allen iverson");

	if (str1.size() == str2.size())
		cout << "equal" << endl;
	else {
		if (str1.size() > str2.size())	
			cout << str1 << endl;
		else
			cout << str2 << endl;
	}
#endif

#if 0	
	//exercise 3.8
	string str_res;
	string str_tmp;

	while (cin >> str_tmp)
		str_res += str_tmp;

	cout << str_res << endl;

#endif

#if 0	
	//exercise 3.8.2
	string str_res;
	string str_tmp;

	while (cin >> str_tmp)
		str_res = str_res + str_tmp + " ";

	cout << str_res << endl;

#endif

#if 0
	//exercise 3.10
	string str_in;
	string str_out;
	
	cout << "please input string with punctuation charactor..." << endl;
	getline(cin, str_in);

	for (string::size_type i = 0; i != str_in.size(); ++i)
		if (!ispunct(str_in[i])) 
			str_out += str_in[i];
		
	cout << str_out << endl;

#endif 

#if 1 
	//exercise 3.10.2
	string str_in;
	string::size_type j = 0;
	
	cout << "please input string with punctuation charactor..." << endl;
	getline(cin, str_in);

	for (string::size_type i = 0; i != str_in.size(); ++i)
		if (!ispunct(str_in[i])) 
			str_in[j++] = str_in[i];
	
	//this is another method to truncate string
	str_in.resize(j);
		
	cout << str_in << endl;

#endif 
	return 0;

}


