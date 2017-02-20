#include <iostream>

using namespace std;

class HasPtr;
//smart pointers class
class U_Ptr
{
	friend class HasPtr;
	int *ip;
	size_t use;
	U_Ptr(int *p):ip(p), use(1) {}
	~U_Ptr() { delete ip;}
};

class HasPtr
{
public:
	//HasPtr owns the pointer; p must have been dynamically allocated
	HasPtr(int *p, int i):ptr(new U_Ptr(p)), val(i) {}
	//copy members and increment the use count
	HasPtr(const HasPtr &oirg):ptr(oirg.ptr), val(oirg.val) {++ ptr->use;}
	//if use count goes to zero, delete the U_Ptr obj
	HasPtr& operator=(HasPtr const &rhs)
	{
	   ++ rhs.ptr->use;
	   if(--ptr->use == 0)
	   {
		   delete ptr;
	   }
	   ptr = rhs.ptr;
	   val = rhs.val;
	   return *this;
	}
	~HasPtr() 
		{
			if(-- ptr->use == 0) 
			{
				cout << "delete" << endl;
				delete ptr;
			}
			else
			{
				cout << "not deleted" << endl;
			}
		}
	
	void print()
	{
		cout << *ptr->ip << " " << val << endl;
	}
private:
	U_Ptr *ptr;
	int val;
};


int main()
{
	int a = 2;
	int b = 3;

	HasPtr A(&a, b);
	A.print();
	HasPtr B(A);
	B.print();
	
}