#include <iostream>
#include <ostream>
#include <string>

using namespace std;

template <typename T>
void ostep(ostream &os, const T &var)
{
    os << var << std::endl;
}

int main()
{
    string x = "abc";
    int y = 2;
    double z = 3.35;
    //ostream os;
    ostep(cout, x); 
    ostep(cout, y);
    ostep(cout, z);

}