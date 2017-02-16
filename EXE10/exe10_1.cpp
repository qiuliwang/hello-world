#include <iostream>
#include <utility>
#include <string>
#include <vector>
using namespace std;

int main()
{
	//pair<string, int> stp1;
	pair<string , int> pp;
	vector< pair<string, int> > vec;
	string tempstr;
	int tempint;
	int count = 3;
	for(int i = 0; i < count; i ++)
	{
		cin >> tempstr >> tempint;
		pp = make_pair(tempstr, tempint);
		vec.push_back(pp);
	}
	
	cout << vec.size() << endl;
	
	
	vector< pair<string, int> >::iterator iter = vec.begin();
	for( ; iter != vec.end(); iter ++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
	
	// pair<string, int> stp2;
// 	pair<string, int> stp3;
// 	vector< pair<string, int> > vec;
//
// 	int count = 3;
//
// 	for(int i = 0; i < count; i ++)
// 	{
//
// 	}
//
// 	string tempString;
// 	int tempInt;
// 	for(int i = 0; i < 3; i ++)
// 	{
// 		cin >> tempString >> tempInt;
// 	}
	return 0;
}