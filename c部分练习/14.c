// 1
/* #include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b;
	a=rand();
	printf("���һ������");
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
	printf("���һ����\n");
	
	do
	{
		
		scanf("%d",&b);
		if(b<a)
			printf("wrong,too low �ٲ�\n");
		if(b>a)
			printf("wrong,too high �ٲ�\n");
		n++;
	}while(a!=b);
	if(a==b&&n==0)
		printf("right %d",n);
	else
		printf("right %d��",n);
}*/
//3
/*#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,n=0;
	printf("���һ����\n");
	do
	{
		a=rand()%100+1;
		scanf("%d",&b);
		if(b>a)
			printf("wrong,too high �ٲ�\n");
		if(b<a)
			printf("wrong,too low �ٲ�\n");
		n++;
	}while(a!=b);
	if(a==b&&n==0)
		printf("right 1��");
	else
		printf("right %d��",n);
}*/
//4
/*#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,n=1;
	printf("���һ����\n");
	do
	{
		a=rand()%100+1;
		scanf("%d",&b);
		if(b>a)
			printf("wrong,too high �ٲ�\n");
		if(b<a)
			printf("wrong,too low �ٲ�\n");
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
	printf("��Aͬѧ����:\n");
	do
	{
		scanf("%d",&b);
		if(b>a)
			printf("wrong,too high �ٲ�\n");
		if(b<a)
			printf("wrong,too low �ٲ�\n");
		n++;
	}while(a!=b);
	printf("��Bͬѧ����:\n");
	do
	{
		scanf("%d",&d);
		if(d>c)
			printf("wrong,too high �ٲ�\n");
		if(d<c)
			printf("wrong,too low �ٲ�\n");
		m++;
	}while(c!=d);
	if(n<m)
		printf("Aͬѧwin");
	else if(n==m)
		printf("ƽ��");
	else
		printf("Bͬѧwin");
}*/
//6
#include<stdio.h>
#include<stdlib.h>
void Guess(int magic,int guess)
{
	int a,b,n=1;
	printf("���һ����\n");
	do
	{
		a=rand()%100+1;
		scanf("%d",&b);
		if(b>a)
			printf("wrong,too high �ٲ�\n");
		if(b<a)
			printf("wrong,too low �ٲ�\n");
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
	
