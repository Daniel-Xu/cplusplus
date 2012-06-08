#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
#if 0 
	//exercise 9.38
	string data("ab2c3d7R4E6");
	string num("0123456789");

	string::size_type pos = 0;

	while ((pos = data.find_first_of(num, pos)) != string::npos) {
		cout << "result is: " << data[pos] << endl;
		++pos;	
	}

	pos = 0;
	while ((pos = data.find_first_not_of(num, pos)) != string::npos) {
		cout << "result is: " << data[pos] << endl;
		++pos;	
	}
#endif

#if 1
	//exercise 9.39
	//this example is very important
	string line1("We were her pride of 10 she named us:");
	string line2("Benjamin, Phoenix, the Prodigal");
	string line3("and perspicacious pacific, Suzanne");
	string separators(" \t:,\v\r\n\f");

	string sentence = line1 + ' ' + line2 + ' ' + line3;
	string::size_type spos = 0, epos = 0;
	string::size_type cur_sz = 0, max_sz = 0, min_sz = 0;

	//word number
	string::size_type num = 0;
	vector<string> max_wd;
	vector<string> min_wd;

	string data;	

	while ((spos = sentence.find_first_not_of(separators, epos))!= string::npos) {
		++num;
		epos = sentence.find_first_of(separators, spos);

		if (epos == string::npos) {
			//the last one	
			cur_sz = sentence.size() - spos;
		}
		else {
			//not the last one	
			cur_sz = epos - spos;
		}
		
		data.assign(sentence, spos, cur_sz);

		if (num == 1) {
			max_sz = cur_sz;
			min_sz = cur_sz;
			max_wd.push_back(data);
			min_wd.push_back(data);
			
		}
		else {
			//save max
			if (cur_sz > max_sz ) {
				max_sz = cur_sz;		
				max_wd.clear();
				max_wd.push_back(data);
			}
			else if (cur_sz == max_sz)
				max_wd.push_back(data);
			//save min
			if (cur_sz < min_sz ) {
				min_sz = cur_sz;		
				min_wd.clear();
				min_wd.push_back(data);
			}
			else if (cur_sz == min_sz)
				min_wd.push_back(data);
		}
	}
	
	cout << "the word num is: " << num+1 << endl << endl;

	//max wd print
	cout << "max string is: " << endl;
	vector<string>::iterator it = max_wd.begin();
	while (it != max_wd.end())
		cout << *it++ << endl <<endl;;
	//min wd print
	cout << "min string is: " << endl;
	it = min_wd.begin();
	while (it != min_wd.end())
		cout << *it++ << endl;
#endif

	return 0;
}
