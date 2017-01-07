#include <string>
#include <iostream>
using namespace std;

typedef bool (*mpf)(const string &, const string &); 
	
bool lengthCompare(const string &a, const string &b)
{
	if(a.size() >= b.size())
		return true;
	else
		return false;
}

int main()
{
	string a = "aaaaa";
	string b = "bbbbbbb";
	cout << lengthCompare(a, b) << endl;
	cout << lengthCompare(b, a) << endl;
	
	bool (*pf)(const string &, const string &); 
	pf = lengthCompare;
	cout << pf(a, b) << endl;
	cout << pf(b, a) << endl;
	
	mpf fr = lengthCompare;
	cout << fr(a, b) << endl;
	cout << fr(b, a) << endl;
	
	return 0;
}