#include <iostream>

using namespace std;

int expon(int base, int exp)
{
	int res = 1;
	
	while (exp--)
	{
		res *= base;
	}

	return res;
}

int absolute(int i)
{
	return i > 0 ? i:-i;
}


int main ()
{

#if 0
	cout << "the result of 3 exp 2 is: "
		 << expon(3, 2)
		 << endl;

	int i;
	cout << "please input i" << endl;
	cin >> i;
	cout << "absolution of " << i << " is: " 
		 << absolute(i) << endl;

#endif 
	return 0;
}






