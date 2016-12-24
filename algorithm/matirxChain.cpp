#include <iostream>
using namespace std;

void MatrixChain(int *p, int n, int **m, int **s)
{
	for(int i = 1; i <= n; i ++) m[i][i] = 0;
	cout << "here" << endl;
	for(int r = 2; r <= n; r ++)
		for(int i = 1; i <= n - r + 1; i ++)
	    {
	    	int j = i + r - 1;
			m[i][j] = m[i + 1][j] + p[i - 1] * p[i] * p[j];
			s[i][j] = i;
			for(int k = i + 1; k < j; k ++)
			{
				int t = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
				if(t < m[i][j])
				{
					m[i][j] = t;
					s[i][j] = k;
				}
			}
	    }
}

int main()
{
	int p[] = {30, 35, 15, 5, 10, 20, 25};
	int n, **m, **s;
	n = 6;
	MatrixChain(p, n, m, s);
	
	return 0;
}