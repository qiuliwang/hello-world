#include <string>
#include <iostream>

using namespace std;

class NoName
{
public:
	string name;
	NoName()
	{ 
		name = "NoName";
		pstring = &name; ival = 0; dval = 0; 
	}

	NoName(const string& temp)
	{
		name = temp;
		pstring = &name;
		ival = 0, dval = 0;
	}

	void getAllInfo()
	{
		cout << *pstring << " " << ival << " " << dval << endl;
	}
private:
	string *pstring;
	int ival;
	double dval;
};

int main()
{
	NoName A;
	A.getAllInfo();
	NoName B("the second way");
	B.getAllInfo();
	return 0;
}
// int main()
// {
// 	string *pt;
// 	string str;
// 	cin >> str;
// 	pt = &str;
// 	cout << *pt << endl;
// 	return 0;
// }