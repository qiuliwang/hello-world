#ifndef FOO_H
#define FOO_H

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

#endif
