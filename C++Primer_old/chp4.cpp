#include <iostream>
#include <string>

class Item_base
{
public:
	Item_base(const std::string &book = "",
				double sales_price = 0.0):
					isbn(book), price(sales_price) {}
	
	std::string book() const {return isbn;}
	
	virtual double net_price(std::size_t n) const
		{return n * price;}
	
	virtual ~Item_base() {}

private:
	std::string isbn; //identifier for the item

protected:
	double price;     //undiscounted price
};

//derivation
class Bulk_item: public Item_base
{
public:
	double net_price(std::size_t) const;

	Bulk_item(const std::string& book, double sales_price,
				std::size_t qty = 0, double disc_rate = 0):
				Item_base(book, sales_price), min_qty(qty), discount(disc_rate) {}

private:
	std::size_t min_qty; //minimum purchase for discount to apply

	double discount;     //fractional discount apply
};

double Bulk_item::net_price(size_t cnt) const
{
	if(cnt >= min_qty)
		return cnt * (1 - discount) * price;
	else 
		return cnt * price;
}

void print_total(std::ostream &os, const Item_base &item, size_t n)
{
	os << "ISBN " << item.book() //calls Item_base::book
		<< "\tnumber sold: " << n << "\ttotal price: "
		//virtual call:which version of net_price to call is resolved at run time
		<< item.net_price(n) << std::endl;
}


//refactoring
//class to hold discount rate an quantity
//derived classes will implement pricing strategies using these data
class Disc_item::public Item_base
{
public:
	Disc_item(const std::string& book = "", double sales_price = 0,
				std::size_t qty = 0, double disc_rate = 0):
					Item_base(book, sales_price), quantity(qty), discount(disc_rate){}
protected:
	std::size_t quantity;  //pruchase size for discount to apply 
	double discount;	   //fractional discount to apply
};

//discount kicks in when a specified number of copies of same book are sold
//the discount is expressed as a fraction to use to reduce the narmal price
class Bulk_item:public Disc_item
{
public:
	Bulk_item(const std::string& book = "", double sales_price = 0,
				std::size_t qty = 0, double disc_rate = 0):
				Disc_item(book, sales_price, qty, disc_rate) {}
	//redefines base version so as to implement bulk purchase discount policy
	double net_price(std::size_t) const;
};

int ch4()
{
	
	// Item_base A("Gone with Wind", 20);
	// std::cout << A.book() << " " << A.net_price(2) << std::endl;
	// Bulk_item B;
	// std::cout << B.book() << " " << B.net_price(2) << std::endl;
	//Item_base base("Gone with Wind", 20);

	//Bulk_item derived("Machine Learning", 40, 5, 0.2);

	//print_total makes a virtual call to net_price

	//print_total(std::cout, base, 10);
	//print_total(std::cout, derived, 4);

	return 0;
}