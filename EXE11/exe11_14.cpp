#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	vector<int> vec2(10);
	int count = 10;
	for(int i = 0; i < count; i ++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}
	
	vector<int>::iterator iter = vec.begin();
	while(iter != vec.end())
	{
		//cout << *iter << " ";
		iter ++;
	}
	cout << endl;
	
	vector<int>::iterator it = find(vec.begin(), vec.end(), 42);
	replace_copy(vec2.begin(), vec2.end(), inserter(vec, it), 100, 0);

	iter = vec.begin();
	while(iter != vec.end())
	{
		cout << *iter << " ";
		iter ++;
	}
	cout << endl;

	iter = vec2.begin();
	while(iter != vec2.end())
	{
		cout << *iter << " ";
		iter ++;
	}
	cout << endl;
}