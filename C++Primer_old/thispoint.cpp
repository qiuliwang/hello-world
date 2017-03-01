#include <string>
#include <iostream>

using namespace std;

class location
{
private:
	int x;
	int y;
public:
	location& set(int, int);
	location(int a, int b):x(a), y(b) {}
	location() { x = 0; y= 0; }
	location& setlocal(int ,int);
	void print();
};

location& location::setlocal(int a, int b)
{
	x = a;
	y = b;
	return *this;
}

location& location::set(int a, int b)
{
	x = a;
	y = b;
	return *this;
}

void location::print()
{
	cout << x << " " << y << endl;
}


int main()
{
	// location A;
	// A.set(1, 2);
	location B(3, 4);

	// A.print();
	B.print();
	B.setlocal(5, 6).set(7, 8);
	B.print();

	return 0;
}