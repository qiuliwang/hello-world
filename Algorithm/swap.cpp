#include <iostream>
#include <vector>
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
    int a = 1, b = 2;
    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;

    cout << "==========" << endl;
    vector<int> vec1, vec2;
    for(int i = 0; i < 5; i ++)
    {
        vec1.push_back(i);
        vec2.push_back(4 - i);
    }

    printvec(vec1);
    printvec(vec2);

    swap(vec1, vec2);
    printvec(vec1);
    printvec(vec2);

    cout << "==========" << endl;
    cout << vec1.size() << endl;
    vector<int>().swap(vec1);
    //swap(vec1);
    cout << vec1.size() << endl;
}