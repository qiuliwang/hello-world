#ifndef _BinHeap_H

struct HeapStruct;
typedef struct HeapStruct *PriorityQueue;
typedef int ElementType;
#define MinPQSize 20

PriorityQueue Initialize(int MaxElements);
void Distory(PriorityQueue H);
void MakeEmpty(PriorityQueue H);
void Insert(ElementType X, PriorityQueue H);
ElementType DeleteMin(PriorityQueue H);
ElementType FindMin(PriorityQueue H);
int IsEmpty(PriorityQueue H);
int IsFull(PriorityQueue H);

#endif