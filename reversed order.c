/*
��Ŀ���ݣ�
��ĳ�������һϵ�е���������Ԥ�Ȳ�֪����������������һ������-1���ͱ�ʾ���������
Ȼ�󣬰��պ������෴��˳����������������֣�����������ʶ������-1��

�����ʽ:
һϵ��������������-1��ʾ������-1������������ݵ�һ���֡�

�����ʽ��
�����������෴��˳��������е�������ÿ�����������һ���ո����������������֣�������������Ҳ�пո�

����������
1 2 3 4 -1

���������
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
	
	//������������ 
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
	//���
	for (p = head; p; p = p->next)
	{
		printf("%d ", p->value);
	}
	//���
	p = head;
	while (p != NULL)
	{
		q = p->next;
		free(p);
		p = q;
	}
	return 0;
}
