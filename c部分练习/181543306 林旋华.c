//��ĸת��
/*
#include<stdio.h>
char Convert(char ch);
void main()
{
	char ch;
	printf("������һ����ĸ:");
	scanf("%c",&ch);
	printf("ת�������ĸΪ:%c",Convert(ch));
	getchar();getchar();
}
char Convert(char ch)
{
	if((ch>='A')&&(ch<='Z'))
		ch=ch+32;
	else if((ch>='a')&&(ch<='z'))
		ch=ch-32;
	else
	{
		printf("�ⲻ������ĸ\n");
		ch=-1;
	}
	return(ch);
}*/


//SelMax����
/*
#include<stdio.h>
int SelMax(int a[],int n);
void main()
{
	int i,a[5],n;
	printf("����������Ԫ�صĸ���:");
	scanf("%d",&n);
	printf("�������Ԫ�ص�ֵ:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("��5��Ԫ���е����ֵΪ%d\n",SelMax(a,n));
	getchar();getchar();
}

int SelMax(int a[],int n)
{
	int max=a[0],j;
	for(j=0;j<n;j++)
		if(a[j]>max)
			max=a[j];
	return max;
}*/

//������Ϸ
/*
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void Guess(int magic, int guess);
int main()
{
	int m, n, i=0;
	printf("���һ����:");
	srand(time(NULL));
	n=rand()%100+1;
	do
	{
		scanf("%d", &m);
		if(m>100||m<1)
			printf("Խ����\n");
		else
		{
			Guess(n, m);
			i++;
		}
	}while(m!=n&&i<=10);
	if(m==n)
		printf("right!");
	printf("�����%d��\n",i);
	getchar();getchar();
}
void Guess(int magic,int guess)
{
	if(guess>magic)
		printf("wrong,too high �ٲ�\n");
	if(guess<magic)
		printf("wrong,too low �ٲ�\n");
}*/


//�ӷ�������
//1
/*
#include<stdio.h>
int Add(int x,int y);
int Print(int x,int y,int z);
void main()
{
	int a,b,c,d,g;
	printf("����������������");
	scanf("%d%d",&a,&b);
	c=Add(a,b);
	printf("%d+%d=",a,b);
	scanf("%d",&d);
	g=Print(a,b,d);
	if(g==1)
		printf("Right!");
	if(g==0)
		printf("Not corrert!Try again!");
}
int Add(int x,int y)
{
	int e;
	e=x+y;
	return e;
}
int Print(int x,int y,int z)
{
	int f,g;
	f=Add(x,y);
	if(f==z)
		g=1;
	else
		g=0;
	return g;
}*/

//2
/*
#include<stdio.h>
int Add(int x,int y);
int Print(int x,int y,int z);
void main()
{
	int a,b,c,d,g;
	printf("����������������");
	scanf("%d%d",&a,&b);
	c=Add(a,b);
	printf("%d+%d=",a,b);
	do
	{
		scanf("%d",&d);
		g=Print(a,b,d);
		if(g==0)
		{
			printf("Not corrert!Try again!\n");
		}
	}while(g!=1);
	printf("Right!");
}
int Add(int x,int y)
{
	int e;
	e=x+y;
	return e;
}
int Print(int x,int y,int z)
{
	int f,g;
	f=Add(x,y);
	if(f==z)
		g=1;
	else
		g=0;
	return g;
}*/

//3
/*
#include<stdio.h>
int Add(int x,int y);
int Print(int x,int y,int z);
void main()
{
	int a,b,c,d,g,n=0;
	printf("����������������");
	scanf("%d%d",&a,&b);
	c=Add(a,b);
	printf("%d+%d=",a,b);
	do
	{
		scanf("%d",&d);
		g=Print(a,b,d);
		if(g==0)
		{
			n++;
			if(n==3)
				break;
			printf("Not correct!Try again!\n");
			
		}
	}while(g!=1&&n!=3);//����ʱ�����λ���
	if(g==1)
		printf("Right!");
	if(n==3)
		printf("Not correct! You have tried three times! Test over!");
}

int Add(int x,int y)
{
	int e;
	e=x+y;
	return e;
}
int Print(int x,int y,int z)
{
	int f,g;
	f=Add(x,y);
	if(f==z)
		g=1;
	else
		g=0;
	return g;
}*/

//4
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Add(int x,int y);
int Print(int x,int y,int z);
void main()
{
	int a,b,c,d,g,n=0,m=0;
	srand(time(NULL));
	do
	{
		a=rand()%10+1;
		b=rand()%10+1;
		c=Add(a,b);
		printf("%d+%d=",a,b);
		scanf("%d",&d);
		g=Print(a,b,d);
		if(g==0)
		{
			printf("Not correct!\n");
			n++;
		}
		else
			printf("Right!\n");
		m++;
	}while(m!=10);
	printf("��ĵ÷�Ϊ%d��,�����%d��\n",(10-n)*10,n);
}
int Add(int x,int y)
{
	int e;
	e=x+y;
	return e;
}
int Print(int x,int y,int z)
{
	int f,g;
	f=Add(x,y);
	if(f==z)
		g=1;
	else
		g=0;
	return g;
}*/


	
