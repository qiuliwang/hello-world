//Created by wangqiuli
//418674878@qq.com
#include <iostream>

void mulP(int *n, int a, int b);

int mul(int x, int y);

int main()
{
	int a, b;
	int *ans = &a;
	std::cin >> a >> b;
	std::cout << "answer is: " << a * b << std::endl;
	mulP(ans, a, b);
	std::cout << "is: " << *ans << std::endl;
	std::cout << "is: " << mul(a, b) << std::endl;
}

void mulP(int *n, int a, int b)
{
	*n = a * b;
}

int mul(int x, int y)
{
	return x * y;
}