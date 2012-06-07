#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
#if 0
	//exercise 3.24.1	
	bitset<32> bitdata(0x20212e);

	cout << "bitdata is: " << bitdata << endl;
#endif

#if 0
	//exercise 3.24.1	
	//exercise 3.24.2

	bitset<32> bitdata;

	unsigned long mask = 0x20212e;
	int i = 0;
	while (1) {
		if (mask == 0)
			break;

		if (mask & 0x01) 
			bitdata.set(i);
		mask = mask >> 1;	
		i++;
	}

	cout << "bitdata is: " << bitdata << endl;
#endif

#if 1 
	//exercise 3.24.3
	int x = 0, y = 1, z = 1;
	bitset<32> bitdata;

	while (z <= 21) {
		bitdata.set(z);		
		
		x = y;
		y = z;
		z = x + y;
	}

	cout << "bitdata is: " << bitdata << endl;

#endif


	return 0;
}
