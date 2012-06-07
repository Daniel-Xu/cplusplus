#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
#if 0 
	string word;
	vector<string> text;

	while (cin >> word)
		text.push_back(word);
	
	for (vector<string>::size_type i = 0; i != text.size(); ++i)
		cout << text[i]<< endl;
#endif

#if 0 
	//exercise 3.13.1
	vector<int> ivec;
	int data;

	cout << "please input data..." << endl;

	while (cin >> data) 
		ivec.push_back(data);	

	for (vector<int>::size_type i = 0; i < ivec.size(); i += 2) {
		if (i == (ivec.size()-1))	
			cout << "The number of vector is odd, so there is no sum of the last one"
				 << "\n" << "The last one value is: " << ivec[i] << endl;
		else {
			cout << "The " << i/2 + 1<< "th sum is " << ivec[i] + ivec[i+1] << endl;
		}	

	}
#endif


#if 1
	//exercise 3.13.2
	vector<int> ivec;
	int data;

	cout << "please input data..." << endl;

	while (cin >> data) 
		ivec.push_back(data);	

	for (vector<int>::size_type i = 0, j = ivec.size()-1; i <= j && j < ivec.size(); i++, j--) {
		if (i == j)	
			cout << "The number of vector is odd, so there is no sum of the middle one"
				 << "\n" << "The middle one value is: " << ivec[j] << endl;
		else {
			cout << "The " << i+1 << "th sum is " << ivec[i] + ivec[j] << endl;
		}	
	}
#endif

	return 0;
}

