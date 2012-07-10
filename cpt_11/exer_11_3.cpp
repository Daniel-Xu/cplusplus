#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec;
	int data;
	cout << "input data" << endl;
	
	while (cin >> data) {
		ivec.push_back(data);		
	}
	
	cout << "The sum is: "
		 << accumulate(ivec.begin(), ivec.end(), 0) << endl;

	return 0;
}
