/*
Created by WangQL on May 24 2017
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> mylist;
    for(int i = 0; i < 5; i ++)
    {
        mylist.push_back(i);
        mylist.push_front(i);
    }

    list<int>::iterator iter = mylist.begin();
    for( ; iter != mylist.end(); iter ++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    mylist.sort();
    iter = mylist.begin();
    for( ; iter != mylist.end(); iter ++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}