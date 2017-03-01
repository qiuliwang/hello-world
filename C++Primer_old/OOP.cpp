//item sold at an undiscounted price
//derived classes will define various discount strategies

#include <iostream>
#include <string>
using namespace std;

class Item_base
{
public:
	Item_base(const string &book = "", double sales_price = 0):
		isbn(book), price(sales_price) {}
	string book() const {return isbn;}
	//return tatal sales price for a special number of items
	//derived classes will override and apply different discount algorithms
	virtual double net_price(size_t n) const {return n * price;}
	virtual ~Item_base() {}
private:
	string isbn; //identifier for the item
protected:
	double price; //normal undiscounted price
};

//discount kicks in when a specified number of copies of same book are sold
//the discount is expressed as a fraction used to reduce the normal price
class Bulk_item: public Item_base
{
public:
	net_price(size_t) const;
private:
	size_t min_qry; //minimum purchase for discount to apply
	double discount; //fractional discount to apply
};

//if specified number of items are pruchased, use discounted price
double Bulk_item::net_price(size_t cnt) const
{
	if(cnt > min_qry)
		return cnt * (1 - discount) * price;
	else
		return cnt * price;
}

int main()
{
	Item_base A("Gong with Wind", 15);
	cout << A.book() << " $" << A.net_price(3) << endl;
	return 0;
}