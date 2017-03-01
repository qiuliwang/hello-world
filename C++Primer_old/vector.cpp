#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	vector<int> number(2);
	vector<int> number2(number);
	cout << number[1] << endl;
	number[0] = 1;
	number[1] = 2;
	cout << number[0] << " " << number[1] << endl;

	number.push_back(3);

	for(int i = 0; i < number.size(); i ++)
	{
		cout << number[i] << " ";
	}
	cout << endl;

	return 0;
}