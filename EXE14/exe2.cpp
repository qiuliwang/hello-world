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
	friend void getIsbn(Sales_item &a, istream &is);
	
	Sales_item& operator+=(const Sales_item&);
	
	void print()
	{
		cout << isbn << " " << units_sold << " " << revenue << endl;
	}
	
private:
	string isbn;
	unsigned units_sold;
	double revenue;
	
	friend istream& operator>>(istream&, Sales_item&);
	friend ostream& operator<<(ostream&, Sales_item&);
};

Sales_item operator+(const Sales_item &rhs1, const Sales_item &rhs2)
{
	Sales_item temp = rhs1;
	temp += rhs2;
	
	return temp;
}

Sales_item& Sales_item::operator+=(const Sales_item &rhs)
{
	if(isbn != rhs.isbn)
	{
		cout << "not the same book" << endl;
	}
	else
	{
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
	}
	return *this;
}

istream& operator>>(istream& cin, Sales_item &rhs)
{
	cin >> rhs.isbn >> rhs.units_sold >> rhs.revenue;
	return cin;
}

ostream& operator<<(ostream& cout, Sales_item &rhs)
{
	cout << rhs.isbn << " " << rhs.units_sold << " " << rhs.revenue << endl;
	return cout;
}

void add(Sales_item &a, Sales_item &b)
{
	cout << a.units_sold + b.units_sold << endl;
}

void getIsbn(Sales_item &a, istream &is)
{
	cout << "is " << a.isbn << endl;
	cin >> a.isbn;
	cout << "is" << a.isbn << endl;
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
	Sales_item B("A", 5, 23.0);
	//add(A, B);
	//getIsbn(A, cin);
	A.print();
	B.print();
	A+=B;
	A.print();
	Sales_item C = A + B;
	C.print();
	cin >> C;
	cout << C;
}