/*
��Ŀ���ݣ�
�������һ��������n��0<n<=100000����Ȼ�����n����������Ϊ32λ�µ�������
�����������������Ľ����ÿ������������һ���ո�

�����ʽ:
һ����ʾ������������n����n���������Կո�����

�����ʽ��
������n��������ÿ������������һ���ո�

����������
6 2 23 54 12 6 8

���������
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
 
