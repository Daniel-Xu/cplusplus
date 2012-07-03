#include <map>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
	string f_name;
	string l_name;
	map< string, vector<string> > family;

	for (int i = 0; i < 2; ++i) {
		cout << "pleae input first name " << endl;
		cin >> f_name;
		cout << "please input last name " << endl;
		vector<string> nvec;

		while (cin >> l_name) {
			nvec.push_back(l_name);	
		}
		
		pair< map< string, vector<string> >::iterator, bool > ret = family.insert(make_pair(f_name, nvec));
		if (!ret.second) {
			cout << "repeated firstname, and the information of the first name has not been changed" << endl;
		}

		cin.clear();
	}

	while (1) {
		string search;
		cout << "please input the firt name you want to know" << endl;
		cin >> search;

		map< string, vector<string> >::iterator f_it;
		vector<string>::iterator v_it; 

		f_it = family.find(search); 
		if (f_it != family.end()) {
			v_it = (f_it->second).begin();
			cout << "\tthe last name is: " << endl;
			while (v_it != (f_it->second).end()) {
				cout << "\t" << *v_it++ << endl;	
			}
		}
		else 
			cout << "can not find this first name!" << endl;
		cin.clear();
	}
	return 0;
}
