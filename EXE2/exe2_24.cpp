#include <iostream>

int main()
{
	int a = 10;
	int &rval = a;
	std::cout << a << " " << rval << std::endl;
	rval = 30;
	std::cout << a << " " << rval << std::endl;
	const int b = 20;
	//b = 30;
	const int &rval2 = b;
	std::cout << b << " " << rval2 << std::endl;
}