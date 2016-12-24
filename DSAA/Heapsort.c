#include <stdio.h>
#define LeftChile(i) (2 * (i) + 1)
#define ElementType int

void PercDown(ElementType A[], int i, int N)
{
	int Child;
	ElementType Tmp;

	for(Tmp = A[i]; LeftChile(i) < N; i = Child)
	{
		Child = LeftChile(i);
		if(Child != N - 1 && A[Child + 1] > A[Child])
			Child ++;
		if(Tmp < A[Child])
			A[i] = A[Child];
		else 
			break;
	}
	A[i] = Tmp;
	
}

void Swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void Heapsort(ElementType A[], int N)
{
	int i;
	for(i = N / 2; i >= 0; i --)  //build heap
	{
		PercDown(A, i, N);
		int j;
		for(j = 0; j < N; j ++)
		{
			printf("%d", A[j]);
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	for(i = N - 1; i > 0; i --)
	{
		Swap(&A[0], &A[i]);  //delete max
		PercDown(A, 0, i);
		int j;
		for(j = 0; j < N; j ++)
		{
			printf("%d", A[j]);
			printf(" ");
		}
		printf("\n");
	}
}

int main()
{
	//int numbers[] = {2, 4, 5, 7, 4, 3, 22, 5, 11, 99, 76, 444, 33, 55, 123};
	int numbers[] = {1,3,2,5,4};
	int N = 5;
	//InsertionSort(numbers, N);
	Heapsort(numbers, 5);
	//int i = 0;
	// for(i = 0; i < N; i ++)
	// {
	// 	printf("%d", numbers[i]);
	// 	printf(" ");
	// }
	return 0;
}
