#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main()
{
	bitset<16> bt0(0xffff);
	bitset<32> bt1(0xffff);
	bitset<64> bt2(0xffff);
	cout << bt0 << endl << bt1 << endl << bt2 << endl;
	
	string str("1100");
	bitset<32> bt4(str);
	cout << bt4 << endl;
}