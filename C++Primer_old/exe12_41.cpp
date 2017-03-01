#include <iostream>
#include <string>

using namespace std;

class Foo
{
private:
	int number;
public:
	Foo(int i):number(i) {};
	int getNumber() { return number; };
};

class Bar
{
private:
	static int barNumber;
	static Foo classFoo;
public:
	int FooVal();
	int callsFooVal();
};

int Bar::FooVal()
{
	return classFoo.getNumber();
}

int Bar::callsFooVal()
{
	return barNumber ++;
}

int Bar::barNumber = 20;
Foo Bar::classFoo(0);

int main()
{
	Bar A;
	cout << A.FooVal() << endl;
	cout << A.callsFooVal() << endl;
	cout << A.callsFooVal() << endl;

	return 0;
}