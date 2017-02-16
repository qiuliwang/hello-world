#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec;
	int num;
	while(cin >> num)
	{
		vec.push_back(num);
	}
	
	vector<int>::iterator iter = vec.begin();
	for( ; iter != vec.end(); iter ++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	
	int res = count(vec.begin(), vec.end(), 1);
	cout << res << endl;
	return 0;
}