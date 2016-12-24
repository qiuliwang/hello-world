#include <stdio.h>
#define ElementType int

void Shellsort(ElementType A[], int N)
{
	//N是数组长度
	int i, j, Increment;
	ElementType Tmp;

	for(Increment = N; Increment > 0; Increment /= 2)
	{
		for(i = Increment; i < N; i ++)
		{
			Tmp = A[i];
			for(j = i; j >= Increment; j -= Increment)
				if(Tmp < A[j - Increment])
					A[j] = A[j - Increment];
				else
					break;
			
			A[j] = Tmp;
		}
		int i = 0;
		for(i = 0; i < 15; i ++)
		{
			printf("%d", A[i]);
			printf(" ");
		}
		printf("\n");
	}
}

int main()
{
	int numbers[] = {2, 4, 5, 7, 4, 3, 22, 5, 11, 99, 76, 444, 33, 55, 123};
	int N = 5;
	//InsertionSort(numbers, N);
	Shellsort(numbers, 15);
	int i = 0;
	for(i = 0; i < 15; i ++)
	{
		printf("%d", numbers[i]);
		printf(" ");
	}
	return 0;
}