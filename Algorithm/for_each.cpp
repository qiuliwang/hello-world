//WangQL May 27 2017

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printValue(int& elem)
{
    cout << elem << " ";
}

int main()
{
    int num[9] = {3,2,1,7,6,5,4,8,9};
    vector<int> vec;
    for(int i = 0; i < 9; i ++)
    {
        vec.push_back(num[i]);
    }

    //for_each
    for_each(vec.begin(), vec.end(), printValue);
    cout << endl;
}