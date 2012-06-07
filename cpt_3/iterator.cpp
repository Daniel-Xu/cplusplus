#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{

#if 1
	//exercise 3.18 and 3.19
	vector<int> data(10, 4);
	vector<int>::iterator iter;

	for (iter = data.begin(); iter != data.end(); iter++)
		*iter *= 2;
	
	for (iter = data.begin(); iter != data.end(); iter++)
		cout << *iter << endl;
#endif 



	return 0;
}
