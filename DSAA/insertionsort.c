#include <stdio.h>
#define ElementType int
//插入排序
void InsertionSort(ElementType A[], int N)
{
	int j, P;
	ElementType Tmp;
	for(P = 1; P < N; P ++)
	{
		Tmp = A[P];
		for(j = P; j > 0 && A[j - 1] > Tmp; j --)
		{
			A[j] = A[j - 1];
		}
		A[j] = Tmp;
	}
}

int main()
{
	int numbers[] = {2, 4, 5, 7, 4, 3, 22, 5, 11, 99, 76, 444, 33, 22};
	int N = 14;
	InsertionSort(numbers, N);
	int i = 0;
	for(i = 0; i < 14; i ++)
	{
		printf("%d", numbers[i]);
		printf(" ");
	}
	return 0;
}