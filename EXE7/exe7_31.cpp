#include <iostream>
#include <string>

class Sales_item
{
public:
	//operations on Sales_item objects;
	double avg_price() const;
	void setIsbn(std::string str);
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

int main()
{
	Sales_item A;
	A.setIsbn("hereherehere");
	std::cout << A.getIsbn() << std::endl;
	return 0;
}