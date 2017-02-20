#include <iostream>

using namespace std;

class HasPtr
{
public:
	HasPtr(int *p, int i):ptr(p), val(i) {}
	//const members to return the value of the indicated data member
	int *get_ptr() const {return ptr;}
	int get_int() const {return val;}
	//non const members to change the indicated data member
	void set_ptr(int *p) {ptr = p;}
	void set_int(int i) {val = i;}
	//return or change the value pointed to, so ok for const objects
	int get_ptr_val() const {return *ptr;}
	void set_ptr_val(int val) const {*ptr = val;}
	
	void print()
	{
		cout << *ptr << " " << val << endl;
	}
private:
	int *ptr;
	int val;
};

int main()
{
	int a = 2;
	int b = 3;
	int c = 23;
	HasPtr A(&a, b);
	A.print();
	HasPtr B(A);
	B.print();
	B.set_ptr_val(34);
	A.print();
	B.print();
	
	B.set_ptr(&c);
	A.print();
	B.print();
}