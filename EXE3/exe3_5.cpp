#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1;
	getline(cin, str1);
	cout << str1 << endl << "and :\n";
	int n = 3;
	string str2;
	for (int i = 0; i < n; i ++)
	{
		cin >> str2;
		cout << str2 << endl;
	}
}