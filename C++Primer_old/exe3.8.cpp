#include <string>
#include <iostream>

using namespace std;

int main()
{
	输入多个字符串链接在一起，中间添加空格

	string res = "";
	string temp = "";

	while(temp != "###")
	{
		cin >> temp;
		res += temp + " "; 
	}
	cout << res << endl;;

	return 0;

	// string s;
	// cin >> s[0];
	// cout << s[0];
}