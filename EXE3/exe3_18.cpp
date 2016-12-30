#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec(10);
	int i = 0;
	for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter ++)
	{
		*iter = ++ i;
	}

	for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter ++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter ++)
	{
		*iter *= 2;
	}
	for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter ++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	return 0;
}