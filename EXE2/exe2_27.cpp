#include <iostream>

int main()
{
	std::cout << "test" << std::endl;
	int i, &ri = i;
	i = 5;
	return 0;
}