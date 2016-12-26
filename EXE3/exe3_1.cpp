#include <iostream>

using namespace std;

int main()
{
	int a = 0, sum = 1;
	cout << "enter a:\n";
	cin >> a;
	for (int i = 1; i < a; i ++)
	{
		sum *= i;
	}
	cout << sum << endl;
	return 0;
}