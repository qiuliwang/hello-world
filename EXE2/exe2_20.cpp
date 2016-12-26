#include <iostream>

int main()
{
	int i = 110, sum = 0;
	for(int i = 0; i != 10; ++ i)
	{
		std::cout << i << " " << std::endl;
		sum += i;
	}
	std::cout << i << " " << std::endl;
	return 0;
}