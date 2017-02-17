#include <iostream>
#include <string>
using namespace std;


//exe 12.1 to 12.4
class Persion
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