#include <iostream> 
#include <map>

using namespace std;
typedef map<string, int> T_map;

int main()
{
#if 0
	string data;
	map<string, int> word_count;
	
	cout << "please input string" << endl;
	while (cin >> data) {
		++word_count[data];	
	}

	//clean cin
	cout << "please input string you wanna know:" << endl;
	cin.clear();
	
	while (cin >> data) {
		cout << "the " <<  data << " count is: " << word_count[data] << endl;
	}
#endif

#if 1
	//exercise 10.12
	string data;
	map<string, int> word_count;
	
	cout << "please input string" << endl;
	while (cin >> data) {
		pair<T_map::iterator, bool> ret = word_count.insert(make_pair(data, 1));
		if (!ret.second)
			++ret.first->second;
	}

	//clean cin
	cout << "please input string you wanna know:" << endl;
	cin.clear();
	
	while (cin >> data) {
		cout << "the " <<  data << " count is: " << word_count[data] << endl;
	}
#endif
	return 0;
}
