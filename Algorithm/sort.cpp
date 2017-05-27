#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
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
    int num[10] = {3,2,1,6,5,4,9,7,8,10};
    for(int i = 0; i < 10; i ++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    sort(num, num + 10, compare);
    for(int i = 0; i < 10; i ++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    cout << "==========" << endl;
    vector<int> vec;
    for(int i = 0; i < 10; i ++)
    {
        vec.push_back(i);
    }

    printvec(vec);
    sort(vec.begin(), vec.end(), compare);
    printvec(vec);
    return 0;
}