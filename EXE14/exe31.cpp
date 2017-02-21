#include <iostream>

using namespace std;

struct absInt
{
	int operator() (int val)
	{
		return val < 0 ? -val : val;
	}
};

struct ifElse
{
	int operator() (int a, int b, int c)
	{
		if(a < 5)
		{
			return a;
		}
		else if (b < 10)
		{
			return b;
		}
		else 
			return c;
	}
};

int main()
{
	absInt absObj;
	ifElse ife;
	cout << absObj(-30) << endl;
	cout << ife(7,6,10) << endl;
	return 0;
}