//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//#include "AvlTree.h"
//
//struct AvlNode
//{
//	ElementType Element;
//	AvlTree Left;
//	AvlTree Right;
//	int Height;
//};
//
//static int Height(Position P)
//{
//	if(P == NULL)
//		return -1;
//	else 
//		return P->Height;
//}
//
//AvlTree Insert(ElementType X, AvlTree T)
//{
//	if(T == NULL)
//	{
//		//create and return a one-node tree
//		T = (AvlTree)malloc(sizeof(struct AvlNode));
//		if(T == NULL)
//			throw("out of space");
//		else
//		{
//			T->Element = X; T->Height = 0;
//			T->Left = T->Right = NULL;
//		}
//	}
//	else if(X < T->Element)
//	{
//		T->Left = Insert(X, T->Left);
//		if(Height(T->Left) - Height(T->Right) == 2)
//			if(X < T->Left->Element)
//				//T = SingleRotateWithLeft(T);
//			else 
//				//T = DoubleRotateWithLeft(T);
//	}
//}
//
