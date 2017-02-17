#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;

//use "struct" instead of "class"

struct Persion
{
private:
	string name;
	string address;
public:
	Persion(string tname, string taddress):name(tname), address(taddress)
	{
		
	}
	
	string getName() const;
	string getAddress() const;
};

string Persion::getName() const
{
	return name;
}

string Persion::getAddress() const
{
	return address;
}

int main()
{
	Persion A("wang", "Jiangsu");
	string name = A.getName();
	string address = A.getAddress();
	cout << name << endl << address << endl;
	name = "li";
	return 0;
}