#include <stdio.h>
#include <string.h>
#define N 1000500

//void rotate(char ss[N], int len);	//旋转函数 

int main(void)
{
	char ss[N] = {"\0"};
	char sc1[N / 2] = {"\0"}, sc2[N / 2] = {"\0"};
	int len = 0;
	int i, j;
	int bol = 1;
	char *pi = NULL;	//申明指向中值的指针 
	
	int d_len = 0;

	fgets(ss, N, stdin);			//gets(ss)改为fgets(ss, N, stdin)可防止越界
	len = strlen(ss);  
	
	d_len = len / 2;
	//rotate(ss, len);	//旋转一次 
	pi = ss + d_len;
		
		for (j = 0; j < d_len; j++)
		{
			if (*(ss+j) == *(pi+j));
			else{
				bol = 0;
				break; 
			}
		} 
	if (bol == 1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

/*void rotate(char ss[N], int len)
{
	ss[len] = ss[0];
	ss++;
}*/


