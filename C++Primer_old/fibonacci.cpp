#include <iostream>
using namespace std;
//斐波那契数列

int fibonacci(int n)
{
	if(n <= 1) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	//int x = 4;
	for(int i = 0; i < 20; i ++)
		cout << fibonacci(i) << " ";
}