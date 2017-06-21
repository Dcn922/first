//题目内容：
//每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。
//比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。
//现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；当读到的就是素数时，输出它本身。
//输入格式:一个整数，范围在[2,100000]内。
//输出格式：形如：n=axbxcxd或n=n所有的符号之间都没有空格，x是小写字母x。
//输入样例：18
//输出样例：18=2x3x3

#include <stdio.h>
int main()
{
	int n,i,a=1;
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;i<n;i++)
	{
		if(n%i == 0)
		{
			a = 0;
		}
	}
	if(a == 1)															//输入数字为素数 
	{
		printf("%d",n);
	}
	else																//输入数字为合数 
	{
		for(i=2;i<n;i++)
		{
			while(i != n)												//当整数不为 
			{
				if(n%i == 0)											//可以整除时 
				{
					printf("%dx",i);
					n /= i;												//将除以一个质数之后的整数作为新的整数 
				}
				else													//不可以整除时 
				{
					break;	
				}
			}
		}
		printf("%d",n);													//num除到最后时的质数 
	}
	return 0;
}

