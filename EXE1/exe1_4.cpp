//Created by wangqiuli
//418674878@qq.com
#include <iostream>

int mul(int a, int b);

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << "answer is: " << a * b << std::endl;
	
	std::cout << mul(a, b) << std::endl;
}

int mul(int a, int b)
{
	return a * b;
}