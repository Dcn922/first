//��Ŀ��
//����������������1-100���������������������Ĵ����� 

#include <stdio.h>
#include <time.h>
int main()
{
	srand(time(0));												//����������ӣ���Ҫͷ�ļ�<time.h> 
	int number = rand()%100+1;									//rand()�����������rand()%100������0-99�����������rand()%100+1������1-100������� 
	int count = 0;												//�����ۼ��� 
	int a = 0;													//��µ����� 
	printf("���Ѿ������һ��1��100֮�������");
	do 
	{
		printf("������1��100֮������");
		scanf("%d", &a);
		if ( a > number ) 
		{
			printf("��µ������ˡ�");
		} 
		else if ( a < number ) 
		{
			printf("��µ���С�ˡ�");
		}
		count ++;												//�Ǵμ��ж�������������������Ĵ�С��ϵ 
	} 
	while (a != number);
	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);		//������� 

	return 0;
}
