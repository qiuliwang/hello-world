//exe 3.10
//从string对象中去掉标点符号，要求输入的字符串必须包含标点符号。输出不含标点符号的字符串。

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string testString;
	cout << "Enter the string:\n";
	cin >> testString;

	int length = testString.size();
	string resString = "";
	int sign = 0;

	for(int i = 0; i < length; i++)
	{
		if(ispunct(testString[i]))
		{
			sign = 1;
		}
		else
		{
			resString += testString[i];
		}
	}

	if(sign == 0)
	{
		cout << "must contain punct\n";
	}
	else
	{
		cout << resString << endl;
	}
	return 0;
}