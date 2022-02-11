/*#include<stdio.h>
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


#include<stdio.h>
#include<stdlib.h>
void Guess(int magic, int guess);
void main()
{
	int magic,guess,n=1;
	magic=rand()%100+1;
	printf("please guess a number:");
	if(n<=10)
	{
		scanf("%d",&guess);
		do
		{
			Guess(magic,guess);
			++n;
		}while(guess!=magic);
		if(guess==magic)
		{
			printf("right");
			n++;
		}
		else
		{
			printf("wrong");
			n++;
		}
	}
}
void Guess(int magic, int guess)
{
	if(guess>magic)
		printf("wrong,too high 再猜\n");
	if(guess<magic)
		printf("wrong,too low 再猜\n");
}



			




