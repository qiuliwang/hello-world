#include <iostream>

using namespace std;

int cal1(const int *beg, const int *end);
int cal2(const int *begin, int length);

int main()
{
	int numbers[] = {1,2,3,4,5};
	cout << cal1(numbers, numbers + 5) << endl;
	cout << cal2(numbers, 5) << endl;
}

int cal1(const int *beg, const int *end)
{
	int ans = 0;
	while(beg != end)
	{
		ans += *beg;
		beg ++;
	}
	return ans;
}

int cal2(const int *begin, int length)
{
	int ans = 0;
	for(int i = 0; i < length; i ++)
	{
		ans += *begin;
		begin ++;
	}
	return ans;
}