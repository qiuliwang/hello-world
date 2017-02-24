#include <iostream>
using namespace std;

template <typename T>
T abs(const T &var)
{
    return var < 0 ? -var : var;
}

int main()
{
    cout << abs(-2) << endl;
    cout << abs(-3.14) << endl;
    return 0;
}