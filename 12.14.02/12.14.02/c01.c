/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Guess(int magic,int guess); 
main()
{
int guess,magic,sum=0;
srand(time(NULL));
magic=rand()%100+1;    
printf("猜一个1~100的数:\n");
do {
scanf("%d",&guess);
if (guess>100 ||guess<1)
printf("超出范围了\n");
else
{
	Guess(magic,guess);
	sum++;
}           
}while(guess!=magic && sum<10);
printf("你猜了%d次\n",sum);
getchar();
}
void Guess(int magic,int guess)
{
if (guess!=magic)
{
printf("猜错了！");
if (guess<magic)
{
printf("猜的数太小了！\n");
}
else
{
printf("猜的数太大了！\n");
}
}
else
{
printf("猜对了！\n");
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
	printf("你做对%d题,得分为:%d\n",i,i*10);
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

