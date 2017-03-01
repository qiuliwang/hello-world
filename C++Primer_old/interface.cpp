#include <iostream>

using namespace std;

//class A
//{
//public:
//	void getMes1() {cout << "A public" << endl;}
//	int a;
//private:
//	void getMes2() {cout << "A private" << endl;}
//	int b;
//protected:
//	void getMes3() {cout << "A private" << endl;}
//	int c;
//};
//
//class B:private A
//{
//	
//};
//

class A
{
public:
	A(int i, int j):first(i), second(j) { }
	//virtual int getCal(){return first - second;}
    int getCal(){return first - second;}
	int first;
	int second;
};

class B: public A
{
public:
	B(int i, int j):A(i, j){ }
	int getCal(){return first + second;}
};

class C:public A
{
public:
	C(int i, int j):A(i, j){ }
	int getCal(){return first * second;}
};

int main()
{
	A wowow(1,2);
	B hahah(1,2);
	C heheh(1,2);
	cout <<	wowow.getCal() << endl;
	cout <<	hahah.getCal() << endl;
	cout <<	heheh.getCal() << endl;	
}