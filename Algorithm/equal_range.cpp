//WangQL May 29 2017
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void printvec(vector<int> vec)
{
    vector<int>::iterator iter = vec.begin();
    for(; iter != vec.end(); iter ++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    int num[10] = {1,3,5,6,6,6,10,6,56,78};
    vector<int> vec;
    for(int i = 0; i < 10; i ++)
    {
        vec.push_back(num[i]);
    }
    printvec(vec);

    pair< vector<int>::iterator, vector<int>::iterator > res;
    res = equal_range(vec.begin(), vec.end(), 6);
    cout << *res.first << " " << *res.second << endl;

    
}