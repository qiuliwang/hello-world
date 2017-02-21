#include <iostream>
#include <vector>
#include <string>

using namespace std;

class CheckoutRecord
{
public:
	CheckoutRecord():book_id(2), title("great"){}
	friend ostream& operator<<(ostream& ot, const CheckoutRecord& cr);
private:
	double book_id;
	string title;
};

ostream& operator<<(ostream& ot, const CheckoutRecord& cr)
{
	ot << cr.book_id << " " << cr.title << endl;
	return ot;
}

int main()
{
	CheckoutRecord A;
	cout << A;
}