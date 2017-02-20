#include <iostream>

using namespace std;

class HasPtr
{
public:
	//no pointer to passing a pointer if we're going to copy it anyway
	//store pointer to a copy of the object we're given
	HasPtr(const int &p, int i):ptr(new int(p)), val(i) {}
	//copy members and increment the use count
	HasPtr(const HasPtr &orig):ptr(new int (*orig.ptr)), val(orig.val) {}
	~HasPtr() {delete ptr;}
	//accessors must change to fetch value from Ptr object
	int get_ptr_val() const {return *ptr;}
	int get_int() const {return val;}
	//change the appropriate data member
	void set_ptr(int *p) {ptr = p;}
	void get_int(int i) {val = i;}
	//return or change the value pointed to, so ok for const objs
	int *get_ptr() const {return ptr;}
	void set_ptr_val(int p) const {*ptr = p;}
	
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

	HasPtr A(a, b);
	A.print();
	HasPtr B(A);
	B.print();
	
}