#include <iostream>
using namespace std;

int cal(int a)
{
	return a < 0 ? a *= -1 : a;
}

int main()
{
	int x = 2;
	int y = -4;
	cout << cal(x) << endl << cal(y) << endl;
}