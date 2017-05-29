//WangQL May 29 2017
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void printnum(int *num, int length)
{
    for(int i = 0; i < length; i ++)
    {
        cout << *num << " ";
        num ++;
    }
    cout << endl;
}

int main()
{
    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    printnum(num, 10);
    random_shuffle(num, num + 5);
    printnum(num, 10);
}