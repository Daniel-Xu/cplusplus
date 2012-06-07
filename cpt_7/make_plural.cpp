#include <iostream>

using namespace std;

string make_plural(size_t ctr, const string &word,
				   const string &end = "s");

string make_plural(size_t ctr, const string &word,
				   const string &end)
{
	return ctr == 1 ? word : word+end;
}

int main()
{
	cout << make_plural(2, "girl") << endl 
		 << make_plural(0, "success", "es") << endl
		 << make_plural(1, "failure") << endl
		 << make_plural(1, "success", "es")
		 << endl;

	return 0;
}
