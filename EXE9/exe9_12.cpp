#include <iostream>
#include <list>

using namespace std;

bool isin(list<int>::iterator begin, list<int>::iterator end, int num)
{
	for(; begin != end; begin ++)
	{
		cout << *begin << " ";
		if(num == *begin)
		{		
			cout << endl;
			return true;
		}
	}
	cout << endl;
	return false;
}

int main()
{
	list<int> lst;
	for(int i = 0; i < 10; i ++)
	{
		lst.push_back(i);
	}
	
	list<int>::iterator begin = lst.begin();
	list<int>::iterator end = lst.end();
	
	cout << isin(begin, end, 6) << endl;
	cout << isin(begin, end, 12) << endl;
	
	return 0;
}