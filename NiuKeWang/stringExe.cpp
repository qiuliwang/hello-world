/*
n = strlen(x)，此时n=4，因为x指向y数组，所以x[4]就是y[4]='\0',
那么*x=x[n]就是把x指向的字符串首元素改为'\0'，x++之后x指向第二个字符t，
所以第一个输出x=tse，而y遇到第一个字符就是'\0'，所以结束，y输出为空
*/
#include<stdio.h>
#include<string>
int main(void)
{
 int n;
 char y[10] = "ntse";
 char *x = y;
 n = strlen(x);
 *x = x[n];
 x++;
 printf("x=%s\n",x);
 printf("y=%s\n",y);
 return 0;
}
