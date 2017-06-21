//题目：
//猜想计算机给出的在1-100间的随机数，并计算你猜想的次数。 

#include <stdio.h>
#include <time.h>
int main()
{
	srand(time(0));												//播撒随机种子，需要头文件<time.h> 
	int number = rand()%100+1;									//rand()会产生乱数，rand()%100产生在0-99的随机数，而rand()%100+1产生在1-100的随机数 
	int count = 0;												//次数累加器 
	int a = 0;													//你猜的数字 
	printf("我已经想好了一个1到100之间的数。");
	do 
	{
		printf("请猜这个1到100之间数：");
		scanf("%d", &a);
		if ( a > number ) 
		{
			printf("你猜的数大了。");
		} 
		else if ( a < number ) 
		{
			printf("你猜的数小了。");
		}
		count ++;												//记次及判断你猜想的数字与随机数的大小关系 
	} 
	while (a != number);
	printf("太好了，你用了%d次就猜到了答案。\n", count);		//输出次数 

	return 0;
}
