//#include "BinHeap.h"
//#include <stdlib.h>
//
//#define MinData 0;
//
//struct HeapStruct
//{
//	int Capacity;
//	int Size;
//	ElementType *Elements;
//};
//
//PriorityQueue Initialize(int MaxElements)
//{
//	PriorityQueue H;
//	if(MaxElements < MinPQSize)
//		throw("priority tree is too small");
//	H = (PriorityQueue)malloc(sizeof(struct HeapStruct));
//	if(H == NULL)
//		throw("out of space");
//
//	//allocate the array plus one extra for sentinel
//	H->Elements = (int *)malloc((MaxElements + 1) * sizeof(ElementType));
//	if(H->Elements == NULL)
//		throw("out of space");
//
//	H->Capacity = MaxElements;
//	H->Size = 0;
//	H->Elements[0] = MinData;
//
//	return H;
//}