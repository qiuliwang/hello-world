//Created by wangqiuli
//418674878@qq.com
#include <iostream>

void mulP(int *n, int a, int b);

int main()
{
	int a, b;
	int *ans = &a;
	std::cin >> a >> b;
	std::cout << "answer is: " << a * b << std::endl;
	mulP(ans, a, b);
	std::cout << "is: " << *ans << std::endl;
}

void mulP(int *n, int a, int b)
{
	*n = a * b;
}
