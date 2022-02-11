//字母转换
/*
#include<stdio.h>
char Convert(char ch);
void main()
{
	char ch;
	printf("请输入一个字母:");
	scanf("%c",&ch);
	printf("转换后的字母为:%c",Convert(ch));
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
		printf("这不属于字母\n");
		ch=-1;
	}
	return(ch);
}*/


//SelMax函数
/*
#include<stdio.h>
int SelMax(int a[],int n);
void main()
{
	int i,a[5],n;
	printf("请输入数组元素的个数:");
	scanf("%d",&n);
	printf("请输入各元素的值:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("这5个元素中的最大值为%d\n",SelMax(a,n));
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

//猜数游戏
/*
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void Guess(int magic, int guess);
int main()
{
	int m, n, i=0;
	printf("请猜一个数:");
	srand(time(NULL));
	n=rand()%100+1;
	do
	{
		scanf("%d", &m);
		if(m>100||m<1)
			printf("越界了\n");
		else
		{
			Guess(n, m);
			i++;
		}
	}while(m!=n&&i<=10);
	if(m==n)
		printf("right!");
	printf("你猜了%d次\n",i);
	getchar();getchar();
}
void Guess(int magic,int guess)
{
	if(guess>magic)
		printf("wrong,too high 再猜\n");
	if(guess<magic)
		printf("wrong,too low 再猜\n");
}*/


//加法运算题
//1
/*
#include<stdio.h>
int Add(int x,int y);
int Print(int x,int y,int z);
void main()
{
	int a,b,c,d,g;
	printf("请输入两个加数：");
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
	printf("请输入两个加数：");
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
	printf("请输入两个加数：");
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
	}while(g!=1&&n!=3);//做错时有三次机会
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
	printf("你的得分为%d分,答错了%d题\n",(10-n)*10,n);
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


	
