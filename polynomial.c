#include<stdio.h>

int main()
{
    int power,factor;										//定义多项式的幂和系数 
    int i,j=0,k=1;;
    int polynomial[101]={0,};								//定义多项式数组 
    for(i=0;i!=2;i++)										//循环两次，输入两个多项式 
	{
        do{
            scanf("%d %d",&power, &factor);	
            if(factor!=0)
			{
                j++;                        				//记录不为零的系数的个数 
            }
            polynomial[power] += factor;					//将一个幂对应的系数放在多项式顺序排列的幂位上
        }while(power!=0);									//当幂为零时开始下一个多项式的输入 
    }
    if(j!=0)												//当系数不全为零 
	{                           
        for(i=100;i>=0;i--)
		{
            if(polynomial[i]>1||polynomial[i]<-1)			//当系数大于一或者小于-1时 
			{
                if(i==0)									//当幂为零时 
				{
                    if(k==1)								//所有k的作用都是使第一个系数不带上符号 
					{
                        printf("%d",polynomial[i]);
                        k++;
                    }
					else 
					{ 
						printf("%+d",polynomial[i]);		//%+d的意思是输出%d时带上正负号 
					} 
                }
				else if(i==1)								//当幂为一时 
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
				else if(i>1)								//当幂大于一时 
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
			else if(polynomial[i]==1)						//当系数为一时 
			{
                if(i==0)									//当幂为零时 
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
				else if(i==1)								//当幂为一时 
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
				else if(i>1)								//当幂大于一时 
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
			else if(polynomial[i]==-1)						//当系数为负一时 
			{
                if(i==0)									//当幂为零时 
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
				else if(i==1)								//当幂为一时 
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
				else if(i>1)								//当幂大于一时 
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
			else if(polynomial[i]==0)						//当系数等于零 
			{
                printf("");
            }
        }
    }
    if(j==0)												//当所有系数都为零 
	{           
    	printf("0");
    }
    return 0;
}
