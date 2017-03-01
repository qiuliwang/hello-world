#include <iostream>
 
using namespace std;

int main()
{
	//两个指针指向同一元素
	// int *num1, *num2;
	// int number = 5;

	// num1 = &number;
	// num2 = &number;
	// num1 += num2 - num1;

	// cout << *num1 << endl;

	//两个指针指向同一数组元素
	// int numbers[5] = {1, 2, 3, 4, 5};
	// int *p1, *p2;

	// p1 = &numbers[2];
	// p2 = &numbers[2];
	// p1 += p2 - p1;
	// cout << *p1 << endl;

	//利用指针修改数组

	// int numbers[5] = {1, 2, 3, 4, 5};
	// int *pbegin = numbers;
	// int *pend = &numbers[5];

	// for(; pbegin != pend; pbegin ++)
	// {
	// 	*pbegin = 0;
	// }

	// for(int i = 0; i < 5; i ++)
	// {
	// 	cout << numbers[i] << " ";
	// }
	// cout << endl;

	//动态数组
	int *pt = new int[3];
	for(int *p = pt; p != pt + 10; p ++)
	{
		*p = 4;
	}

	for(int *p = pt; p != pt + 10; p ++)
	{
		cout << *p << " ";
	}
	cout << endl;
	delete [] pt;
	return 0;
}