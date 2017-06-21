//题目内容：
//我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
//现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
//注意：是第n个素数到第m个素数，不是n和m之间的素数！
//输入格式:两个正整数，第一个表示n，第二个表示m。
//输出格式：一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
//输入样例：2 4
//输出样例：15

#include <stdio.h> 
int main()
{
	int i,p,s=1,a[200];
	int flag = 1;
	a[0] = 2;
	for (i=3;;i++)
	{
		flag=1;
		for (p=2;p<i;p++)
		{
			if (i%p == 0)
			{
				flag=0; 
			}
		}
		if ((flag==1)&&(i!=1))
		{
			a[s] = i;
			s++;
		}
		if(s == 200)
		{
			break;
		}
	}
	/*for(s=0;s<200;s++)
	{
		printf("(%d)",a[s]);
	}
	printf("s=%d",s);*/
	int m,n,sum=0;
	scanf("%d%d",&n,&m);
	for(s=n;s<=m;s++)
	{
		sum = sum+a[s-1];
	}
	printf("%d",sum);
	return 0;
}

