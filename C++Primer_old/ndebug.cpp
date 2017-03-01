#include <string>
#include <iostream>

using namespace std;

int main()
{
	cout << "begin" << endl;
	#ifndef NDEBUG
	cout << "debuging" << endl;
	#endif
}