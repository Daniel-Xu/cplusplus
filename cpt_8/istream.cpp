#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>

using namespace std;

//exercise 8.3
istream &func(istream &in)
{
	string data;

	while (in >> data, !in.eof()) {
		if (in.bad())
			throw runtime_error("IO stream corrupted");
		if (in.fail()) {
			cerr << "bad data, try again" << endl;
			in.clear();
			in.ignore(200);
			continue;
		}
		
		cout << data << endl;;
	}

	//in.setstate(istream::eofbit);
	//in.setstate(istream::failbit);
	in.clear();

	return in;
}

int main()
{

	string i ;
	ifstream infile("in");
	func(infile);

	return 0;
}
