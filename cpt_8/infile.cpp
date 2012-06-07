#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#if 0
//exercise 8.9
ifstream &infile_line(ifstream &in)
{
	vector<string> vs;
	vector<string>::iterator it = vs.begin();
	string data;
	
#if 0
	getline(in, data);
	cout << data << endl;
#endif

	while (getline(in, data)) {
		vs.push_back(data);
	}

	in.close();	

	for (it = vs.begin(); it != vs.end(); ++it) {
		cout << *it << endl;	
	}
	
	return in;
}
#endif

//exercise 8.10
ifstream &infile_line(ifstream &in)
{
	vector<string> vs;
	vector<string>::iterator it = vs.begin();
	string data;
	

	while (in >> data) {
		vs.push_back(data);
	}
	
	in.close();

	for (it = vs.begin(); it != vs.end(); ++it) {
		cout << *it << endl;	
	}
	
	return in;
}

ofstream &open_file(ofstream &fout, const string &file)
{
	fout.close();
	fout.clear();

	fout.open(file.c_str(), ofstream::in | ofstream::out);
	
	return fout;
}

int main()
{
#if 0
	//create obj
	//ifstream in_file("in");
	ofstream obj;
	open_file(obj, "in");
	
	obj << "I'm comfused about the status of my feelings"
		<< endl;

	obj.close();
#endif

#if 0
	if (!in_file) {
		cerr << "open file failure"	<< endl;
		return -1;
	}
#endif

	//infile_line(in_file);

	return 0;
}



