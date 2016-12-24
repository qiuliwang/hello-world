#include <iostream>

using namespace std;

class Node
{
public:
	int X;
	Node *Next;
	void SetX(int);
	void printX();
	void printNext();
};

void Node::SetX(int i)
{
	X = i;
}

void Node::printX()
{
	cout << X << endl;
}

void Node::printNext()
{
	if(Next != NULL)
	{
		cout << Next->X << endl;
	}
}


void linkNode(Node &A, Node &B)
{
	A.Next = &B;
}

int main()
{
	Node A;
	Node B;
	A.SetX(1);
	B.SetX(2);
	A.Next = &B;
	A.Next->printX();
	linkNode(A, B);
	A.Next->printX();
	//system("pause");
	return 0;
}