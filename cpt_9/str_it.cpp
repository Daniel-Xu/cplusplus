#include <string>
#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
#if 0
	//exercise 9.34
	//This code just suits for single word
	string data;

	cout << "please input string data" << endl;
	cin >> data;

	string::iterator s_it = data.begin();
	while (s_it != data.end()) {
		if (islower(*s_it))
			*s_it = toupper(*s_it);

		++s_it;
	}

	cout << "changed data is: " << data << endl;
#endif

#if 1
	//exercise 9.35
	string data("Hello world! I Am comingE!");
	string::iterator s_it = data.begin();
	cout << "source data is: " << data << endl;

	while (s_it != data.end())
		if (isupper(*s_it))
			s_it = data.erase(s_it);
		else
			++s_it;

	cout << "changed data is: " << data << endl;

#endif

#if 0 
	//exercise 9.36
	string data;
	vector<char> cvec;

	cout << "please input charactor..." << endl;
	while (cin >> data)
		cvec.push_back(data);

	string data(cvec.begin(), cvec,end());
#endif

	return 0;
}
