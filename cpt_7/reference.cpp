#include <iostream>
#include <vector>

using namespace std;

//method 1
int add_1(int (&array)[10])
{
	int sum = 0;

	for (size_t i = 0; i != 10; ++i)	
		sum += array[i];

	return sum;
}

//method 2
int add_2(int *array, size_t len)
{
	int sum = 0;

	for (size_t i = 0; i != len; ++i)
		sum += array[i];

	return sum;
}

//method 3
int add_3(int *start, int *end)
{
	int sum = 0;
	
	for (int *p = start; p != end; ++p)
		sum += *p;

	return sum;
}


int add_vec(vector<int>::iterator iter_start, vector<int>::iterator iter_end)
{
	int sum = 0;
	
	for (vector<int>::iterator i = iter_start; i != iter_end; ++i)
		sum += *i;

	return sum;
}


int main ()
{
#if 0 
	//exercise 7.13
	int matrix[10] = {
		1, 2, 3, 4, 5,
		6, 7, 8, 9, 10
	};


	cout << "add1 sum is: " 
		 << add_1(matrix) << endl;

	cout << "add2 sum is: " 
		 << add_2(matrix, sizeof(matrix)/sizeof(*matrix)) << endl;

	cout << "add3 sum is: " 
		 << add_3(matrix, matrix+10) << endl;
#endif

#if 1
	//exercise 7.14
	vector<int>	ivec;
	int data;

	while (cin >> data) 
		ivec.push_back(data);

	cout << "add_vector sum is: " 
		 << add_vec(ivec.begin(), ivec.end()) << endl;


#endif

	return 0;
}
