//base exponent

#include <iostream>

int main()
{
	int base, exponent;
	std::cout << "enter base and exponent:" << std::endl;
	std::cin >> base >> exponent;
	int res = 1;
	for(int i = 0; i < exponent; i ++)
	{
		res *= base;
	}
	
	std::cout << "answer is: " << res << std::endl;
}