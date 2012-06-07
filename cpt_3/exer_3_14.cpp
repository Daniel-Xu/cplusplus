#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
	string str;	
	vector<string> ivec;

	
	cout << "please input string data" << endl;

	while (cin >> str)
		ivec.push_back(str);
	if (ivec.size() == 0) {
		cerr << "no data..." << endl;
		return -1;
	}

	for (vector<string>::size_type i = 0; i != ivec.size(); ++i) {
		if (i%8 == 0)
			cout << endl;
		for (vector<string>::size_type j = 0; j!= ivec[i].size(); j++)
			if (islower(ivec[i][j]))
				ivec[i][j] = toupper(ivec[i][j]);

		cout << ivec[i] << " ";
	}
			
	cout << endl;
		
	return 0;
}
