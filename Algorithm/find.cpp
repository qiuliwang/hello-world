// WangQL Jun 1 2017
#include <iostream>
#include <algorithm>
#include <vector>

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
    int num[10] = {1,2,3,4,5,6,7,8,0,11};
    vector<int> vec;
    for(int i = 0; i < 10; i ++)
    {
        vec.push_back(num[i]);
    }

    printvec(vec);

    vector<int>::iterator iter;
    iter = find(vec.begin(), vec.end(), 3);
    if(iter == vec.end())
        cout << "did not find." << endl;
    else
        cout << *iter << " is found." << endl;

    iter = find(vec.begin(), vec.end(), 9);
    if(iter == vec.end())
        cout << "did not find." << endl;
    else
        cout << *iter << " is found." << endl;

    int *ans = 0;
    ans = find(num, num + 10, 9);
    if(ans == 0)
        cout << "failed." << endl;
    else
        cout << *ans << endl;
}