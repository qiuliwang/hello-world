//输入偶数个数字，计算相邻两数之和。
//计算头尾数字之和
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> getNumner()
{
	vector<int> number;
	int i;
	cout << "Enter the numbers:\n";
	cin >> i;
	while(i != 0)
	{
		number.push_back(i);
		cin >> i;
	}

	if(number.size() % 2 == 1)
	{
		cout << "Please enter one more number:\n";
		int i ;
		cin >> i;
		number.push_back(i);
	}

	return number;
}

void calculate(vector<int> number)
{
	int length = number.size();
	for(int i = 0; i <= length/2; i ++)
	{
		cout << number[i] + number[length - 1 - i] << " ";
	}
	cout << endl;
	// int length = number.size();
	// for(int i = 0; i < length; i ++)
	// {
	// 	if(i % 2 == 0)
	// 	{

	// 	}
	// 	else
	// 	{
	// 		cout << number[i] + number[i - 1] << " ";
	// 	}
	// }
	// cout << endl;
}

int main()
{
	vector<int> number(getNumner());

	calculate(number);

	return 0;
}