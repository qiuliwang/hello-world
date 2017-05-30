//WangQL May 28 2017

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num[10] = {1,3,5,6,6,6,10,34,56,78};
    cout << binary_search(num, num + 10, 7) << endl;
    cout << binary_search(num, num + 10, 6) << endl;
    /*
    output:
    0
    1
    */
}