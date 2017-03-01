#include <list>
#include <deque>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	list<string> strlist;
	cout << "Enter strings, end with \"###\"" << endl;
	string temp;
	cin >> temp;
	while(temp != "###")
	{
		strlist.push_back(temp);
		cin >> temp;
	}
	cout << "Enter string you want to find" << endl;
	string temp2;
	cin >> temp2;
	list<string>::iterator findstr = strlist.begin();

	for( ; findstr != strlist.end(); findstr ++)
	{
		cout << *findstr << " ";
	}
	cout << endl;

	list<string>::iterator find = strlist.begin();

	for( ; find != strlist.end(); find ++)
	{
		if(*find == temp2)
		{
			find = strlist.erase(find);
			find --;
		}
	}

	for(findstr = strlist.begin(); findstr != strlist.end(); findstr ++)
	{
		cout << *findstr << " ";
	}
	cout << endl;
	return 0;
}