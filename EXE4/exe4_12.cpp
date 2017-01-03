#include <iostream>
using namespace std;

int main()
{
	int a = 2;
	int *pt = &a;
	cout << pt << " " << *pt << " " << &pt << endl;
	int *pt2 = NULL;
}