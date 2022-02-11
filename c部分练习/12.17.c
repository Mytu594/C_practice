/*#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("请输入一个三位数的整数:");
	scanf("%d",&d);*/
//8-3
/*#include<stdio.h>
double fun(int m,int n)
{
	double p,t=1.0;
	int i;
	for(i=1;i<=m;i++)
		t=t*i;
	p=t;
	for(t=1.0,i=1;i<=n;i++)
		t=t*i;
	p=p/t;
	for(t=1.0,i=1;i<=m-n;i++)
		t=t*i;
	p=p/t;
	return p;
}
void main()
{
	printf("%f\n",fun(20,10));
	printf("%f\n",fun(15,6));
	printf("%f\n",fun(16,15));
}*/

/*
#include<stdio.h>
#define m 100
int fun(int a[][2],int b[][2],int n);
void main()
{
	int i,j,n,a[m][2],b[m][2];
	printf("请输入学生的总数：");
	scanf("%d",&n);
	printf("请输入学生的学号和成绩：");
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("高于平均分的学生数量为%d",fun(a,b,n));
}
int fun(int a[][2],int b[][2],int n)
{
	int j,sum=0,avg,total=0;
	for(j=0;j<n;j++)
	{
		sum+=a[j][1];
	}
	avg=sum/n;
	for(j=0;j<n;j++)
	{
		if(a[j][1]>avg)
		{
			b[j][1]=a[j][1];
			total=total+1;
		}
			
	}
	return (total);
}*/

	

/*
#include<stdio.h>
#define m 100
int fun(int a[][2],int b[][2],int n);
void main()
{
    int i,j,n;
    int a[m][2];
    int b[m][2];
    printf("输入学生人数：");
    scanf("%d",&n);
    printf("输入学生的学号和成绩：");
    for (i=1;i<(n+1);i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("高于平均分的学生人数有%d个",fun(a,b,n));
    getchar();getchar();
}           
int fun( int a[][2], int b[][2], int n )
{
    int i,num=0; 
    float sum=0,aver;
    for(i=1;i<(n+1);i++)
    {
        sum+=a[i][1];
     }
     aver=sum/n;
     for (i=1;i<(n+1);i++)
     {
         if (a[i][1]>aver)
         {
             b[i][1]=a[i][1];
             num=num+1;
         }
     }
     return(num);
 }*/


