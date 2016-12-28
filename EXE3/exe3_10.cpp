#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string str;
	cout << "enter a string: " << endl;
	cin >> str;
	for(string::size_type index = 0; index < str.size(); index ++)
	{
		if(ispunct(str[index]))
		{
			for(string::size_type innerindex = index; innerindex < str.size() - 1; innerindex ++)
			{
				str[innerindex] = str[innerindex + 1];
			}
			str = str.substr(0, str.size() - 1);
		}
	}
	cout << str << endl;
	return 0;
}