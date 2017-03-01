#include <iostream>
#include <string>

using namespace std;

class A
{
private:
    //string mes = "class A";
public:
	//virtual string getMes() {return mes;}
    virtual void getMes() {cout << "class A" << endl;}
};

class B:public A
{
private:
    //string myMes = "class B";
public:
	//string getMes() {return myMes;}
    void getMes() {cout << "class B" << endl;}
};

int main()
{
	A first;	
	first.getMes();
	B second;
	second.getMes();
	cout << endl;
	A *pt;
	pt = &first;
	pt->getMes();
	pt = &second;
	pt->getMes();
	pt->A::getMes();
	cout << endl;
}

