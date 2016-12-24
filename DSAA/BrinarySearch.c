//#include "BrinarySearch.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//
//struct TreeNode
//{
//	ElementType Element;
//	SearchTree Left;
//	SearchTree Right;
//};
//
//SearchTree MakeEmpty(SearchTree T)
//{
//	if(T == NULL)
//	{
//		MakeEmpty(T->Left);
//		MakeEmpty(T->Right);
//		free(T);
//	}
//	return NULL;
//}
//
//Position Find(ElementType X, SearchTree T)
//{
//	if(T == NULL)
//		return NULL;
//	if(X < T->Element)
//		return Find(X, T->Left);
//	else
//		if(X > T->Element)
//			return Find(X, T->Right);
//		else
//			return T;
//}
//
//Position FindMin(SearchTree T)
//{
//	if(T == NULL)
//		return NULL;
//	else
//		if(T->Left == NULL)
//			return T;
//		else
//			return FindMin(T->Left);
//}
//
//Position FindMax(SearchTree T)
//{
//	if(T != NULL)
//		while (T->Right != NULL)
//		{
//			T = T->Right;
//		}
//
//	return T;
//}
//
//SearchTree Insert(ElementType X, SearchTree T)
//{
//	if(T == NULL)
//	{
//		//create and return a one-node tree
//		T = (SearchTree)malloc(sizeof(struct TreeNode));
//		if(T == NULL)
//			throw("out of space");
//		else
//		{
//			T->Element = X;
//			T->Left = T->Right = NULL;
//		}
//	}
//	else if(X < T->Element)
//	{
//		T->Left = Insert(X, T->Left);		
//	}
//	else if(X > T->Element)
//	{
//		T->Right = Insert(X, T->Right);
//	}
//	//else X is in the tree already, do nothing
//	return T;
//}
//
//SearchTree Delete(ElementType X, SearchTree T)
//{
//	Position TmpCell;
//	if(T == NULL)
//		throw("Element not found");
//	else if(X < T->Element)  //go left
//		T->Left = Delete(X, T->Left);
//	else if(X > T->Element)  //go right
//		T->Right = Delete(X, T->Left);
//	else  //found element to be deleted 
//	if(T->Left && T->Right) //two children
//	{
//		//replace with smallest in right subtree
//		TmpCell = FindMin(T->Right);
//		T->Element = TmpCell->Element;
//		T->Right = Delete(T->Element, T->Right);
//	}
//	else //one or zero children
//	{
//		TmpCell = T;
//		if(T->Left == NULL)
//			T = T->Right;
//		else if(T->Right == NULL)
//			T = T->Left;
//		free(TmpCell);
//	}
//
//	return T;
//}
//
