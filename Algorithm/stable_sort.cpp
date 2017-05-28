//WangQL May 28 2071

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool mycmp(int a, int b)
{
    return a < b;
}

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
    int num1[10] = {3,2,1,7,6,5,4,8,9,10};
    int num2[10] = {3,2,1,7,6,5,4,8,9,10};
    for(int i = 0; i < 10; i ++)
    {
        cout << num1[i] << " ";
    }
    cout << endl;
    stable_sort(num1, num1 + 10, mycmp);
    for(int i = 0; i < 10; i ++)
    {
        cout << num1[i] << " ";
    }
    cout << endl;
    cout << "===========" << endl;

    vector<int> vec;
    for(int i = 0; i < 10; i ++)
    {
        vec.push_back(num2[i]);
    }
    printvec(vec);
    stable_sort(vec.begin(), vec.end(), mycmp);
    printvec(vec);
}