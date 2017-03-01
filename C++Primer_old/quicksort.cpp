#include <iostream>

using namespace std;

//快排序

template <class Type>
inline void Swap(Type &a, Type&b)
{
	Type temp = a; a = b; b = temp;
}

template <class Type>
int Partition(Type a[], int p, int r)
{
	int i = p, j = r + 1;
	Type x = a[p];
	//将<x的元素交换到左边区域
	//将>x的元素交换到右边区域
	while(true)
	{
		while(a[++i] < x && i < r);
		while(a[--j] > x);
		if(i >= j) break;
		Swap(a[i], a[j]);
	}
	a[p] = a[j];
	a[j] = x;
	return j;
}

template <class Type>
void QuickSort(Type a[], int p, int r)
{
	if(p < r)
	{
		int q = Partition(a, p, r);
		QuickSort(a, p, q - 1);
		QuickSort(a, q + 1, r);
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	int numbers[] = {0,6,7,8,4,1,3,2,9,5};
	QuickSort(numbers, 0, 9);

	for(int i = 0; i < 10; i ++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	return 0;
}