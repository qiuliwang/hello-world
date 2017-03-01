#include <string>
#include <iostream>

using namespace std;

class Sales_item
{
private:
    string name;
	friend void set(Sales_item &item, string str);
public:
	void printName();
	Sales_item():name("not set"){};
};

void set(Sales_item &item, string str)
{
	item.name = str;
	//cout << item.name << str << endl;;
}

void Sales_item::printName()
{
	cout << name << endl;
}

int main()
{
	Sales_item A;
	A.printName();
	set(A, "hello!");
	A.printName();
	return 0;
}