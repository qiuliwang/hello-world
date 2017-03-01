#include <iostream>
#include "Square.h"
#include "direction.h"

int main(int argc, char const *argv[])
{
	Square A;

	int num = 0;

	Direction dir;
	do{
		char temp;
		cin >> temp;
		num = dir.GetDirection(temp);
		A.move(num);
	}while(num != 5);

	return 0;
}
