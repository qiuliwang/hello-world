#include <iostream>

using namespace std;

int main()
{
	string s = "Hello world!\n";
	string *s1, *s2;
	string *sp = &s;
	s1 = sp;
	*s1 = "changed string\n";
	cout << *s1;
}