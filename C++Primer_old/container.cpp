#include <iostream>
#include <vector>
#include <deque>
#include <list>

using namespace std;

int main()
{
	list<int> ilist;
	for(int i = 0; i < 20; i ++)
	{
		ilist.push_back(i);
	}

	deque<int> deque1;
	deque<int> deque2;

	list<int>::iterator iterint = ilist.begin();

	for(; iterint != ilist.end(); iterint ++)
	{
		if(*iterint % 2 == 0)
		{
			deque2.push_back(*iterint);
		}
		else
		{
			deque1.push_back(*iterint);
		}
	}

	deque<int>::iterator dequeint1 = deque1.begin();
	deque<int>::iterator dequeint2 = deque2.begin();

	for(; dequeint1 != deque1.end(); dequeint1 ++)
	{
		cout << *dequeint1 << " ";
	}

	cout << endl;

	for(; dequeint2 != deque2.end(); dequeint2 ++)
	{
		cout << *dequeint2 << " ";
	}

	cout << endl;
	return 0;
}