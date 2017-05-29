//WangQL May 27 2017
#include <iostream>

using namespace std;

int main()
{
    int a = 2, b = 3;
    int &ref1 = a, &ref2 = b;
    cout << ref1 << " " << ref2 << endl;
    ref1 = ref2;
    cout << a << " " << b << endl;
    cout << ref1 << " " << ref2 << endl;

    int c = 4, d = 5;
    int *ptr1 = &c, *ptr2 = &d;
    cout << *ptr1 << " " << *ptr2 << endl;
    ptr1 = ptr2;
    cout << c << " " << d << endl;
    cout << *ptr1 << " " << *ptr2 << endl;
}