#include <iostream>
#include <vector>

using namespace std;
//you cannot add pointers

int main()
{
	vector<int> vec(10);
	int i = 0;
	for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter ++)
	{
		*iter = i ++;
	}
	
	for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter ++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	
	vector<int>::iterator iter1 = vec.begin();
	vector<int>::iterator iter2 = vec.end();
	
	cout << *iter1 << endl;
	cout << *iter1 + 3 << endl;
	iter2 --;
	//vector<int>::iterator iter3 = (iter1 + iter2) / 2;
	cout << iter2 - iter1 << endl;
}