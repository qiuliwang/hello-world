#include <iostream>

using namespace std;

class Y;
class X;

class X
{
public:
	Y *pty;
};

class Y
{
public:
	X oox;
};

int main()
{
	X a;
	Y b;
	return 0;
}