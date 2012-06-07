#include <iostream>

using namespace std;

int factorial(int val)
{
	int res = 1;

	while(val) {
		res *= val;			
		val--;
	}

	return res;
}

int main()
{

	cout << factorial(6) << endl;


	return 0;
}
