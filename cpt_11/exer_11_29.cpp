#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

bool isShorter(const string &str1, const string &str2)
{
	return str1.size() < str2.size();	
}

bool GT4(const string &str)
{
	return str.size() >= 4; 
}

int main()
{
	//the combination of exercise 11.9 and 11.10
	//vector<string> words;
	list<string> slist;
	string data;

	cout << "input words" << endl;
	while (cin >> data) 
		slist.push_back(data);

	//sort(words.begin(), words.end());
	slist.sort();
	//vector<string>::iterator it_end = 
    //				unique(words.begin(), words.end());
	//words.erase(it_end, words.end());
	slist.unique();
	//stable_sort(words.begin(), words.end(), isShorter);
	slist.sort(isShorter);

	//count
	int cnt = count_if(slist.begin(), slist.end(), GT4);
	cout << "suitable words' num is: " << cnt << endl;

	/*
	vector<string>::iterator it = words.begin();
	while (1) {
		if (it == words.end())
			break;
		it = find_if(it, words.end(), GT4);	
		cout << *it << endl;
		it++;
	}
	*/

	return 0;
}
