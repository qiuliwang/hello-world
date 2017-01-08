#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	//ofstream os;
	//os << "Good bye!" << endl;
	
	// int a;
// 	string word;
// 	while(cin >> a)
// 	{
// 		//cin >> a;
// 		cout << a << endl;
// 	}
	
	int ival;
	//read cin and test only for EOF, loop is execcuted even if there are other IO failures.
	while(cin >> ival, !cin.eof())
	{
		if(cin.bad())
			throw runtime_error("IO stream is corrupted.");
		if(cin.fail())
		{
			cerr << "bad data, try again";
			cin.clear(istream::failbit);
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore bad input
			continue;
		}
		cout << ival << endl;
	}
	
	return 0;
}