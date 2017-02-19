#include <iostream>
#include "foo.h"

class Bar
{
private:
	static int ival;
	static Foo fo;
public:
	static int FooVal() 
	{
		ival ++;
		return fo.getInt();
	}
	
	static int callsFooVal()
	{
		return ival;
	}
};

int Bar::ival = 1;
Foo Bar::fo = Foo(2);

int main()
{
	Bar b;
	cout << b.FooVal() << " " << b.callsFooVal() << endl;
	cout << b.FooVal() << " " << b.callsFooVal() << endl;
	cout << b.FooVal() << " " << b.callsFooVal() << endl;
	cout << b.FooVal() << " " << b.callsFooVal() << endl;
	return 0;
}