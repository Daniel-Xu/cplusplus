#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	//exercise 5.18
	vector<string> ivec;
	string data;
	
	cout << "please input data..." << endl;
		
	while (cin >> data)
		ivec.push_back(data);

	for (vector<string>::size_type i = 0 ; i != ivec.size(); ++i)
		cout << ivec[i] << " lenth " << ivec[i].size() <<endl;

	

	return 0;
}
