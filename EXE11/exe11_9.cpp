#include <iostream>
#include <string>
#include <numeric>
#include <vector>

using namespace std;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

bool GT4(const string &s)
{
	return s.size() > 4;
}

int main()
{
	vector<string> words;
	string enter;
	cin >> enter;
	while(enter != "##")
	{
		words.push_back(enter);
		cin >> enter;
	}
	
	sort(words.begin(), words.end());
	vector<string>::iterator unique_iter = unique(words.begin(), words.end());
	words.erase(unique_iter, words.end());
	
	stable_sort(words.begin(), words.begin(), isShorter);
	vector<string>::size_type wc = count_if(words.begin(), words.end(), GT4);
	cout << "words length grater than 4: " << wc << endl;
	vector<string>::iterator iter = words.begin();
	while(iter != words.end())
	{
		cout << * iter << endl;
		iter ++;
	}
	return 0;
}