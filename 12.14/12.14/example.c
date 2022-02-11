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
}