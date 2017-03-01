#include <iostream>

using namespace std;

class X
{
public:
	Y *ypoint;
};

class Y
{
public:
	class X;
};