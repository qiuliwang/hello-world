#include <iostream>
#include <string>

using namespace std;
// bad code
// how to initialize x
class NoName
{
public:
	NoName():pstring("NoName"), ival(0), dval(0.0)
	{
		
		cout << pstring << " " << ival << " " << dval << endl;
	}
	
	NoName(string name):pstring(name), ival(0), dval(0.0)
	{
		cout << pstring << " " << ival << " " << dval << endl;
	}
	
	NoName(string name, int iv, int dv):pstring(name), ival(iv), dval(dv)
	{
		cout << pstring << " " << ival << " " << dval << endl;
	}
private:
	string *pstring;
	int ival;
	double dval;
};

int main()
{
	NoName();
	NoName("wang");
	NoName("Li", 2, 3.4);
}