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