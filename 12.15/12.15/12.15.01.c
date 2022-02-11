/*#include<stdio.h>
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
/*
#include<stdio.h>
#include<math.h>
int getBetweenDigit(int,int,int);
int main()
{
	int x,f,s,result;
	scanf("%d,%d,%d",&x,&f,&s);
	result=getBetweenDigit(x,f,s);
	printf("%d->%d\n",x,result);
	result 0;
}
int getBetweenDigit(int  source,int first,int second)
{
	int i=0;
	int len=second-first+1,sum=0,digit;
	while(--first)
		source=source/10;
	while(len--)
	{
		digit=source%10;
		sum=(int)(pow(10,i)+0.5)*digit+sum;
		source=source/10;
		i++;
	}
	return sum;
}*/

#include<stdio.h>
#define N 4
#define Col 8
#define Row 5
void getMaxofCourse(char stuNum[][Col],char stuNane[][Col],int score[][N],char curName[][Col])
int	main()
{
	char stuNum[][Col]={"L1001","L1002","L1003","L1004"};
	char stuName[][Col]={"春风","立夏","秋风","冬至","春节"};
	char curName[][Col]={"数学","英语","政治","计算机"};
	int score[][N]={{45,78,87,68},{95,68,85,76},{88,76,67,80},{90,93,26,6},{78,67,77,65}};
	getMaxofCourse(stuNum,stuName,score,curName);
}
void getMaxofCourse(char stuNum[][Col],char stuName[][Col],int score[][N],xhar curName[][Col])
{
	int max=0;
	int i,j,rowLabel;
	for(j=0;j<N,j++)
	{
		max=0;
		rowLabel=0;
		for(i=0;i<Row;i++)
		{
			printf("%d",score[i][j]);
			if(score[[i][j]>max)
			{
				max=score[i][j];
				rowLabel=i;
			}}
		printf("\n");
		printf("%s同学的%s成绩:%d最高\n",stuName[rowLabel],curName[rowLabel],score[rowLabel][j]);
	}
}