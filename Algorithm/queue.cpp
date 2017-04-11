#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> M;
    cout << M.empty() << endl;

    for(int i = 0; i < 5; i ++)
    {
        M.push(i);
    }
    cout << M.size() << endl;

    for(int i = 0; i < 5; i ++)
    {
        cout << M.front() << " ";
        M.pop();
    }
    cout << endl << M.size() << endl;
}