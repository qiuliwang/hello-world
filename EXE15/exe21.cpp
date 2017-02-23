#include <iostream>
#include <string>

using namespace std;

class A
{
private:
    int a;
public:
    A(int x = 2):a(x) { cout << "A" << endl; }
    void print()
    {
        cout << a << endl;
    }
};

class B:public A
{
private:
    double b;
public:
    B(double x = 2.3):b(x) { cout << "B" << endl; }
    void getB()
    {
        cout << b << endl;
    }
};

int main()
{
    A a(4);
    //a.print();
    B b(4.3);
    A *ptr = &a;
    ptr -> print();
    //b.getB();
    //b.print();
    ptr = &b;
    ptr -> print();
    //ptr -> getB();

    B *pt = &b;
    pt -> getB();
}