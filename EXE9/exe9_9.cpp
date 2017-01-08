#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lst(10);
	list<int>::iterator iter = lst.begin();
	for(int i = 0 ; iter != lst.end(); iter ++, i ++)
	{
		*iter = i;
	}
	for(iter = lst.begin(); iter != lst.end(); iter ++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	
	for(iter = -- lst.end(); iter != -- lst.begin(); iter --)
	{
		cout << *iter << " ";
	}
	cout << endl;
	return 0;
}