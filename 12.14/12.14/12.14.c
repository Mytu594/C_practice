/* <stdio.h>
#include<time.h>
#include<stdlib.h>
void Guess(int magic, int guess)
{
static int c = 0;
c++;
if (magic == guess)
{
printf("\n��¶��ˣ�\n��һ������%d�Σ�", c);
exit(0);
}
if (magic < guess)
{
printf("\n̫���ˣ�\n");
}
else
{
printf("\n̫С�ˣ�\n");
}
}
int main()
{
int m, n, i;
srand((int)time(0));
n=(rand() % 100) + 1;
//printf("n=%d\n",n);
for (i = 0; i < 10; i++) {
printf("��������²������");
scanf("%d", &m);
Guess(n, m);
}
return 0;
}*/
/*#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void Guess(int magic, int guess);
void main()
{
	int m,n,i;
	srand(time(NULL));
	n=rand()%100+1;
	for(i=0;i<10;i++)
	{
		printf("please guess a number:");
		scanf("%d",&m);
		Guess(n,m);
	}

}
void Guess(int magic, int guess)
{
	static int j=0;
	j++;
	if(guess>magic)
	{
		printf("wrong,too high �ٲ�\n");
	}
	else if(guess<magic)
	{
		printf("wrong,too low �ٲ�\n");
	}
	else
	{
		printf("right!\n��һ������%d��",j);
		exit(0);
	}
}*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Compute();
int main()
{
	int i;
	i=Compute();
	printf("������%d��,�÷�Ϊ:%d\n",i,i*10);
	return 0;
}
int Computer()
{
	int x,y,res,autoResult,rightCount,i;
	char op;
	srand(time(NULL));
	for(i=1;i<=11;i++)
	{
		op=rand()%4+1;
		x=rand()%10+1;
		y=rand()%10+1;
		switch(op)
		{
		case 1:
			printf("%d+%d=",x,y);
			autoResult=x+y;
			break;
		case 2:
			printf("%d-%d=",x,y);
			autoResult=x-y;
			break;
		case 3:
			printf("%d*%d=",x,y);
			autoResult=x*y;
			break;
		case 4:
			printf("%d/%d=",x,y);
			autoResult=x/y;
			break;
		}
	}
}*/