#include <iostream>
using namespace std;

//private class for use by HasPtr only
class U_Ptr
{
	friend class HasPtr;
	int *ip;
	size_t use;
	U_Ptr(int *p):ip(p), use(1) {}
	~U_Ptr(){delete ip;}
};

//smart pointer class: takes owenership of the dynamically allocated 
//object to which it is bound
//User code must dynamically allocate an object to initialize a HasPtr
//and must not delete that object; the HasPtr class will delete it
class HasPtr
{
public:
	//hasPtr owns the pointer; p must have been dynamically allocated
	HasPtr(int *p, int i):ptr(new U_Ptr(p)), val(i) {}
	//copy members and increment the use count
	HasPtr(const HasPtr &orig):ptr(orig.ptr), val(orig.val) {++ptr->use;}
	HasPtr& operator=(const HasPtr&);
	//if use count goes to zero, delete the U_Ptr object
	~HasPtr() {if(--ptr->use == 0) delete ptr; cout << "distructor" << endl;}

	//copy control and constructors as before
	//accessors must change to fetch value from U_Ptr object
	int *get_ptr() const {return ptr->ip;}
	int get_int() const {return val;}
	//change the appropriate data member
	void set_ptr(int *p) {ptr->ip = p;}
	void set_int(int i) {val = i;}
	//return or change the value pointed to, so ok for const objects
	//note: *ptr->ip is equivalent to *(ptr->ip)
	int get_ptr_val() const {return *ptr->ip;}
	void set_ptr_val(int i) {*ptr->ip = i;}
	
private:
	U_Ptr *ptr;
	int val;
};

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
	++rhs.ptr->use;
	if(--ptr->use == 0)
		delete ptr;
	ptr = rhs.ptr;
	val = rhs.val;
	return *this;
}



int classhasptr()
{
	// int obj = 123;
	// HasPtr ptr1(&obj, 42);
	// HasPtr ptr2(ptr1);
	// cout << *ptr1.get_ptr() << endl;
	// cout << ptr1.get_int() << endl;
	// cout << *ptr2.get_ptr() << endl;
	// cout << ptr2.get_int() << endl << endl;

	// obj = 321;
	// cout << *ptr1.get_ptr() << endl;
	// cout << *ptr2.get_ptr() << endl << endl;

	// // int obj2 = 555;
	// // ptr1.set_ptr(&obj2);
	// ptr1.set_ptr_val(444);
	// cout << *ptr1.get_ptr() << endl;
	// cout << *ptr2.get_ptr() << endl << endl;
	int obj = 123;
	int number = 321;
	HasPtr A(&obj, number);
	HasPtr B(A);
	HasPtr C = A;
	cout << A.get_int() << endl;
	cout << A.get_ptr_val() << endl;
	cout << B.get_int() << endl;
	cout << B.get_ptr_val() << endl;	
	cout << C.get_int() << endl;
	cout << C.get_ptr_val() << endl << endl;
	
	A.set_ptr_val(333);

	cout << A.get_int() << endl;
	cout << A.get_ptr_val() << endl;
	cout << B.get_int() << endl;
	cout << B.get_ptr_val() << endl;	
	cout << C.get_int() << endl;
	cout << C.get_ptr_val() << endl << endl;

	A.~HasPtr();
	cout << A.get_ptr_val() << endl;
	cout << B.get_int() << endl;
	cout << B.get_int() << endl;
	cout << B.get_ptr_val() << endl;	
	cout << C.get_int() << endl;
	cout << C.get_ptr_val() << endl << endl;

	return 0;
}