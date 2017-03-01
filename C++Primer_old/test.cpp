#include <iostream>
using namespace std;
 
int main()
{
	//cout << "test success!" << endl;

	int numbers[3][4];
	int count = 0;

	for(int i = 0; i < 3; i ++)
	{
		for(int j = 0; j < 4; j++)
		{
			numbers[i][j] = count ++;
		}
	}

	for(int i = 0; i < 12; i ++)
	{
		cout << numbers[i] << " ";
		if(i % 3 == 0)
		{
			cout << endl;
		}
	}

	return 0;
}