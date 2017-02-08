/*
题目描述
ss请cc来家里钓鱼，鱼塘可划分为n＊m的格子，每个格子有不同的概率钓上鱼，cc一直在坐标(x,y)的格子钓鱼，而ss每分钟随机钓一个格子。问t分钟后他们谁至少钓到一条鱼的概率大？为多少？

输入描述:
第一行五个整数n,m,x,y,t(1≤n,m,t≤1000,1≤x≤n,1≤y≤m);
接下来为一个n＊m的矩阵，每行m个一位小数，共n行，第i行第j个数代表坐标为(i,j)的格子钓到鱼的概率为p(0≤p≤1)

输出描述:
输出两行。第一行为概率大的人的名字(cc/ss/equal),第二行为这个概率(保留2位小数)

输入例子:
2 2 1 1 1
0.2 0.1
0.1 0.4

输出例子:
equal
0.20
*/
//
// #include<iostream>
// #include<iomanip>
// #include<math.h>
//
// using namespace std;
//
// int main()
// {
//     int n,m,x,y,t;
//     float cc,ss,equal;
//     while(cin>>n>>m>>x>>y>>t)
//  {
//     float **metric;
//     metric=new float *[n];
//     for(int i=0;i<n;i++)
//     metric[i]=new float[m];
//     for(int i=0;i<n;i++)
//     for(int j=0;j<m;j++)
//     {
//         cin>>metric[i][j];
//     }
//
//     cc=1-pow((1-metric[x-1][y-1]),t);
//     ss=0;
//     for(int i=0;i<n;i++)
//     for(int j=0;j<m;j++)
//     ss+=metric[i][j];
//
//     ss=ss/m/n;
//
//     ss=1-pow(1-ss,t);
//     cout.setf(ios::fixed);
//     if(ss==cc)
//     {
//        equal=ss;
//        cout<<"equal"<<endl;
//     cout<<setprecision(2)<<equal<<endl;
//     }
//      if(ss<cc)
//     {
//        cout<<"cc"<<endl;
//     cout<<setprecision(2)<<cc<<endl;
//     }
//      if(ss>cc)
//     {
//        cout<<"ss"<<endl;
//     cout<<setprecision(2)<<ss<<endl;
//     }
//   }
//     return 0;
// }

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int n, m, x, y, t;
	float cc, ss;
	while(cin >> n >> m >> x >> y >> t)
	{
	    float **metric;
	    metric=new float *[n];
	    for(int i=0;i<n;i++)
	    	metric[i]=new float[m];
	    for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	    {
	        cin>>metric[i][j];
	    }

		cc = 1 - pow((1 - metric[x - 1][y - 1]), t);
		ss = 0;
	    for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	      	ss += metric[i][j];

		ss = ss / m / n;
		ss = 1 - pow((1 - ss), t);
		if(cc == ss)
		{
			cout << "equal" << endl;
			cout << setprecision(2) << ss << endl;
		}
	    if(cc > ss)
		{
			cout << "cc" << endl;
			cout << setprecision(2) << cc << endl;
		}
		if(ss > cc)
		{
			cout << "ss" << endl;
			cout << setprecision(2) << ss << endl;
		}
	}
 	return 0;
}
 
 
// {
// 	int n, m, x, y, t;
// 	scanf("%d%d%d%d%d", &n, &m, &x, &y, &t);
// 	float metric[MAX][MAX] = {0};
// 	for(int i = 0; i < m; i ++)
// 	{
// 		for(int j = 0; j < n; j ++)
// 		{
// 			scanf("%f", &metric[i][j]);
// 		}
// 	}
// 	float cc = 0.0;
// 	cc = (1 - metric[x - 1][y - 1];
// 	float ss = 0.0;
// 	for(int i = 0; i < m; i ++)
// 	{
// 		for(int j = 0; j < n; j ++)
// 		{
// 			ss += metric[i][j];
// 		}
// 	}
// 	ss /= (m * n);
// 	//printf("%f %f", cc, ss);
// 	if(ss == cc)
// 	{
// 		printf("equal\n%f\n", ss);
// 	}
// 	else if(ss > cc)
// 	{
// 		printf("ss\n%f\n", ss);
// 	}
// 	else
// 	{
// 		printf("cc\n%f\n", cc);
// 	}
// }