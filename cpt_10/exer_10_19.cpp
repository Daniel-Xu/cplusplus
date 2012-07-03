#include <map>
#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main() 
{
	string f_name;
	string l_name;
	string data;
	map< string, pair<string, string> > family;

	for (int i = 0; i < 2; ++i) {
		cout << "pleae input first name " << endl;
		cin >> f_name;
		cout << "please input name and birthday " << endl;
		pair<string, string> nvec;

		while (cin >> l_name >> data) {
			nvec = make_pair(l_name, data);	
		}
		
		pair< map< string, pair<string, string> >::iterator, bool > ret = family.insert(make_pair(f_name, nvec));
		if (!ret.second) {
			cout << "repeated firstname, and the information of the first name has not been changed" << endl;
		}

		cin.clear();
	}

	while (1) {
		string search;
		cout << "please input the firt name you want to know" << endl;
		cin >> search;

		map< string, pair<string, string> >::iterator f_it;

		f_it = family.find(search); 
		if (f_it != family.end()) {
			cout << "\tthe name is: \t" << (f_it->second).first << endl;
			cout << "\tthe birthday is: \t" << (f_it->second).second << endl;
		}
		else 
			cout << "can not find this first name!" << endl;
		cin.clear();
	}
	return 0;
}
