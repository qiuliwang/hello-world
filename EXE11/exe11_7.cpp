#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vec(5, 0);
	fill_n(back_inserter(vec), 10, 1);
	cout << vec.size() << endl;
	
	vector<int>::iterator iter = vec.begin();
	while(iter != vec.end())
	{
		cout << *iter << " ";
		iter ++;
	}
	cout << endl;
	return 0;
}