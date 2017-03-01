#include <iostream>
#include <string>

using namespace std;

int main()
{
	string temp = "helloWorld"; 
	string::iterator iter = temp.begin();
	for( ; iter != temp.end(); iter ++)
	{
		*iter = toupper(*iter);
	}
	cout << temp << endl;
	return 0;
}