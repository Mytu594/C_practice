/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Guess(int magic,int guess);
main()
{
	int guess,magic,sum=0;
	srand(time(NULL));
	magic=rand()%100+1;
	printf("请猜一个1-100的数:\n");
	do{
		scanf("%d",&guess);
		if(guess>100||guess<1)
			printf("超出范围了\n");
		else
		{
			Guess(magic,guess);
			sum++;
		}
	}while(guess!=magic&&sum<10);
	printf("你猜了%d次\n",sum);
	getchar();
}
void Guess(int magic,int guess)
{
	if(guess!=magic)
	{
		printf("猜错了!\n");
		if(guess<magic)
		{
			printf("猜的数太小了!\n");
		}
		else
		{
			printf("猜的数太大了!\n");
		}
	}
	else
	{
		printf("猜对了!\n");
	}
}
*/

