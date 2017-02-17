#include <iostream>
#include <string>
#include <numeric>
#include <vector>

using namespace std;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

bool GT6(const string &s)
{
	return s.size() > 6;
}

int main()
{
	string enter("");
	vector<string> vec;
	cin >> enter;
	while(enter != "##")
	{
		vec.push_back(enter);
		cin >> enter;
	}
	
	sort(vec.begin(), vec.end());
	vector<string>::iterator end_unique = unique(vec.begin(), vec.end());
	vec.erase(end_unique, vec.end());
	vector<string>::iterator iter = vec.begin();
	
	while(iter != vec.end())
	{
		cout << *iter << " ";
		iter ++;
	}
	cout << endl;
	
	stable_sort(vec.begin(), vec.end(), isShorter);
	iter = vec.begin();
	
	while(iter != vec.end())
	{
		cout << *iter << " ";
		iter ++;
	}
	cout << endl;
	
	vector<string>::size_type wc = count_if(vec.begin(), vec.end(), GT6);
	
	vector<string>::iterator ww = find_if(vec.begin(), vec.end(), GT6);
	
	int count = 0;
	while(ww != vec.end())
	{
		count ++;
		ww ++;
	}
	cout << wc << endl;
	cout << count << endl;
	return 0;
}