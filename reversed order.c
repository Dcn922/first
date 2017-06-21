/*
题目内容：
你的程序会读入一系列的正整数，预先不知道正整数的数量，一旦读到-1，就表示输入结束。
然后，按照和输入相反的顺序输出所读到的数字，不包括最后标识结束的-1。

输入格式:
一系列正整数，输入-1表示结束，-1不是输入的数据的一部分。

输出格式：
按照与输入相反的顺序输出所有的整数，每个整数后面跟一个空格以与后面的整数区分，最后的整数后面也有空格。

输入样例：
1 2 3 4 -1

输出样例：
4 3 2 1
*/ 

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node *next;
}Node;

int main(void)
{
	Node *head = NULL;
	Node *p = NULL;
	Node *q = NULL;
	int num = 0;
	
	//逆序输入链表 
	do
	{
		scanf("%d", &num);
		if (num != -1)
		{
			Node *p = (Node *)malloc(sizeof(Node));
			p->value = num;
			p->next = head;
			head = p;
		}
	}while (num != -1);
	//输出
	for (p = head; p; p = p->next)
	{
		printf("%d ", p->value);
	}
	//清除
	p = head;
	while (p != NULL)
	{
		q = p->next;
		free(p);
		p = q;
	}
	return 0;
}
