#include <string>
#include <iostream>

using namespace std;

class Sales_item
{
public:
	//friend class Add;
	friend void setName::setItemName(Sales_item&, string);
	float getPrice();
	string getName();
	Sales_item(float pri){ price = pri; }
private:
	float price;
	string name;
};

float Sales_item::getPrice()
{
	return price;
}

string Sales_item::getName()
{
	return name;
}

// class setName
// {
// public:
// 	void setItemName(Sales_item&, string);
// };

// void setName::setItemName(Sales_item& item, string temp)
// {
// 	item.name = temp;
// 	cout << "succeed" << endl;
// }

// int main()
// {
// 	Sales_item A;
// 	setName B;
// 	B.setItemName(A, "phone");
// 	cout << A.getName << endl;
// 	return 0;
// }