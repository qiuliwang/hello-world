#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int number1[5] = {1, 2, 3, 4, 5};

	int number2[5];

	for(int i = 0; i < 5; i ++)
	{
		number2[i] = number1[i];
	}

	for(int i = 0; i < 5; i ++)
	{
		cout << number2[i] << " ";
	}

	vector<int> number3;
	for(int i = 0; i < 5; i ++)
	{
		number3.push_back(i);
	}

	cout << endl;

	vector<int> number4;
	vector<int>::iterator iter;

	for(iter = number3.begin(); iter != number3.end(); iter ++)
	{
		number4.push_back(*iter);
	}

	for(; iter != number4.end(); iter ++)
	{
		cout << *iter << " ";
	}

	cout << endl;

	return 0;
}