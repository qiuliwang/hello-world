// #include "linklist.h"
///*_List_H*/
////ElementType
////
////struct Node
////{
////	int Element;
////	Position Next;
////};
//
///* Return true if L is empty */
//
//
//struct Node
//{
//	int Element;
//	Position Next;
//};
//
//int IsEmpty( List L )
//{
//	return L -> Next == NULL;
//}
//
//// Return true if P is the last position in list L 
//// Parameter L is unused in this implementation
//int IsLast( Position P, List L )
//{
//	return P -> Next == NULL;
//}
//
//// Return Position of X in L; NULL if not found
//Position Find( int X, List L )
//{
//	Position P;
//	P = L -> Next;
//	while( P != NULL && P -> Element != X )
//		P = P -> Next;
//	return P;
//}
//
////Delete first occurrence of X from a list
////Assume use of a header node
//void Delete( int X, List L )
//{
//	Position P, TmpCell;
//	P = FindPrevious( X, L );
//	if( !IsLast( P, L ) )  //Assumption of header use
//	{
//		TmpCell = P -> Next;
//		P -> Next = TmpCell -> Next;
//		free( TmpCell );
//	}
//}
//
//// If X is not found, then Next field of returned Position is NULL
//// Assumes a header
//Position FindPrevious( int X, List L)
//{
//	Position P;
//	P = L;
//	while( P -> Next != NULL && P -> Next -> Element != X )
//		 P = P -> Next;
//
//	return P;
//}
//
////Insert (after legal position P) Hdader implement assumed
////Parameter L is unused in this implementation
//void Insert( int X, List L, Position P )
//{
//	Position TmpCell;
//	TmpCell = malloc(sizeof(struct Node));
//	if( TmpCell == NULL )
//	{
//		printf("Out of space\n");//( "Out of space!!!" );
//	}
//	else
//	{
//		TmpCell -> Element = X;
//		TmpCell -> Next = P -> Next;
//		P -> Next = TmpCell;
//	}
//}
//
////add a List to the end
//void Append(List L, int X)
//{
//	Position P;
//	P = L;
//	if(P -> Next != NULL)
//	{
//		P = P -> Next;
//	}
//	Position TmpCell = malloc(sizeof(struct Node));
//	P -> Next = TmpCell;
//	TmpCell -> Next = NULL;
//	TmpCell -> Element = X;
//}
//
////caculate the size
//int Size(List L)
//{
//	Position P = L;
//	int count = 0;
//	while(P -> Next != NULL)
//	{
//		P = P -> Next;
//		count ++;
//	}
//}
