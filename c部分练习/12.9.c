/* 2.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Cal(int a,int b,int c)
{
	int answer,result;
	switch(c)
	{
	case 1:
		printf("%d+%d=\n",a,b);
		result=a+b;
		break;
	case 2:
		printf("%d-%d=\n",a,b);
		result=a-b;
		break;
	case 3:
		printf("%d*%d=\n",a,b);
		result=a*b;
		break;
	case 4:
		if(b!=0)
		{
			printf("%d/%d=\n",a,b);
			result=a/b;
		}
		else
		{
			printf("��ĸ����Ϊ��!\n");
		}
		break;
	default:
		printf("δ֪����!\n");
		break;
	}
	printf("��������Ĵ�:");
	scanf("%d",&answer);
	if(result==answer)
		return 1;
	else
		return 0;
}
void Print(int R)
{
	
	if(R)
		printf("Right!\n");
	else
		printf("Not correct!\n");
}
main()
{
	
	int a,b,error,answer,score,i,c;
	srand(time(NULL));
	error=0;
	score=0;
	printf("����ʮ�����������⣬����û�л�������\n");
	for(i=0;i<10;i++)
	{
		a=rand()%10+1;
		b=rand()%10+1;
		c=rand()%4+1;
		answer=Cal(a,b,c);
		Print(answer);
		if(answer==1)
			score=score+10;
		else
			error++;
	}
	printf("�ܷ�Ϊ%d,������Ŀ��%d��\n",score,error);
}
*/
///*  1.
/*
#include <stdio.h>
void main()
{
	int i=0,k,j,m,n,t,a[100];
	scanf("%d,m=%d,n=%d",&k,&m,&n);
	while(k)
	{
		a[i]=k%10;
		k/=10;
		i++;
	}
	for(j=0;j<i/2;j++)
	{
		t=a[j];
		a[j]=a[i-j-1];
		a[i-j-1]=t;
	}
	if(m<1||m>n||n>i)
		printf("Input error!");
	else
		for(j=m-1;j<n;j++)
			printf("%d",a[j]);
}*/
/*3.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

*/
