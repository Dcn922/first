/*
��С��Χ����
��Ŀ���ݣ�
����һ���ά���꣬��ʾֱ������ϵ�ڵ�һ������ε������Ķ�����������С������ܰ�Χ�������ε�ƽ�������������С���Σ�����������½Ǻ����Ͻǵ����ꡣ

�����ʽ:
��һ����һ��������n��ʾ������������ڶ�����n�����������α�ʾÿ�����������x��yֵ��

�����ʽ��
�ĸ����������α�ʾ������ľ��ε����½ǵ������x��yֵ�����Ͻ������x��yֵ����������лس����С�

����������
5
1 1 1 4 3 7 4 4 4 1

���������
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
