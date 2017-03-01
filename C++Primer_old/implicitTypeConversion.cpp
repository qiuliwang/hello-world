#include <iostream>

using namespace std;

class Rational
{
public:
	Rational(){}
	Rational(int a):number(a) {}
	void print(){cout << number << endl;}
	const Rational operator*(const Rational& rhs) const;
private:
	int number;
};

const Rational Rational::operator*(const Rational& rhs) const
{
	int temp = this->number * rhs.number;
	return Rational(temp);
}

int main()
{
	Rational A(3);
	Rational B(5);
	Rational C = A * 3;
	C.print();
}