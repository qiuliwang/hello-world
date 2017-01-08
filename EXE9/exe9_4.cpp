#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
	deque<int> deq1(10,0);
	deque<int> deq2(10,2);
	list< deque<int> > lst;
	lst.push_back(deq1);
	lst.push_back(deq2);
	
	return 0;
}