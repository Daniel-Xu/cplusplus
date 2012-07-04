#include <map>
#include <set>
#include <iostream>
#include <string>

using namespace std;


void black_list(ifstream &b_file, ifstream &c_file)
{
	//black file
	string b_word;	
	set<string> b_list;
	while (r_file >> b_word) {
		b_list.insert(b_word);
	}

	//file need to deal with
	set<string> f_list;
	string c_word;
	while (c_file >> c_word) {
		if (!b_list.count(c_word)) {
			//delete
			f_list.insert(c_word.erase(c_word.size()-1, 1));
		}
		else {
			//don't change	
			f_list.insert(c_word);			
		}
	}
}
 
