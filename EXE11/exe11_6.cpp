#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	vector<int> vec;
	int count = 10;
	for(int i = 0; i < count; i ++)
	{
		vec.push_back(i);
	}
	
	vector<int>::iterator iter = vec.begin();
	while(iter != vec.end())
	{
		cout << *iter << " ";
		iter ++;
	}
	cout << endl;
	
	fill_n(vec.begin(), 10, 0);
	
	iter = vec.begin();
	while(iter != vec.end())
	{
		cout << *iter << " ";
		iter ++;
	}
	cout << endl;
}