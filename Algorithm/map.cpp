// WangQL May 24 2017

#include <map>
#include <iostream>
#include <string>

using namespace std;

int mymultimap()
{
    /*
    multimap allows repeat keys but map doesn't allow
    */
    multimap<string, int> mymap;
    string str[4] = {"1st", "1st", "3rd", "4th"};
    for(int i = 0; i < 4; i ++)
    {
        mymap.insert(make_pair(str[i], i * 2));
    }

    map<string, int>::iterator iter = mymap.begin();
    for( ; iter != mymap.end(); iter ++)
    {
        cout << iter -> first << " " << iter -> second << endl;;
    }

    return 0;
}

int main()
{
    cout << "multimap:\n";
    mymultimap();
    cout << "map:\n";
    map<string, int> mymap;
    string str[4] = {"1st", "1st", "3rd", "4th"};
    for(int i = 0; i < 4; i ++)
    {
        mymap.insert(make_pair(str[i], i * 2));
    }

    map<string, int>::iterator iter = mymap.begin();
    for( ; iter != mymap.end(); iter ++)
    {
        cout << iter -> first << " " << iter -> second << endl;;
    }

    return 0;
}