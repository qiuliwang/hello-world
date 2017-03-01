#include <iostream>
#include <vector>
using namespace std;

//指针参数
int compareTwoNumbers(int a, int *b);

//通过指针修改变量
void changeNumbersByPoint(int a, int *b);

//修改两个指针指向
void changePoints(int *&a, int *&b);

//交换实参
void changePara(int &a, int &b);

void print(vector<int>::const_iterator beg, vector<int>::const_iterator end);

void printValues(const int *beg, const int *end);

int main()
{
	int x = 1, y = 2;
	int *pt = &y;
	cout << compareTwoNumbers(x, pt) << endl;
	cout << x << " " << *pt << endl;
	changeNumbersByPoint(x, pt);
	cout << x << " " << *pt << endl;

	//int number1 = 1, number2 = 2;
	//int *point1 = &number1, *point2 = &number2;
	//cout << *point1 << " " << *point2 << endl;
	//changePoints(point1, point2);
	//cout << *point1 << " " << *point2 << endl;

	//int a = 1, b = 2;
	//cout << a << " " << b << endl;
	//changePara(a, b);
	//cout << a << " " << b << endl;

	// int numbers[5] = {1, 2, 3, 4, 5};
	// int *begin = numbers, *end = &numbers[5];
	// printValues(begin, end);

	//system("pause");
	return 0;
}

void printValues(const int *beg, const int *end)
{
	while(beg != end)
	{
		cout << *beg ++ << endl;
	}
}

//交换实参
void changePara(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//指针参数
int compareTwoNumbers(int a, int *b)
{
	return a > *b ? a : *b;
}

//通过指针修改变量
void changeNumbersByPoint(int a, int *b)
{
	a = 5;
	*b = 5;
}

//修改两个指针指向
void changePoints(int *&a, int *&b)
{
	int *temp;
	temp = a;
	a = b;
	b = temp;
}