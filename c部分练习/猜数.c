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
	printf("��ÿ����Ϸ�У�ֻ��ʮ�λ���\n");
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
				printf("wrong,too high �ٲ�\n");
			
			if(b<a)
				printf("wrong,too low �ٲ�\n");
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
	/*
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
}*/
	

//6
/*#include<stdio.h>	
void game()
{
	 int input = 0; 
     int tmp;
	 tmp = rand()%100+1;//����1��100��Χ�ڵ������
	 while(1)
	 {
		printf("�������1��100:");
		scanf("%d", &input);
        if (input==tmp)
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		else if (input>=tmp)
		{
               printf("�´���\n");
		}
		else if (input<=tmp)
		{
               printf("��С��\n");
		}
 
	 }
}
 
int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));//�����������
  do
   {	
	 menu();
	 printf("��ѡ��");
	 scanf("%d", &i);
	 switch (i)
	 {
	 case 0:
		break;
	 case 1:
		game();
		break;
	 default :
		printf("��������");
	 }
   }
  while(i);
	return 0;
}*/