#include <vector>
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string data;
	vector<string> vs;
	istringstream s_data;

	ifstream in_file("in");
	while (getline(in_file, data)) {
		vs.push_back(data);
	}
	
#if 0 
	for (vector<string>::iterator it = vs.begin(); it != vs.end(); ++it) {
		cout << *it << endl;	
	}
#endif

	in_file.close();
	
	for (vector<string>::iterator it = vs.begin(); it != vs.end(); ++it) {
		s_data.str(*it);
		//cout << s_data.str() << endl;	

		while (s_data >> data)
			cout << data << endl;

		s_data.clear();
    }

	return 0;
}
