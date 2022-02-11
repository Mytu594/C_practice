/*#include<stdio.h>
void main()
{
	int num[5]={1,2,3,4,5};
	int i;
	for(i=0;i<=5;i++)
		printf("%4d",num[i]);
}*/
/*#include<stdio.h>
void main()
{
	char a[10];
	int i;
	for(i=1;i<=5;i++)
		scanf("%c",&a[i]);
	printf("%c",a[0]);
}*/
/*#include<stdio.h>
void main()
{
	int a[100],b[100];
	int n=0,i,j,t;
	printf("输入正整数n:");
	scanf("%d",&n);
	printf("输入数组a的前%d个元素:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n;i++)
		b[i]=a[i];
	if(n%2==1)
		j=n/2+1;
	else
		j=n/2;
	for(i=0;i<(n/2);i++)
	{
	t=a[i];
	a[i]=a[j];
	a[j]=t;
	j++
	}
	printf("对换后的数组为:");
	for(i=0;i<n;i++)
	  printf("%d",a[i]);
	printf("\n");
}*/
/*#include<stdio.h>
void main()
{
	int a[5],i,t=0,j=3;
	printf("输入数组a的前5个元素:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
    for(i=0;i<2;i++)
	{
	    t=a[i];
		a[i]=a[j];
		a[j]=t;
		j++;
	}
	printf("对换后的数组为:");
	for(i=0;i<5;i++)
	  printf("%d",a[i]);
	printf("\n");
}*/
/*#include<stdio.h>
void main()
{
	float a[40];
	int n,i,t=0;
	printf("输入总学生数:");
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
/*#include<stdio.h>
void main()
{
	int a[4],i,t;
	printf("输入数据:（四位的整数）");
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
	printf("输出数据:");
	for(i=0;i<4;i++)
		printf("%d",a[i]);
}*/

/*#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,z,k=2,m=10,a[100];
	printf("输入m和k(逗号隔开):");
	scanf("%d,%d",m,k);
	for(i=m;i<2*m;i++)
	{
		for(j=2;j<=m;j++)
		{
			for(z=0;z<k;z++)
			{
				if(i%j!=0)
					a[z]=i;
				else
					break;
			}
		}
	}
	printf("素数为%d:");
	for(i=0;i<k;i++)
		printf("%d",a[i]);
}*/










