/*
题目内容：
程序读入一个正整数n（0<n<=100000），然后读入n个整数，均为32位下的整数。
输出对这个整数排序后的结果，每个整数后面有一个空格。

输入格式:
一个表示个数的正整数n，和n个整数，以空格间隔。

输出格式：
排序后的n的整数，每个整数后面有一个空格。

输入样例：
6 2 23 54 12 6 8

输出样例：
2 6 8 12 23 54
*/

#include <stdio.h>

int maxi(int num[], int len)
{
	int i;
	int maxid = 0;
	for (i = 0; i < len; i++)
	{
		if (num[i] > num[maxid])
		{
			maxid = i;
		}
	}
	return maxid; 
} 

int main(void)
{
	int n = 0;
	int k, i;
	int num[100000] = {0};
	int maxid = 0;
	int temp = 0;
	
	scanf("%d", &n);
	for (k = 0; k < n; k++)
	{
		scanf("%d", &num[k]);
	}
	for (i = n - 1; i > 0; i--)
	{
		maxid = maxi(num, i + 1);
		temp = num[maxid];
		num[maxid] = num[i];
		num[i] = temp;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}
 
