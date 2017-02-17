#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	vector<int> vec;
	int add = 10;
	int count = 5;
	for(int i = 0; i < count; i ++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	int sum = accumulate(vec.begin(), vec.end(), add);
	cout << sum << endl;
	return 0;
}