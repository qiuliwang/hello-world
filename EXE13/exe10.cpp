#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
	string name;
	int id;
public:
	Employee():name(""),id(0)
	{
		cout << name << " " << id << endl;
	}
	Employee(string named, int i):name(named), id(i)
	{
		cout << name << " " << id << endl;
	}
	
	void print()
	{
		cout << name << " " << id << endl;
	}
	
	Employee& operator = (const Employee &rhs)
	{
		name = rhs.name;
		id = rhs.id + 1;
		return *this;
	}
};

int main()
{
	Employee a;
	Employee b("Bell", 3);
	Employee c = b;
	c.print();
}