/*
* WangQL
* 2017 5 4
*/
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> sta;

    cout << "size: " << sta.size() << endl;

    for(int i = 0; i < 5; i ++)
    {
        sta.push(i);
    }

    cout << "size: " << sta.size() << endl;

    for(int i = 0; i < 5; i ++)
    {
        cout << "top: " << sta.top() << endl;
        sta.pop();
    }

    return 0;

}