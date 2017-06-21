/*
字符串对比 
题目内容：
你会读到两个字符串，每个字符串占据一行，每个字符串的长度均小于10000字符，而且第一个字符串的长度小于第二个字符串的。
你的程序要找出第一个字符串在第二个字符串中出现的位置，输出这些位置，如果找不到，则输出-1。

注意，第一个字符的位置是0。
注意，第一个字符串在第二个字符串中的位置可能不止一处。
注意，字符串中可能含有空格。
注意，两个字符串的长度一定大于0。

输入格式:
两个字符串，一行一个。

输出格式：
第一个字符串在第二个字符串中出现的位置，按照从小到大的顺序排列，每个数字后面有一个空格。
如果在第二个字符串中找不到第一个字符串，则输出-1。

输入样例：
abba
ababbba abbabbabbabbaacc

输出样例：
8 11 14 17
*/

#include <stdio.h>
#include <string.h>

void strfind(const char *s1, char *s2);

int main(void)
{
	char s1[10000] = {0}, s2[10000] = {0};
	
	gets(s1);
	gets(s2);
	strfind(s1, s2);
	return 0;
}

void strfind(const char *s1, char *s2)
{
	int i = 0, j = 0;
	int kk = 0, idx = 0;
	
	for (i = 0; i < strlen(s2); i++)
	{
		kk = 0;
		for (j = 0; j < strlen(s1); j++)
		{
			if (s1[j] == s2[i + j])
			{
				kk++;
			}
		}
		if (kk == strlen(s1))
		{
			printf("%d ", i);
			idx++;
		}
	}
	if (idx == 0)
		printf("-1");
}
