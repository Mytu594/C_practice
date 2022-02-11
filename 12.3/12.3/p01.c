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
}
/*
#include<stdio.h>
void main()
{
	
	int i,j,n=0,s;
	int a[100];
	for(i=2;i<1000;i++)
	{
		n=0;
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s+=j;
				a[n]=j;
				n++;
			}
		}
		if(s==i)
		{
			printf("%d为完数,它的因子是:",i);
			for(j=0;j<n;j++)
			{
				printf("%5d",a[j]);
			}
			printf("\n");
		}
	}
}*/
/*
#include<stdio.h>
void main()
{
	int i,j,s,m=0;
	int a[100];    //声明一个较大的数组
	for(i=2;i<1000;i++)     //嵌套循环,最外层的循环依次将2~999存储到变量i中
	{
		s=0;
		m=0;
		for(j=1;j<i;j++)    //i每取一次值,内层循环就依次把小于i的数存储在变量j中
		{
			if(i%j==0)    //若j为i的因子则执行if块
			{
				s+=j;     //求除本身的所有因子的和
				a[m]=j;   //将每个因子依次放入较小的数组里
				m++;     //计算因子的个数,确定存放因子的数组规模
			}
		}
		if(i==s)           //判断是否为完数
		{
			printf("%d its factor are :",i);
			for(j=0;j<m;j++)        //依次输出完数的因子
			{
				printf("%5d",a[j]);
			}
			printf("\n");
		}
	}
}*/

