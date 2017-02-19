#include <iostream>
using namespace std;

class NoName
{
public:
	NoName():pstring(new string), i(0), d(0) 
	{
		//cout << *pstring << " " << i << " " << d << endl;
	}
	
	NoName(string pst, int iv, double dv):pstring(new string(pst)), i(iv), d(dv) 
	{
		//cout << *pstring << " " << i << " " << d << endl;
	}
	NoName(string &pst, int iv, double dv):pstring(&pst), i(iv), d(dv) 
	{
		//cout << *pstring << " " << i << " " << d << endl;
	}
	
	NoName(const NoName &a):pstring(a.pstring), i(a.i), d(a.d)
	{
		//cout << *pstring << " " << i << " " << d << endl;
	}
	
	void print()
	{
		cout << *pstring << " " << i << " " << d << endl;
	}
	
	void setString(string &k)
	{
		pstring = &k;
	}
private:
	string *pstring;
	int i;
	double d;
};

int main()
{
	NoName A;
	A.print();
	string nt = "hello";
	//string *name = &nt;
	NoName B("new", 1, 2);
	B.print();
	NoName C(B);
	C.print();
	
	string go = "good";
	B.setString(go);
	B.print();
	C.print();
}