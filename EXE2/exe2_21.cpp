//modify
//error because i cannot get asscessed
//
#include <iostream>

int main()
{
	int sum = 0;
	int out = 0;
	int test = sum;
	for(int i = 0; i != 10; ++ i)
	{
		sum += i;
		out = i;
	}

	std::cout << "Sum form 0 to " << i
		<< " is " << sum << std::endl;

	return 0;
}