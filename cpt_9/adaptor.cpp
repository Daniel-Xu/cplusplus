#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
#if 0 
	string data;
	stack<string> s_stack;

	cout << "please input data..." << endl;
	while (cin >> data)
		s_stack.push(data);
	cout << endl;

	//print
	while (! s_stack.empty()) {
		data = s_stack.top();
		cout << "contend is: " << data << endl;
		s_stack.pop();
	}
#endif

#if 1
	string exp;	
	string::iterator s_it;
	stack<char> s_stack;
	
	cout << "please input expression..." << endl;
	cin >> exp;
	
	//operation
	s_it = exp.begin();
	while (s_it != exp.end()) {
		if (*s_it != ')')	{
			s_stack.push(*s_it);	
		}
		else {
			while (!s_stack.empty() && s_stack.top() != '(' )
				s_stack.pop();
			
			if (s_stack.empty())	
				cout << "not matched..." << endl;
			else {
				s_stack.pop();	
				s_stack.push('@');
			}
		}
		++s_it;
	}

	stack<char> s_show;
	while (!s_stack.empty()) {
		s_show.push(s_stack.top());
		s_stack.pop();
	}
	while (!s_show.empty()) {
		cout << s_show.top();
		s_show.pop();
	}
	cout << endl;

#endif

	return 0;
}
