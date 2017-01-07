#include "sales_item.h"
#include <iostream>

using namespace std;

int main()
{
	Sales_item A;
	A.setIsbn("hello again~");
	cout << A.getIsbn() << endl;
	
	Sales_item B(23);
	Sales_item C(34);
	cout << B.getRevenue() << endl;
	cout << C.getRevenue() << endl;
	
	return 0;
}