#include <iostream>
using namespace std;

int main()
{
	enum Point {first, second = 3, third, forth};

	cout<<first<<" "<<second<<" "<<third<<" "<<forth<<endl;
}