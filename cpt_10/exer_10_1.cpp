#include <iostream>
#include <utility>
#include <vector>

using namespace std;
typedef pair<string, int> T_data;

int main()
{
	string s_data;	
	int i_data;
	pair<string, int> p_data;

	vector<T_data> pvec;

	while (cin >> s_data >> i_data) {
		p_data = make_pair(s_data, i_data);	
		pvec.push_back(p_data);	
	}

	return 0;
}
