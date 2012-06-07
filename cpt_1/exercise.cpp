#include <iostream>

using namespace std;

int main()
{
	int i, j;
	int w_sum = 0;
	int f_sum = 0;

	int v1, v2;
	int v3;
	int cnt = 0;
	
	//exercie 1.1.4
	for (i = 50; i <= 100; i++)
		f_sum += i;

	cout << "f_sum is for_fun:" << f_sum << endl;	
	
	i = 50;
	while (i <= 100) {
		w_sum += i;
		i++;
	}

	cout << "w_sum is for_fun:" << w_sum << endl;	


	//exercise 1.16
	cin >> v1 >> v2;	

	if (v1 >= v2) 
		cout << "the max is "<< v1 << endl;
	else 
		cout << "the max is "<< v2 << endl;


	//exercise 1.17
	while (cin >> v3) {
			if (v3 < 0) 	
			cnt++;
	}	
	
	cout << "the negative number is: " << cnt << endl;


	// exercise 1.18
	cout << "please enter two number :" << endl;	
	cin >> v1 >> v2;

	if (v1 >= v2) {
		v3 = v1;
		v1 = v2;
		v2 = v3;
	}

	cout << "the number between" << v1 
		 << "and " << v2 << " is" << endl;

	for (i = v1, j = 1; i <= v2; i++, j++) {
		cout << i << " ";
		if (j % 10 == 0) 
			cout << endl;			
	}

	cout << endl;

	return 0;
}
