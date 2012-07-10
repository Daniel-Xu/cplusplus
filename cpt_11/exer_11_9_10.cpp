#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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
	vector<string> words;
	string data;

	cout << "input words" << endl;
	while (cin >> data) 
		words.push_back(data);

	sort(words.begin(), words.end());
	vector<string>::iterator it_end = 
				unique(words.begin(), words.end());
	words.erase(it_end, words.end());
	stable_sort(words.begin(), words.end(), isShorter);

	//count
	int cnt = count_if(words.begin(), words.end(), GT4);
	cout << "suitable words' num is: " << cnt << endl;

	vector<string>::iterator it = words.begin();
	while (1) {
		if (it == words.end())
			break;
		it = find_if(it, words.end(), GT4);	
		cout << *it << endl;
		it++;
	}

	return 0;
}
