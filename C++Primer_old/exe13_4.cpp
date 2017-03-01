#include <string>
#include <iostream>

using namespace std;

struct Noname
{
	Noname():pstring(new string), i(0), d(0) { cout << "!!!" << endl; }
	Noname(Noname &temp) 
	{
		pstring = temp.pstring;
		i = temp.i;
		d = temp.d;
		cout << *pstring << endl;
	};
	void setString(string str)
	{
		*pstring = str;
		cout << *pstring << "@_@" << endl;
	}
private:
	string *pstring;
	int i;
	double d;
};

int main()
{
	Noname A;
	A.setString("test");
	Noname B(A);
}