#include <iostream>
#include <vector>
using namespace std;

//const_iterator can change itself but cannot change the value it is pointing
//const iterator cannot change itself, it is almost useless. It must be initialized at the beginning

int main()
{
	vector<int> vec(10);
	int i = 0;
	for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter ++)
	{
		*iter = i ++;
	}
	
	for(vector<int>::const_iterator iter = vec.begin(); iter != vec.end(); iter ++)
	{
		//*iter = 3;
		cout << *iter << " ";
	}
	cout << endl;
	
	const vector<int>::iterator constiter = vec.begin();
	//constiter = vec.end();
	cout << *constiter << endl;
	
	return 0;
}