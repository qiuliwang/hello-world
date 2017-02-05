/*
题目描述
老师想知道从某某同学当中，分数最高的是多少，现在请你编程模拟老师的询问。当然，老师有时候需要更新某位同学的成绩. 
输入描述:
输入包括多组测试数据。
每组输入第一行是两个正整数N和M（0 < N <= 30000,0 < M < 5000）,分别代表学生的数目和操作的数目。
学生ID编号从1编到N。
第二行包含N个整数，代表这N个学生的初始成绩，其中第i个数代表ID为i的学生的成绩
接下来又M行，每一行有一个字符C（只取‘Q’或‘U’），和两个正整数A,B,当C为'Q'的时候, 表示这是一条询问操作，他询问ID从A到B（包括A,B）的学生当中，成绩最高的是多少
当C为‘U’的时候，表示这是一条更新操作，要求把ID为A的学生的成绩更改为B。


输出描述:
对于每一次询问操作，在一行里面输出最高成绩.

输入例子:
5 7
1 2 3 4 5
Q 1 5
U 3 6
Q 3 4
Q 4 5
U 4 5
U 2 9
Q 1 5

输出例子:
5
6
5
9

*/

#include <algorithm>
#include <stdio.h>
using namespace std;
const int MAX = 100000;
int vec[MAX+5];	
void update(int idx, int value){
	vec[idx] = value;
}
int query(int x, int y){
	int temp = vec[x];
	for(int i = x + 1; i <= y; i ++) temp = max(temp, vec[i]);
	return temp;
}
int main(){
	int stuNum, optNum;
	while(~scanf("%d%d", &stuNum, &optNum)){
		for(int i = 1; i <= stuNum; i ++){
			scanf("%d",&vec[i]);
		}
		char opt;
		int x, y;
		for(; optNum --;){
			scanf("%c%d%d", &opt, &x, &y);
			if(opt == 'U') update(x, y);
			if(opt == 'Q'){
				if(x > y) swap(x, y);
				printf("%d",query(x, y));
			}
		}
	}
	return 0;
}
// #include <iostream>
// #include <vector>
// std::vector<int> vec;
// int main()
// {
// 	int stuNum = 0, optNum = 0;
// 	std::cin >> stuNum >> optNum;
// 	while(stuNum >=0 && stuNum <= 30000 && optNum >= 0 && optNum <= 5000)
// 	{
// 		int temp = 0;
// 		for(int i = 0; i < stuNum; i ++)
// 		{
// 			std::cin >> temp;
// 			vec.push_back(temp);
// 		}
// 		char opt;
// 		std::cin >> opt;
// 		temp = 0;
// 		while(temp < optNum)
// 		{
// 			temp ++;
// 			switch(opt)
// 			{
// 				case 'U':
// 				{
// 					int x, y;
// 					std::cin >> x >> y;
// 					vec[x - 1] = y;
// 					break;
// 				}
// 				case 'Q':
// 				{
// 					int x, y;
// 					std::cin >> x >> y;
// 					int temp = 0;
// 					for(int i = x - 1; i < y; i ++)
// 					{
// 						if(vec[i] > temp)
// 							temp = vec[i];
// 					}
// 					std::cout << temp << std::endl;
// 					break;
// 				}
// 			}
// 			std::cin >> opt;
// 		};
// 		std::cin >> stuNum >> optNum;
// 	}
// }