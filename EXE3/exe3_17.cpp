#include <iostream>
#include <vector>

using namespace std;

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
	
	for(vector<int>::iterator iter = -- vec.end(); iter != vec.begin(); iter --)
	{
		cout << *iter << " ";
	}
	cout << endl;
	//
	// for(vector<int>::iterator iter1 = vec.begin(), iter2 = -- vec.end(); iter1 != iter2; iter1 ++, iter2 --)
	// {
	// 	cout << *iter1 + *iter2 << " ";
	// }
	// cout << endl;
	
	return 0;
}