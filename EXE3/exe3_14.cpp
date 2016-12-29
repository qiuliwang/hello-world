#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	vector<string> vec;
	string temp;
	cout << "enter strings:" << endl;
	while(temp != "###")
	{
		vec.push_back(temp);
		cin >> temp;
	}
	
	for(int i = 0; i < vec.size(); i ++)
	{
		string local = vec[i];
		for(int j = 0; j < local.size(); j ++)
		{
			if(islower(local[j]))
			{
				local[j] = toupper(local[j]);
			}
		}
		cout << local << " ";
	}
	cout << endl;
}