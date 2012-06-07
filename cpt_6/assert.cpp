#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main ()
{
	string data;

	while (cin>>data && data != "exit")
	{}

	assert(cin);	
	cout << endl;
	
	cout << __FILE__ << "\n"
		 << __LINE__ << "\n"

		 << __DATE__ << "\n"

		 << __TIME__ << endl;

	cout << "assert output" << endl;

}
