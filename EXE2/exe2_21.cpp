#include <iostream>

int main()
{
	int sum = 0;
	int out = 0;
	for(int i = 0; i != 10; ++ i)
	{
		sum += i;
		out = i;
	}

	std::cout << "Sum form 0 to " << out
		<< " is " << sum << std::endl;

	return 0;
}