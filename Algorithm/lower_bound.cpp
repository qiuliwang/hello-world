//WangQL May 28 2017
//lower_bound and upper_bound
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
    int num[10] = {1,3,5,6,6,6,10,34,56,78};
    vector<int> vec;
    for(int i = 0; i < 10; i ++)
    {
        vec.push_back(num[i]);
    }

    printvec(vec);

    //lower_bound is >=
    //upper_bound is >
    vector<int>::iterator iter;
    int *ptr;
    iter = lower_bound(vec.begin(), vec.end(), 6);
    cout << *iter << endl;
    iter = upper_bound(vec.begin(), vec.end(), 6);
    cout << *iter << endl;
    iter = lower_bound(vec.begin(), vec.end(), 10);
    cout << *iter << endl;
    iter = upper_bound(vec.begin(), vec.end(), 10);
    cout << *iter << endl;
    ptr = lower_bound(num, num + 10, 6);
    cout << *ptr << endl;
    ptr = upper_bound(num, num + 10, 6);
    cout << *ptr << endl;
    return 0;
    /*
    output:
    1 3 5 6 6 6 10 34 56 78
    6
    10
    10
    34
    6
    10
    */
}