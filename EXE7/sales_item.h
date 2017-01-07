#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>

class Sales_item
{
public:
	//operations on Sales_item objects;
	Sales_item()
	{ std::cout << "new Sales" << std::endl; }
	
	Sales_item(double rev):revenue(rev)
	{ std::cout << "new Sales" << std::endl; }
	
	double avg_price() const;
	void setIsbn(std::string str);
	double getRevenue();
	std::string getIsbn();
	bool same_isbn(const Sales_item &rhs) const
	{
		return isbn == rhs.isbn;
	}
	
private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};

double Sales_item::getRevenue()
{
	return revenue;
}

std::string Sales_item::getIsbn()
{
	return isbn;
}

void Sales_item::setIsbn(std::string str)
{
	isbn = str;
}

double Sales_item::avg_price() const
{
	if(units_sold)
	{
		return revenue / units_sold;
	}
	else
	{
		return 0;
	}
}

#endif