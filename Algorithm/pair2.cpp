/*
* Created by WangQL May 20 2017
*/

#include <iostream>
#include <string>
#include <vector>
//using namespace std;

using namespace std;

int main()
{
    vector< pair<int, string> > vec;
    pair<int, string> pair1;
    for(int i = 0; i < 3; i ++)
    {
        cout << "enter: ";
        string temp;
        cin >> temp;
        pair<int, string> tee(i, temp);
        vec.push_back(tee);
    }

    vector< pair<int, string> >::iterator iter = vec.begin();
    for( ; iter != vec.end(); iter ++)
    {
        cout << iter->first << " : " << iter->second << endl;
    }
}