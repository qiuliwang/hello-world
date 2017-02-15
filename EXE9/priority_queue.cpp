#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int len = 6;
	priority_queue<int> qi;
	priority_queue<int, vector<int>, greater<int> > pq;
	
	int a[6] = {3, 5, 9, 4, 2, 7};
	for(int i = 0; i < len; i ++)
	{
		qi.push(a[i]);
		pq.push(a[i]);
	}

	for(int i = 0; i < len; i ++)
	{
		cout << qi.top() << " ";
		qi.pop();
	}
	cout << endl;
	for(int i = 0; i < len; i ++)
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
	return 0;
}