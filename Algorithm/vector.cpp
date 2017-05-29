//WangQL Mar 29 2017
#include <iostream>
#include <vector>

using namespace std;

void printvec(vector<int> vec)
{
    vector<int>::iterator iter = vec.begin();
    while(iter != vec.end())
    {
        cout << *iter << " ";
        iter ++;
    };
    cout << endl;
}

int main()
{
    vector<int> vec;
    for(int i = 0; i < 3; i ++)
    {
        vec.push_back(i);
    }
    cout << "original:";
    printvec(vec);
    cout << "size:" << vec.size() << endl;

    vec.pop_back();
    cout << "original:";
    printvec(vec);
    cout << "size:" << vec.size() << endl;

    vector<int>::iterator iter = vec.begin();
    iter ++;
    cout << vec.at(1) << endl;

    vec.resize(5);
    cout << "size:" << vec.size() << endl;
}