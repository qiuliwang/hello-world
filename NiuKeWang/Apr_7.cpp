#include <iostream>
#include <algorithm>

#define MAX 1000
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;
    int mx[MAX] = {0};
    for(int i = 0; i < m; i ++)
    {
        int temp;
        cin >> temp;
        mx[i] = temp;
    }
    sort(mx, mx + m);
    int res = 0;
    int sign = 1000000;
    for(int i = 0; i < m; i ++)
    {
        int peoples = m - i;
        int inner = mx[i] * peoples;
        if(inner > res)
        {
            res = inner;
            if(mx[i] < sign)
                sign = mx[i];
        }
    }
    
    cout << sign << endl;
}