//String

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string ans;
	string temp;
	cout << "enter String" << endl;
	int n = 5;
	for(int i = 0; i < 5; i ++)
	{
		cin >> temp;
		ans += temp;
		ans += " ";
	}
	
	cout << ans << endl;
}