#include <iostream>
#include <string>
using namespace std;

char &get_val(string &str, string::size_type ix)
{
	return str[ix];
}

int main()
{
	string str = "aaacccddd";
	cout << str << endl;
	
	get_val(str, 2) = 'C';
	cout << str << endl;
	
	return 0;
}