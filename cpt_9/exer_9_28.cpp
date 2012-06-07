#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> svec(4, "nihao");
	list<char*> slist(6, "hello world");

	//assign supports different type
	svec.assign(slist.begin(), slist.end());
	vector<string>::iterator it = svec.begin();
	
	while (it != svec.end())
		cout << *it++ << endl;
		
	return 0;
}
