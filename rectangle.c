/*
最小包围矩形
题目内容：
给定一组二维坐标，表示直角坐标系内的一个多边形的连续的顶点的坐标序列。计算能包围这个多边形的平行于坐标轴的最小矩形，输出它的左下角和右上角的坐标。

输入格式:
第一行是一个正整数n表示顶点的数量，第二行是n组整数，依次表示每个顶点坐标的x和y值。

输出格式：
四个整数，依次表示所计算的矩形的左下角的坐标的x、y值和右上角坐标的x、y值。输出最后带有回车换行。

输入样例：
5
1 1 1 4 3 7 4 4 4 1

输出样例：
1 1 4 7
*/

#include <stdio.h>
#include <math.h>

#define NF 66666

int main(void)
{
	int n;
	int i, j;
	int plotl[10][2] = {{0, 0}};
	int max1 = -NF, max2 = -NF, min1 = NF, min2 = NF;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &plotl[i][0], &plotl[i][1]);
	}
	for (j = 0; j < n; j++)
	{
		if (plotl[j][0] < min1)
		{
			min1 = plotl[j][0];
		}
		if (plotl[j][1] < min2)
		{
			min2 = plotl[j][1];
		}
		if (plotl[j][0] > max1)
		{
			max1 = plotl[j][0];
		}
		if (plotl[j][1] > max2)
		{
			max2 = plotl[j][1];
		}
	}
	printf("%d %d %d %d", min1, min2, max1, max2);
	return 0;
}
