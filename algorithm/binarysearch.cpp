#include <iostream>
using namespace std;
//二分查找

template<class Type>
int BinarySearch(Type a[], const Type& x, int n)
{
	int left = 0, right = n - 1;
	while(left <= right)
	{
		int middle = (left + right)/2;
		if(x == a[middle]) return middle;
		if(x > a[middle]) left = middle + 1;
			else right = middle - 1;
	}

	return -1; //unfounded
}

int main(int argc, char const *argv[])
{
	int array[] = {0,1,2,3,4,5,6,7,8,9};

	int example = 5;

	cout << BinarySearch(array, example, 10) << endl;

	return 0;
}