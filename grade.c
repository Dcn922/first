/*
题目内容：
本题要求编写程序，比较两个分数的大小。

输入格式:
输入在一行中按照“a1/b1 a2/b2”的格式给出两个分数形式的有理数，其中分子和分母全是int类型范围内的正整数。

输出格式：
在一行中按照“a1/b1 关系符 a2/b2”的格式输出两个有理数的关系。其中“>”表示“大于”，“<”表示“小于”，“=”表示“等于”。
注意在关系符前后各有一个空格。

输入样例：
1/2 3/4
输出样例：
1/2 < 3/4
*/

#include <stdio.h>

int main(void)
{
	int a1, b1, a2, b2;
	double anw1 = 0, anw2 = 0;
	
	scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
	anw1 = (double)a1 / b1;
	anw2 = (double)a2 / b2;
	if (anw1 > anw2)
		printf("%d/%d > %d/%d", a1, b1, a2, b2);
	else if (anw1 < anw2)
		printf("%d/%d < %d/%d", a1, b1, a2, b2);
	else
		printf("%d/%d = %d/%d", a1, b1, a2, b2);
	return 0;
}
