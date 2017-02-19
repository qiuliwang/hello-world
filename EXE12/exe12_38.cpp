#include <iostream>

using namespace std;

class Foo
{
private:
	int ival;
public:
	Foo(int i):ival(i) {}
	
	int getInt()
	{
		return ival;
	}
};

int main()
{
	Foo A(1);
	cout << A.getInt() << endl;
	return 0;
}