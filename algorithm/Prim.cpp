#include <iostream> 
#define maxint 100

using namespace std;

template<class Type>
void Prim(int n, Type **c)
{
	Type lowcost[maxint];
	int closest[maxint];
	bool s[maxint];
	s[1] = true;
	for(int i = 2; i <= n; i ++)
	{
		lowcost[i] = c[1][i];
		closest[i] = 1;
		s[i] = false;
	}

	for(int i = 1; i <=n; i ++)
	{
		Type min = inf;
		int j = 1;
		for(int k = 2; k <= n; k ++)
		{
			if((lowcost[k] < min) && (!s[k]))
			{
				min = lowcost[k];
				j = k;
			}
		}
		cout << j << ' ' << closest[j] << endl;
		s[j] = true;

		for(int k = 2; k <= n; k ++)
		{
			if((c[j][k] < lowcost[k]) && (!s[k]))
			{
				lowcost[k] = c[j][k];
				closest[k] = j;
			}
		}
	}
}