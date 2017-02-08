#include <iostream>
#include <iomanip>
using namespace std;

void fix()
{
	double s = 1.23456;
	cout.setf(ios::fixed);
	cout<<setprecision(1)<<s<<endl;

	cout<<setprecision(2)<<s<<endl;

	cout<<setprecision(3)<<s<<endl;

	cout<<setprecision(6)<<s<<endl;

	cout<<setprecision(7)<<s<<endl;

	cout<<setprecision(8)<<s<<endl;
}

void notfix()
{
	double s = 1.23456;
	cout<<setprecision(1)<<s<<endl;

	cout<<setprecision(2)<<s<<endl;

	cout<<setprecision(3)<<s<<endl;

	cout<<setprecision(6)<<s<<endl;

	cout<<setprecision(7)<<s<<endl;

	cout<<setprecision(8)<<s<<endl;
}
int main()
{
		notfix();
	fix();

}