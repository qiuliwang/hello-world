//String

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1;
	string str2 = "hello";
	string str3(str2);
	string str4("here");
	int n = 10;
	string str5(n, 'c');
	cout << str1 << endl << str2 << endl << 
	        str3 << endl << str4 << endl << str5 << endl;	
	return 0;
}