#include <iostream>
#include <bitset>
#include <stdexcept>

using namespace std;

int main ()
{
#if 0 
	//exercise 6.23
	bitset<40> data;
	data.set();	

	data.to_ulong();

	cout << "here is normal" << endl;

#endif

#if 1 
	//exercise 6.24
	bitset<40> data;
	data.set();	

	throw runtime_error("Test Throw");

	try {
		//data.to_ulong();
	}
	catch (overflow_error err) {
		cout << "the err info "
			 << err.what()
			 << endl;
	}
	catch (runtime_error err) {
		cout << "the err info "
			 << err.what()
			 << endl;
	}


	cout << "here is normal" << endl;


#endif

	return 0;
}
