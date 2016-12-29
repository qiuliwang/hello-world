#include <string>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int number = 0;
	cout << "Enter numbers(end with -1): " << endl;
	vector<int> vec;
	cin >> number;
	while(number != -1)
	{
		vec.push_back(number);
		cin >> number;
	}
	
	cout << "size is " << vec.size() << endl;
	for(int i = 0; i < vec.size(); i ++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;
	
	for(int i = 0; i < vec.size() / 2; i ++)
	{
		cout << vec[i * 2] + vec[i * 2 + 1] << " ";
	}
	cout << "the last: " << vec[vec.size() - 1] << endl << endl;
	
	for(int i = 0; i < vec.size() / 2; i ++)
	{
		cout << vec[i] + vec[vec.size() - 1 - i] << " ";
	}
	cout << endl;
	
	return 0;
}