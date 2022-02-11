//1.p61数组的大小必须实际是常量,常量表达式或符号常量,且其值必须为正.
/*#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int a[n];
}*/
/*
#include<stdio.h>
main()
{
	const int n=10;
	int a[n];
}*/
/*
#include<stdio.h>
#define M 10
main()
{
	int a[n];
}*/
/*
#include<stdio.h>
main()
{
	int a[2+2*4];
}*/
/*
#include<stdio.h>
#define M 2
#define N 8
main()
{
	int a[M+N];
}*/
//2.对于数组a[N],则数组的下标范围为[0,n-1],超出范围输出随机数
/*
#include<stdio.h>
main()
{
	int num[5]={1,2,3,4,5};
	int i;
	for(i=0;i<=5;i++)
		printf("%4d",num[i]);
}*/
/*
#include<stdio.h>
void main()
{
	char a[10];
	int i;
	for(i=1;i<5;i++)
		scanf("%c",&a[i]);
	printf("%c",a[0]);
}*/

/*
#include<stdio.h>
void main()
{
	double y[4][5];
	printf("%lf",y);

}*/
/*
#include<stdio.h>
void main()
{
	int a[100],b[100];
	int n=5,i,j,t;
	printf("输入数组a的前%d个元素:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[i]=a[i];
	if(n%2==1)
		j=n/2+1;
	for(i=0;i<(n/2);i++)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		j++;
	}
	printf("对换后的数组为:");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
}*/
/*
#include<stdio.h>
void main()
{
	float a[40];
	int n,i,t=0;
	printf("输入学生总数:");
	scanf("%d",&n);
	if(n>40)
		printf("人数过多");
	printf("依次输入学生成绩:");
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	for(i=0;i<n;i++)
	{
		if(t<a[i])
			t=a[i];
	}
	printf("学号为%d最高分为%d",i,t);
}*/

/*
#include<stdio.h>
void main()
{
	int a[4],i,t;
	printf("输入数据:(四位的整数)");
	for(i=0;i<4;i++)
		scanf("%d",&a[i]);
	for(i=0;i<4;i++)
		a[i]=(a[i]+5)%10;
	for(i=0;i<2;i++)
	{
		t=a[i];
		a[i]=a[3-i];
		a[3-i]=t;
	}
	printf("%d\n",a[4]);
}*/


/*
#include<stdio.h>
char c[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char result[];
int count=0;

void convert(int n)
{
	if(n<=26)
	{
		result[count++]=c[n-1];
	}
	else
	{
		if(n%26==0)
		{
			convert(n/26-1);
			convert(26);
		}
		else
		{
			convert(n/26);
			convert(n%26);
		}
	}
}

void main()
{
	int n;
	scanf("%d",&n);
	convert(n);
	printf("%s",result);
}*/

