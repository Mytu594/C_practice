/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Guess(int magic,int guess);
main()
{
	int guess,magic,sum=0;
	srand(time(NULL));
	magic=rand()%100+1;
	printf("���һ��1-100����:\n");
	do{
		scanf("%d",&guess);
		if(guess>100||guess<1)
			printf("������Χ��\n");
		else
		{
			Guess(magic,guess);
			sum++;
		}
	}while(guess!=magic&&sum<10);
	printf("�����%d��\n",sum);
	getchar();
}
void Guess(int magic,int guess)
{
	if(guess!=magic)
	{
		printf("�´���!\n");
		if(guess<magic)
		{
			printf("�µ���̫С��!\n");
		}
		else
		{
			printf("�µ���̫����!\n");
		}
	}
	else
	{
		printf("�¶���!\n");
	}
}
*/

