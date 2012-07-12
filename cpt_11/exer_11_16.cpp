#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <fstream>


using namespace std;

int main()
{
#if 0
	//test for cin
	ostream_iterator<string> out_it(cout, "\n");

	cout << "please input string " << endl;
	istream_iterator<string> in_it(cin), eof;

	copy(in_it, eof, out_it);
	cout << endl;
#endif

	//code for file
	string name;
	cout << "please input filename" << endl;
	cin >> name;
	ifstream infile(name.c_str());
	if (!infile) {
		cout << "open error!" << endl;
		return -1;
	}

	ostream_iterator<string> out_it(cout, "\n");
	istream_iterator<string> in_it(infile), eof;

	copy(in_it, eof, out_it);
	infile.close();

	return 0;
}
