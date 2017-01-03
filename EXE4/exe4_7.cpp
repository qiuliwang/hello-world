#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a1[5] = {5,4,3,7,6};
	int a2[5] = {0};
	for(int i = 0; i < 5; i ++)
	{
		a2[i]= a1[i];
	}
	for(int i = 0; i < 5; i ++)
	{
		cout << a2[i] << " ";
	}
	cout << endl;
	
	vector<int> vec;
	for(int i = 0; i < 5; i ++)
	{
		vec.push_back(i);
	}
	
	vector<int> vec2(vec);
	for(int i = 0; i < 5; i ++)
	{
		cout << vec2[i] << " ";
	}
	cout << endl;
	
	return 0;
}
