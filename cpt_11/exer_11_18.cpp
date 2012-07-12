#include <iostream>
#include <iterator>
#include <fstream>

using namespace std;

int main()
{
	cout << "please input num" << endl;
	istream_iterator<int> in_it(cin), eof;

	//ofstream out1("odd.txt", ofstream::app);	
	//ofstream out2("even.txt", ofstream::app);
	ofstream out1("odd.txt");	
	ofstream out2("even.txt");
	if (!out1 || !out2) {
		cout << "open file error occurs" << endl;
		return -1;
	}

	ostream_iterator<int> odd(out1, " ");
	ostream_iterator<int> even(out2, "\n");

	while (in_it != eof) {
		if (*in_it % 2)	
			//out1 << *in_it;
			*odd++ = *in_it++;
		else
			//out2 << *in_it;
			*even++ = *in_it++;
	}

	out1.close();
	out2.close();

	return 0;
}
