/*
WangQL May 22 2017
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
    int arr[6] = {0,2,2,1,1,4};
    multiset<int> iset(arr, arr + 6);
    
    iset.insert(5);

    cout << "size: " << iset.size() << endl;
    cout << "count '2': " << iset.count(2) << endl;
    multiset<int>::iterator iter = iset.begin();
    for( ; iter != iset.end(); iter ++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    iset.erase(1);
    for(iter = iset.begin() ; iter != iset.end(); iter ++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}