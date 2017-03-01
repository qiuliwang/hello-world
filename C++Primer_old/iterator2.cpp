#include <vector>
#include <iostream>
#include <list>

using namespace std;

int numberIsInTheList(list<int> test, int number)
{
	//已经存在返回1，不存在返回0
	int sign = 0;
	list<int>::iterator iter = test.begin();
	for( ; iter != test.end(); iter ++)
	{
		if(*iter == number)
		{
			sign = 1;
			break;
		}
	}
	return sign;
}

void insert(list<int> &test, int number)
{
	int exist = numberIsInTheList(test, number);
	if(exist == 0)
	{
		int max = 0;
		list<int>::iterator inner;
		for(inner = test.begin() ; inner != test.end(); inner ++)
		{
			if(*inner > number)
			{
				test.insert(inner, number);
				max = 1;
				break;
			}
		}
		if(max == 0)
			test.push_back(number);
	}
}

int main()
{
	list<int> test;
	int number;
	cin >> number;
	test.push_back(number);
	cin >> number;

	while(number != -1)
	{
		insert(test, number);
		list<int>::iterator iter = test.begin();
		for( ; iter != test.end(); iter ++)
		{
			cout << *iter << " ";
		}
		cout << endl;

		cin >> number;
	}

	//list<int> vec;
	//vec.push_back(1);
	//vec.push_back(3);
	//vec.push_back(5);

	//list<int>::iterator iter = vec.begin();
	//for( ; iter != vec.end(); iter ++)
	//{
	//	cout << *iter << " ";
	//}
	//cout << endl;

	//for(iter = vec.begin() ; iter != vec.end(); iter ++)
	//{
	//	if(*iter > 4)
	//	{
	//		vec.insert(iter, 4);
	//		break;
	//	}
	//}

	//for(iter = vec.begin() ; iter != vec.end(); iter ++)
	//{
	//	cout << *iter << " ";
	//}
	//cout << endl;

	//system("pause");
	return 0;
}