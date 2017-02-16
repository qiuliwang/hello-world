#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int x = 10;
	vector<string> vec;
	for(;x >=0; x --)
	{
		string temp;
		cin >> temp;
		vec.push_back(temp);
	}
	
	vector<string>::iterator iter = vec.begin();
	for( ; iter != vec.end(); iter ++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	
	int res = count(vec.begin(), vec.end(), "hello");
	cout << res << endl;
}