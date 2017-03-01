#include <string>
#include <iostream>

using namespace std;

class Sales_item
{
public:
	friend class Add;
	float getPrice();
	Sales_item(float pri){ price = pri; }
private:
	float price;
};

float Sales_item::getPrice()
{
	return price;
}

class Add
{
public:
	float getTwo(Sales_item&, Sales_item&);
};

float Add::getTwo(Sales_item& a, Sales_item& b)
{
	return a.price + b.price;
}

int main()
{
	Sales_item A(10);
	Sales_item B(5);
	cout << A.getPrice() << " " << B.getPrice() << endl;

	Add add;
	cout << "we get: " << add.getTwo(A, B) << endl;

	return 0;
}