#include <iostream>

using namespace std;

//exercise 2.11
int main() 
{
	int i;
	int base, exp;	
	int res = 1;
	
	cout << "pleae input base and exponent" << endl;
	cin >> base >> exp;


	for (i = 0; i < exp; i++) {
		res *= base;
	}

	cout << "The result is: " << res << endl;
	return 0;
}
