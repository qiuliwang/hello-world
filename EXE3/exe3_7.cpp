//String

#include <string>
#include <iostream>

using namespace std;

string larger(string str1, string str2);
string longer(string str1, string str2);

int main()
{
	string str1, str2;
	cout << "input two strings:" << endl;
	cin >> str1 >> str2;
	
	cout << larger(str1, str2) << endl;
	cout << longer(str1, str2) << endl;
	return 0;
}

string larger(string str1, string str2)
{
	return str1 > str2 ? str1 : str2;
}

string longer(string str1, string str2)
{
	return str1.size() > str2.size() ? str1 : str2;
}