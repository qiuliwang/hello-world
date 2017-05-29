//WangQL May 29 2017

#include <iostream>
#include <cstring>
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
     int num[10] = {1,2,3,4,5};
     sort(num, num + 3);
     int *first =  num;
     int *last = num + 3;
     do {
         printnum(num, 3);
     }while(next_permutation(first, last));
     return 0;
}