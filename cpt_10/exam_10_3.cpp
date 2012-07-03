#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char** argv)
{
	if (argc != 3) {
		cout << "wrong command..." << endl;
		return -1;
	}
	
	//input file
	ifstream infile_w("word.txt");
	ifstream infile_s("sentence.txt");
	ofstream outfile;
	string line_w;
	//associative container
	map<string, string> m_word;
	string key, value, t_word;
	string test;

	//create map
	cout << "create associative container..." << endl;
	while (infile_w >> key >> value) {
		m_word.insert(make_pair(key, value));
	}
	
#if 0
	//this is a little complexed
	while (getline(infile_w, line_w)) {
		istringstream stream(line_w);
		stream >> key >> value;
		m_word.insert(make_pair(key, value));
	}
#endif

#if 0 
	//this is used to test whether associative container was correctlly created
	cout << "please input word you want to transfer" << endl;
	while (cin >> test) {
		map<string, string>::iterator m_it = m_word.find(test);
		cout << m_it->second << endl;
	}
	cout << endl;
#endif
	
	//begin to transfer
	outfile.open("result.txt", ofstream::app);	
	while (getline(infile_s, line_w)) {
		istringstream stream(line_w);
		while (stream >> t_word) {
			map<string, string>::iterator m_it = m_word.find(t_word);
			if (m_it == m_word.end())
				outfile << t_word << " ";
			else
				outfile << m_it->second << " ";
		}
		outfile << endl;
	}
	outfile.close();
	return 0;
}

