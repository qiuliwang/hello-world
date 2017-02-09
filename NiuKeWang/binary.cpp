/*
题目描述
世界上有10种人，一种懂二进制，一种不懂。那么你知道两个int32整数m和n的二进制表达，有多少个位(bit)不同么？ 
输入例子:
1999 2299

输出例子:
7
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * 获得两个整形二进制表达位数不同的数量
     * 
     * @param m 整数m
     * @param n 整数n
     * @return 整型
     */
    int countBitDiff(int m, int n) {
		int ans = 0;
		vector<int> mbinary;
		vector<int> nbinary;
		
		toBinary(m, mbinary);
		toBinary(n, nbinary);
		
		int msize = mbinary.size();
		int nsize = nbinary.size();
		for(int i = msize - 1, j = nsize - 1; i >= 0 && j >= 0; i --, j --)
		{
			if(mbinary[i] != nbinary[j])
				ans ++;
		}
		ans += (int)abs(msize - nsize);
		//cout << ans << endl;
		return ans;
    }
	//100000110100111
	//10000110101100011101011110001
	
	//11111001111
	//100011111011
	void toBinary(int m, vector<int> &binary);
};

void Solution::toBinary(int m, vector<int> &binary)
{
	int inner = m;
	while(inner != 0)
	{
		int temp = inner % 2;
		binary.push_back(temp);
		inner /= 2;
	}
	
	// for(int i = 0; i < binary.size(); i ++)
	// {
	// 	cout << binary[i] << " ";
	// }
	// cout << endl;
}

int main()
{
	Solution sol;
	int m, n;
	cin >> m >> n;
	cout << sol.countBitDiff(m, n) << endl;
	// int m;
	// cin >> m;
	// toBinary(m);
}