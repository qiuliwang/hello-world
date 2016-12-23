#include <iostream>

using namespace std;

int GetDirection()
{
	char dir;
	int sign = 0;
	cin >> dir;
	switch(dir)
	{
		case 'w': sign = 1; break;
		case 'a': sign = 2; break;
		case 's': sign = 3; break;
		case 'd': sign = 4; break;
		default: sign = 0;
	}
	
	return sign;
}

int main()
{
	for(int k = 0; k < 10; k++)
		cout<<GetDirection();
	//system("pause");
	return 0;
}