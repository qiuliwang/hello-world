#include <iostream>
using namespace std;

class Sales_item
{
private:
	double price;
public:
	Sales_item(double i):price(i) {cout << "create " << i <<endl;}
	double getPrice() {return price;}
	friend istream& operator >> (istream&, Sales_item&);
	friend ostream& operator << (ostream&, Sales_item&);
	friend Sales_item operator + (const Sales_item& first, const Sales_item& second);
	Sales_item& operator += (const Sales_item& second);
};

Sales_item& Sales_item::operator += (const Sales_item& second)
{
	price += second.price;
	return *this;
}

istream& operator >> (istream&, Sales_item& obj)
{
	cout << "Enter the prive:";
	double pri;
	cin >> pri;
	obj.price = pri;
	return cin;
}

ostream& operator << (ostream&, Sales_item& obj)
{
	cout << obj.price << endl;
	return cout;
}

Sales_item operator + (const Sales_item& first, const Sales_item& second)
{
	Sales_item ret(first);
	ret.price += second.price;
	return ret;
}

int main()
{
	Sales_item A(10);
	cout << A;
	//cin >> A;
	//cout << A;
	Sales_item B(33);
	Sales_item C = A + B;
	cout << C;
	C += A;
	cout << C;
	//system("pause");
}

