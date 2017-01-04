#include <iostream>
using namespace std;

int cal(int a, int b)
{
	int ans = 1;
	for(int i = 0; i < b; i ++)
	{
		ans *= a;
	}
	
	return ans;
}

int main()
{
	int a = 2;
	int b = 3;
	cout << cal(a, b) << endl;
	return 0;
}