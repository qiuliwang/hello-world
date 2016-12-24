#include <stdio.h>
#include <stdlib.h> 

#define ElementType int

//Lpos = start of left half, Rpos = start of right half
void Merge(ElementType A[], ElementType TmpArray[], int Lpos, 
	int Rpos, int RightEnd)
{
	int i, LeftEnd, NumElements, TmpPos;

	LeftEnd = Lpos - 1;
	TmpPos = Lpos;
	NumElements = RightEnd - Lpos + 1;

	//main loop
	while(Lpos <= LeftEnd && Rpos <= RightEnd)
		if(A[Lpos] <= A[Rpos])
			TmpArray[TmpPos++] = A[Lpos++];
		else
			TmpArray[TmpPos++] = A[Rpos++];

	while(Lpos <= LeftEnd)  //copy rest of first half
		TmpArray[TmpPos++] = A[Lpos++];

	while(Rpos <= RightEnd)
		TmpArray[TmpPos++] = A[Rpos++];

	//copy TmpArray back
	for(i = 0; i < NumElements; i++, RightEnd--)
		A[RightEnd] = TmpArray[RightEnd];
}


void MSort(ElementType A[], ElementType TmpArray[], int Left, int Right)
{
	int Center;

	if(Left < Right)
	{
		Center = (Left + Right) / 2;
		MSort(A, TmpArray, Left, Center);
		MSort(A, TmpArray, Center + 1, Right);
		Merge(A, TmpArray, Left, Center + 1, Right);
	}
}

void Mergesort(ElementType A[], int N)
{
	ElementType *TmpArray;

	TmpArray = malloc(N * sizeof(ElementType));
	if(TmpArray != NULL)
	{
		MSort(A, TmpArray, 0, N - 1);
		free(TmpArray);
	}
	else
	{
		printf("No space for array!\n");
	}
}


int main()
{
	int numbers[] = {2, 4, 5, 7, 4, 3, 22, 5, 11, 99, 76, 444, 33, 55, 123};
	int N = 15;
	Mergesort(numbers, 15);
    int i = 0;
	for(i = 0; i < N; i ++)
	{
		printf("%d", numbers[i]);
		printf(" ");
	}
}