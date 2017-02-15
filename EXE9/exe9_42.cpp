#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	stack<string> sts;
	string temp;
	int count = 5;
	for(int i = 0; i < count; i ++)
	{
		cin >> temp;
		sts.push(temp);
	}
	cout << "=============" << endl;
	for(int i = 0; i < count; i ++)
	{
		cout << sts.top() << endl;
		sts.pop();
	}
	return 0;
}