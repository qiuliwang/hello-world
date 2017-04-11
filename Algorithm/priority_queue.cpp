#include <iostream>
#include <queue>

using namespace std;
//不能遍历队列
//如果要遍历，只能先销毁队列
int main()
{
    priority_queue<int, vector<int>, less<int> > q1;
    priority_queue<int, vector<int>, greater<int> > q2;

    int number[5] = {3, 2, 1, 4, 5};
    for(int i = 0; i < 5; i ++)
    {
        q1.push(i);
        q2.push(i);
    }

    for(int i = 0; i < 5; i ++)
    {
        cout << q1.top() << " ";
        q1.pop();
    }
    cout << endl;

    for(int i = 0; i < 5; i ++)
    {
        cout << q2.top() << " ";
        q2.pop();
    }
    cout << endl;
}