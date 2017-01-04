#include <iostream>
#include <vector>
using namespace std;

int cal(vector<int>::const_iterator begin, vector<int>::const_iterator end);

int main()
{
	vector<int> vec;
	for(int i = 0; i < 10; i ++)
	{
		vec.push_back(i);
	}
	vector<int>::const_iterator begin = vec.begin(), end = vec.end();
	cout << cal(begin, end) << endl;
}

int cal(vector<int>::const_iterator begin, vector<int>::const_iterator end)
{
	int ans = 0;
	for( ; begin != end; begin ++)
	{
		ans += *begin;
	}
	return ans;
}