using namespace std;

class Employee {
public:
	Employee():name("no"), id(counter)
	{
		++counter;
	}
	Employee(const string &i_name):name(i_name), id(counter)
	{
		++counter;	
	}
	Employee(const Employee &ag):name(ag.name), id(counter)
	{
		++counter;	
	}

	Employee &operator=(const Employee &other)
	{
		name = other.name;

		return *this;
	}

private:
	string name;
	int id;
	static int counter;
};
