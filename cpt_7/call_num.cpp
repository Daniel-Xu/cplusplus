#include <iostream>

using namespace std;

size_t call_num(void)
{
	static size_t num = 0;
	return num++;
}

int main()
{
	//exercise 7.28
	for (size_t i = 0; i != 10; ++i)
		cout << call_num() << endl;

	return 0;
}
