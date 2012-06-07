#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char **argv)
{
	//exercise 7.15
	if (argc != 3) {
		cout << "the para is wrong..."
			 << endl;
		return -1;
	}

	int sum;	

	sum = atoi(argv[2]) +  atoi(argv[1]);
	cout << "the sum is: " << sum << endl;

	return 0;
}
