#include<stdio.h>

int main()
{
    int power,factor;										//�������ʽ���ݺ�ϵ�� 
    int i,j=0,k=1;;
    int polynomial[101]={0,};								//�������ʽ���� 
    for(i=0;i!=2;i++)										//ѭ�����Σ�������������ʽ 
	{
        do{
            scanf("%d %d",&power, &factor);	
            if(factor!=0)
			{
                j++;                        				//��¼��Ϊ���ϵ���ĸ��� 
            }
            polynomial[power] += factor;					//��һ���ݶ�Ӧ��ϵ�����ڶ���ʽ˳�����е���λ��
        }while(power!=0);									//����Ϊ��ʱ��ʼ��һ������ʽ������ 
    }
    if(j!=0)												//��ϵ����ȫΪ�� 
	{                           
        for(i=100;i>=0;i--)
		{
            if(polynomial[i]>1||polynomial[i]<-1)			//��ϵ������һ����С��-1ʱ 
			{
                if(i==0)									//����Ϊ��ʱ 
				{
                    if(k==1)								//����k�����ö���ʹ��һ��ϵ�������Ϸ��� 
					{
                        printf("%d",polynomial[i]);
                        k++;
                    }
					else 
					{ 
						printf("%+d",polynomial[i]);		//%+d����˼�����%dʱ���������� 
					} 
                }
				else if(i==1)								//����Ϊһʱ 
				{
                    if(k==1) 
					{
                        printf("%dx",polynomial[i]);
                        k++;
                    }
					else 
					{
						printf("%+dx",polynomial[i]);
					} 
                }
				else if(i>1)								//���ݴ���һʱ 
				{
                    if(k==1) 
					{
                        printf("%dx%d",polynomial[i],i);
                        k++;
                    }
					else 
					{
						printf("%+dx%d",polynomial[i],i);
					} 
                }
            }
			else if(polynomial[i]==1)						//��ϵ��Ϊһʱ 
			{
                if(i==0)									//����Ϊ��ʱ 
				{
                    if(k==1) 
					{
                        printf("1");
                        k++;
                    }
					else 
					{
						printf("+1");
					} 
                }
				else if(i==1)								//����Ϊһʱ 
				{
                    if(k==1)
					{
                        printf("x");
                        k++;
                    }
					else 
					{
						printf("+x");
					} 
                }
				else if(i>1)								//���ݴ���һʱ 
				{
                    if(k==1) 
					{
                        printf("x%d",i);
                        k++;
                    }
					else 
					{
						printf("+x%d",i);
					}
                }
            }
			else if(polynomial[i]==-1)						//��ϵ��Ϊ��һʱ 
			{
                if(i==0)									//����Ϊ��ʱ 
				{
                    if(k==1) 
					{
                        printf("-1");
                        k++;
                    }
					else 
					{
						printf("-1");
					}
                }
				else if(i==1)								//����Ϊһʱ 
				{
                    if(k==1) 
					{
                        printf("-x");
                        k++;
                    }
					else 
					{
						printf("-x");
					}
                }
				else if(i>1)								//���ݴ���һʱ 
				{
                    if(k==1) 
					{
                        printf("-x%d",i);
                        k++;
                    }
					else 
					{
						printf("-x%d",i);
					}
                }
            }
			else if(polynomial[i]==0)						//��ϵ�������� 
			{
                printf("");
            }
        }
    }
    if(j==0)												//������ϵ����Ϊ�� 
	{           
    	printf("0");
    }
    return 0;
}
