#include <iostream>
#include <string>

using namespace std;

class Sales_item
{
public:
	inline double avg_price() const;
	
	bool same_isbn(const Sales_item &rhs) const
	{
		return isbn == rhs.isbn;
	}
	
	Sales_item():units_sold(0), revenue(0.0) {}
	Sales_item(string isb, unsigned untis, double reven)
		:isbn(isb), units_sold(untis), revenue(reven) {}
	
	friend void add(Sales_item &a, Sales_item &b);
	
private:
	string isbn;
	unsigned units_sold;
	double revenue;
};

void add(Sales_item &a, Sales_item &b)
{
	cout << a.units_sold + b.units_sold << endl;
}

inline double Sales_item::avg_price() const
{
	if(units_sold)
		return revenue / units_sold;
	else
		return 0;
}

int main()
{
	Sales_item A("A", 4, 33.0);
	Sales_item B("C", 5, 23.0);
	add(A, B);
}