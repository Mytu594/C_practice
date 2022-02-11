/*#include<stdio.h>
main()
{
	int m,n,j;
	int i=0;
	char ch,a[100],b[100];
	printf("please enter the star(m) and end(n)(n<m and m<=5 and n>=1):\n");
	scanf("%d%d",&m,&n);
	printf("please enter a string:");
	do
	{
		a[i]=getchar();
		i++;
	}while((ch=getchar())!='\n ');

	for(j=m;j<=n;j++)
	{
		a[j]=b[j];
	}
	printf("%c",b[j]);


}*/
/*
#include <stdio.h>
void main()
{
	int i=0,j,k,m,n,t,a[100];
	printf("please enter a string,the star(m) and end(n)(n<m and m<=5 and n>=1):\n");
	scanf("%d,m=%d,n=%d",&k,&m,&n);
	while(k)
	{	
		a[i]=k%10;k/=10;i++;
	}
	for(j=0;j<i/2;j++)
	{
		t=a[j];a[j]=a[i-j-1];a[i-j-1]=t;	
	}
	for(j=m-1;j<n;j++)
		printf("%d",a[j]);
}*/


/*#include<stdio.h>
#include<stdlib.h>
int count()
{
	int a,b,c;
	int  result=0;
	char li2[4]={'+','-','*','/'};
	a=rand()%10+1;
	b=rand()%10+1;
	c=rand()%4+1;
	switch(c)
	{
		case 1:result=a+b;break;
		case 2:result=a-b;break;
		case 3:result=a*b;break;
		case 4:result=a/b;break;
	}
	printf("\n%d%*c%d=",a,b,li2[c],b);
	return result;
}
	
void main()
{
	int i=0,j=0,k=0,score=0,d=0,result=0;
	printf("你需要做10道题，做错无法重改\n");
	for(i=0;i<=10;i++)
	{
        count();
		scanf("%d",&d);
		if(d==result)
		{
			printf("Right!");
			j++;
		}
		else
		{
			printf("Not corrert!");
			k++;
		}
	}
	score=10*j;
	printf("你的总分为%d,你做错了%d道题",score,k);
}*/


/*#include<stdio.h>
int judge(int i,int j,int k)
{
	int a[11]={0},g;
	while(i>0)
	{
		a[g=i%10]++;
		if(a[g]>1)
			return 0;
		i/=10;
	}
	while(j>0)
	{
		a[g=j%10]++;
		if(a[g]>1)
			return 0;
		j/=10;
	}
	while(k>0)
	{
		a[g=k%10]++;
		if(a[g]>1)
			return 0;
		k/=10;
	}
	if(a[0]>0)
		return 0;
	for(i=1;i<=9;i++)
	{
		if(a[i]==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int i,j, k,count=0;
		for(i=1;i<=n-1;i++)
		{
			for(k=1;k<=9999;k++)
			{
				if(i!=k)
				{
					j=(n-i)*k;
					if(judge(i,j,k)
						count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}*/ 

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a,b,c,s;
int s[10];
char ch;
int func()
{
	srand(time(NULL));
	a=rand()%10+1;
	b=rand()%10+1;
	c=rand()%4+1;
	switch(c)
	{
	case1:s=a+b,printf("%d+%d=\n",a,b);break;
	case2:s=a-b,printf("%d-%d=\n",a,b);break;
	case3:s=a*b,printf("%d*%d=\n",a,b);break;
	case4:s=a/b,printf("%d/%d=\n",a,b);break;
	}
	printf("请输入你的答案:");
	return s;
}
char duicuo(int a)
{
	int k=0;
	if(a==s)
	{
		printf("right");
		k++;
	}
	else
	{
		printf("not corrert");
	
	}
	return k;
}
void main()
{
	int a[10];
	int i,score=0,a,k;
	printf("你需要做10道题，做错无法重改\n");
	for(i=0;i<=10;i++)
	{
        func();
		scanf("%d",&a);
		duicuo(int a)
		score=10*j;
		printf("你的总分为%d,你做错了%d道题",score,k);
	}
}*/

/*#include<stdio.h>
#include<string.h>
void main()
{
	char a[100][10];
	int i,j,k,t=0;
	printf("输入参赛国家的名字：");
	printf("\n");
	for(i=0;i<100;i++)
		scanf("%s",a[i]);
	for(j=0;j<100;j++)
	{
		if(strcmp(a[j],a[i])>0)
		{
			for(i=0;i<6;i++)
			{
				t=a[j][i];
				a[j][i]=a[j+1][i];
				a[j+1][i]=t;
			}
		}
	}
	printf("排序后为：");
	printf("\n");
	for(i=0;i<100;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
*/

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Cal(int a,int b,int c)
{
	int answer,result;
	switch(c)
	{
	case 1:
		printf("%d+%d=\n",a,b);
		result=a+b;
		break;
	case 2:
		printf("%d-%d=\n",a,b);
		result=a-b;
		break;
	case 3:
		printf("%d*%d=\n",a,b);
		result=a*b;
		break;
	case 4:
		if(b!=0)
		{
			printf("%d/%d=\n",a,b);
			result=a/b;
		}
		else
		{
			printf("分母不能为零!\n");
		}
		break;
	default:
		printf("未知操作!\n");
		break;
	}
	printf("请输入你的答案:");
	scanf("%d",&answer);
	if(result==answer)
		return 1;
	else
		return 0;
}
void Print(int R)
{
	
	if(R)
		printf("Right!\n");
	else
		printf("Not correct!\n");
}
main()
{
	
	int a,b,error,answer,score,i,c;
	srand(time(NULL));
	error=0;
	score=0;
	printf("请做十道四则运算题，做错没有机会重做\n");
	for(i=0;i<10;i++)
	{
		a=rand()%10+1;
		b=rand()%10+1;
		c=rand()%4+1;
		answer=Cal(a,b,c);
		Print(answer);
		if(answer==1)
			score=score+10;
		else
			error++;
	}
	printf("总分为%d,错误数目共%d道\n",score,error);
}*/

/*
#include<stdio.h>
#include<stdlib.h>
char name[5]={'李晓路','古飓风','夏涧水','冬冲鸟','秋凤歌'};
char id[5]={'11001','11002','11003','11004','11005'};
char subject[4]={'L10001','L10002','L10003','L10004'};
int score[5][4];
void getscore()
{
	char name[5],id[5],subject[4],total[5];
	int L10001,L10002,L10003,L10004,total[5],total,i,j;
	printf("请依次输入学生信息：\n");
	printf("姓名 学号 数学 英语 数据结构\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j
		scanf("%s %s %d %d %d %d", &name, &id, &L10001, &L10002, &L10003,&L10004);
		total=L10001+L10002+L10003+L10004;
		total[i]=total;
	}
}
void findinf()
{
	char id[4];
	printf("请输入学生学号:");
	scanf("%s",id);
*/


	


 
















	

		









