#include <iostream>
#include <string>

using namespace std;

int main() 
{
#if 0
	string str1("hello world");
	string str2(str1);
	string str3(4, 'k');;

	cout << str1 << "\n"
		 << str2 << "\n"
		 << str3 << endl;


	string str4;
	string str5;

	cin >> str4 >> str5;
	cout << str4 << "\n" << str5 << endl;
	
#endif

#if 1
	string str6;

	while (cin >> str6)
		cout << str6 << endl;
#endif

#if 0
	string str7;

	while (getline(cin, str7))
		cout << str7 << endl;

#endif

	return 0;
}
