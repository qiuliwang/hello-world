cd #include <string>
#include <iostream>

using namespace std;

class Account
{
private:
	static int rate;
public:
	Account() { cout << rate ++ << endl; }
};

int Account::rate = 0;

int main()
{
	Account A;
	Account B;
	Account C;
	return 0;
}