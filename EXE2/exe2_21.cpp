//modify
//error because i cannot get asscessed
//
#include <iostream>

int main()
{
	int a = 10;
	int xx ;
	//fuckyou
	int yl;
	int &rval = a;
	std::cout << a << " " << rval << std::endl;
	rval = 20;
	std::cout << a << " " << rval << std::endl;
	const int b = 20;
	//b = 30;
	const int &rval2 = b;
	std::cout << b << " and " << rval2 << std::endl;

	int sum = 0;
	int out = 0;
	int test = sum;
	for(int i = 0; i != 10; ++ i)
	{
		sum += i;
		out = i;
	}


}