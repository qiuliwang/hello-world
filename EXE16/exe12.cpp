#include <iostream>
#include <vector>

using namespace std;

template<class T>
void print(const T a, const T b)
{
    T pt = a;
    for( ; pt != b; pt ++)
    {
        cout << *pt << " ";
    }
    cout << std::endl;
}

int main()
{
    vector<int> vec;
    for(int i = 0; i < 10; i ++)
    {
        vec.push_back(i);
    }
    vector<int>::iterator ite1 = vec.begin();
    vector<int>::iterator ite2 = vec.end();
    print(ite1, ite2);
}