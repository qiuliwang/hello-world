#include <string>
#include <iostream>

using namespace std;

class Person
{
private:
	string name;
	string address;
public:
	Person(string tempname, string tempaddress)
	{
		name = tempname;
		address = tempaddress;
	}
	string getname();
	string getaddress();
};

string Person::getname()
{
	return name;
}

string Person::getaddress()
{
	return address;
}


int main()
{
	Person A("Mike", "New York");
	cout << A.getname() << " " << A.getaddress() << endl;
	return 0;
}