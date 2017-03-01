#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	stack<string> intstack;
	cout << intstack.size() << endl;

	string strin;
	cout << "enter strings end with \"###\"" << endl;
	cin >> strin;

	while(strin != "###")
	{
		intstack.push(strin);
		cin >> strin;
	}

	cout << intstack.size() << endl;

	return 0;
}