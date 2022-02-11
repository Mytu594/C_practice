// 1
/* #include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b;
	a=rand();
	printf("请猜一个数：");
	scanf("%d",&b);
	if(a==b)
		printf("right");
	else if(b<a)
		printf("wrong, too low");
	else
		printf("wrong,too high");
}*/

//2 
/*#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,n;
	a=rand()%100+1;
	n=0;
	printf("请猜一个数\n");
	
	do
	{
		
		scanf("%d",&b);
		if(b<a)
			printf("wrong,too low 再猜\n");
		if(b>a)
			printf("wrong,too high 再猜\n");
		n++;
	}while(a!=b);
	if(a==b&&n==0)
		printf("right %d",n);
	else
		printf("right %d次",n);
}*/
//3
/*#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,n=0;
	printf("请猜一个数\n");
	do
	{
		a=rand()%100+1;
		scanf("%d",&b);
		if(b>a)
			printf("wrong,too high 再猜\n");
		if(b<a)
			printf("wrong,too low 再猜\n");
		n++;
	}while(a!=b);
	if(a==b&&n==0)
		printf("right 1次");
	else
		printf("right %d次",n);
}*/
//4
/*#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,n=1;
	printf("请猜一个数\n");
	do
	{
		a=rand()%100+1;
		scanf("%d",&b);
		if(b>a)
			printf("wrong,too high 再猜\n");
		if(b<a)
			printf("wrong,too low 再猜\n");
		n++;
		if(n==10)
			break;
	}while(a!=b);
	if(a==b)
		printf("right");
	printf("%d",n);
} */
//5
/*#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,c,d,n,m;
	n=m=0;
	a=rand()%20+1;
	c=rand()%20+1;
	printf("请A同学猜数:\n");
	do
	{
		scanf("%d",&b);
		if(b>a)
			printf("wrong,too high 再猜\n");
		if(b<a)
			printf("wrong,too low 再猜\n");
		n++;
	}while(a!=b);
	printf("请B同学猜数:\n");
	do
	{
		scanf("%d",&d);
		if(d>c)
			printf("wrong,too high 再猜\n");
		if(d<c)
			printf("wrong,too low 再猜\n");
		m++;
	}while(c!=d);
	if(n<m)
		printf("A同学win");
	else if(n==m)
		printf("平局");
	else
		printf("B同学win");
}*/
//6
#include<stdio.h>
#include<stdlib.h>
void Guess(int magic,int guess)
{
	int a,b,n=1;
	printf("请猜一个数\n");
	do
	{
		a=rand()%100+1;
		scanf("%d",&b);
		if(b>a)
			printf("wrong,too high 再猜\n");
		if(b<a)
			printf("wrong,too low 再猜\n");
		n++;
		if(n==10)
			break;
	}while(a!=b);
	if(a==b)
		printf("right");
	printf("%d",n);
}
void main()
{
	Guess();
}
	
