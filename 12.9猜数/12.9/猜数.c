//1
/*
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b;
	printf("please guess a number:\n");
	scanf("%d",&b);
	a=rand();
	if(b>a)
		printf("Wrong!Too high!");
	else if(b<a)
		printf("Wrong!Too low!");
	else
		printf("Right!");
}*/

//2
/*
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,n;
	n=0;
	printf("please guess a number:\n");
	a=rand()%100+1;
	do
	{
		scanf("%d",&b);
		if(b>a)
			printf("Wrong!Too high!\n");
		if(b<a)
			printf("Wrong!Too low!\n");
		n++;
	}while(a!=b);
	if(a==b)
		printf("Right!times=%d",n);
}*/

//3
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,b,n;
	n=0;
	printf("please guess a number:\n");
	srand(time(NULL));
	a=rand()%100+1;
	do
	{
		scanf("%d",&b);
		if(b>a)
			printf("Wrong!Too high!\n");
		if(b<a)
			printf("Wrong!Too low!\n");
		n++;
	}while(a!=b);
	if(a==b)
		printf("Right!times=%d",n);
}*/

//4
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,b,n=1;
	printf("您每次游戏中，只有十次机会\n");
	printf("please guess a number:\n");
	do
	{
		srand(time(NULL));
		a=rand()%100+1;
		while(n<=10)
		{
			scanf("%d",&a);
			do
			{
			if(b>a)
				printf("wrong,too high 再猜\n");
			
			if(b<a)
				printf("wrong,too low 再猜\n");
			n++;			
	}while(a!=b);
	if(a==b)
	{
		printf("right");
		n++;
		break;
	}
	else
	{printf("wrong");
		n++;
		break;
	}
		}
		printf("times=%d",n);

}*/

//5
/*
#include<stdio.h>
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
	/*
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
}*/
	

//6
/*#include<stdio.h>	
void game()
{
	 int input = 0; 
     int tmp;
	 tmp = rand()%100+1;//生成1到100范围内的随机数
	 while(1)
	 {
		printf("请猜数字1到100:");
		scanf("%d", &input);
        if (input==tmp)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		else if (input>=tmp)
		{
               printf("猜大了\n");
		}
		else if (input<=tmp)
		{
               printf("猜小了\n");
		}
 
	 }
}
 
int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));//随机数生成器
  do
   {	
	 menu();
	 printf("请选择：");
	 scanf("%d", &i);
	 switch (i)
	 {
	 case 0:
		break;
	 case 1:
		game();
		break;
	 default :
		printf("输入有误");
	 }
   }
  while(i);
	return 0;
}*/