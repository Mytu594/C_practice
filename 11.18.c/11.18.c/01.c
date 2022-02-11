/*#include<stdio.h>
void main(void)
{
	double x;
	printf("输入实数x:\n");
	scanf("%lf",&x);
	double s1=1.0,p=1.0,sum=0.0,s0,t=1.0;
	int n=1;
	do
	{
		s0=s1;
		sum+=s0;
		t*=n;
		p*=(0.5-n+1)*x;
		s1=p/t;
		n++;
	}
	while(fabs(s1)>1e-6);
	printf("sum=%f\n",sum);
}*/

//回文
/*#include<stdio.h>
main()
{
	long ge,shi,qian,wan,x;
	scanf("%ld",&x);
	wan=x/10000;
	qian=x%10000/1000;
	shi=x%100/10;
	ge=x%10;
	if(ge==wan&&shi==qian)
		printf("this number is a huiwen\n");
	else
		printf("this number is not a huiwen\n");
}*/

//星期
/*#include<stdio.h>
main()
{
	int weekday;
	printf("Please input weekday:\n");
	scanf("%d",&weekday);
	if(0==weekday)
		printf("today is sunday");
	else if(1==weekday)
		printf("today is monday");
	else if(2==weekday)
		printf("today is tuesday");
	else if(3==weekday)
		printf("today is wednesday");
	else if(4==weekday)
		printf("today is thurday");
	else if(5==weekday)
		printf("today is friday");
	else if(6==weekday)
		printf("today is saturday");
}*/


//比较大小
/*#include<stdio.h>
main()
{
	int a,b,c;
	int t;
	printf("请输入三个整数:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{t=a;a=b;b=t;}
	if(a<c)
	{t=a;a=c;c=t;}
	if(b<c)
	{t=b;b=c;c=t;}
	printf("a=%d,b=%d,c=%d\n",a,b,c);
}*/

//大小写字母转换
/*#include<stdio.h>
main()
{
	char ch;
	printf("please input ch:\n");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
		ch-=32;
	else if(ch>='A'&&ch<='Z')
		ch+=32;
	printf("ch=%c\n",ch);
}*/


//判断三角形的形状
/*#include<stdio.h>
main()
{
	int a,b,c;
	printf("please input a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(!(a+b>c)||!(a+c>b)||!(b+c>a))
		printf("0\n");
	else if(a==b&&b==c)
		printf("3\n");
	else if(a==b||b==c||a==c)
		printf("2\n");
	else
		printf("1\n");
}*/

//分段函数
/*#include<stdio.h>
main()
{
	int x,y;
	printf("please input x:\n");
	scanf("%d",&x);
	if(2<x&&x<=10)
		y=x*(x+2);
	else if(-1<x&&x<=2)
		y=2*x;
	else if(x<=-1)
		y=x-1;
	printf("y=%d\n",y);
}*/

//数邻居格
/*#include<stdio.h>
main()
{
	int id,x,y,num;
	printf("please input id\n");
	scanf("%d",&id);
	x=id%7;
	y=id/7;
	if(id==0||id==6||id==42||id==48)
		num=2;
	else if(x==0||x==6||y==0||y==6)
		num=3;
	else 
		num=4;
	printf("numof neighbor is%d\n",num);
}*/
//判断是否相邻
/*#include<stdio.h>
main()
{
	int id1,id2,x1,y1,x2,y2;
	printf("please input id1 ang id2\n");
	scanf("%d%d",&id1,&id2);
	x1=id1%7;
	x2=id2%7;
	y1=id1/7;
	y2=id2/7;
	if(x1==x2&&((y1-y2==1)||(y2-y1==1))||(y1==y2&&((x1-x2==1)||(x2-x1==1))))
		printf("id1 and id2 is connected\n");
	else 
		printf("id1 and id2 is not connected\n");
}*/

//判断是否是一个转向
/*
#include<stdio.h>
main()
{
	int id1,id2,id3,x1,x2,x3,y1,y2,y3;
	printf("please input id1,id2,id3\n");
	scanf("%d%d%d",&id1,&id2,&id3);
	x1=id1%7;
	y1=id1/7;
	x2=id2%7;
	y2=id2/7;
	x3=id3%7;
	y3=id3/7;
	if((x1==x2&&x2==x3)||(y1==y2&&y2==y3))
		printf("0\n");
	else if(x1==x2&&((y1-y2)==1||(y2-y1)==1))||(y1==y2&&((x1-x2)==1||(x2-x1)==1))&&(x2==x3&&((y2-y3)==1||(y2==y3&&((x2-x3)==1||(x3-x2)==1))))
		printf("1\n");
	else
		printf("0\n");
}*/


//6-1输出原样字符
//6-2输出后n-1为数字
/*
#include<stdio.h>
main()
{
	int k=0;
	while(k=1)
		k++;
}*/
/*
#include<stdio.h>
main()
{
	char ch;
	while((ch=getchar())!='\n')
	{
		if(ch>='A'&&ch<='Z')
		{
			ch=ch+32;
			printf("%c",ch);
		}
	}
}*/
/*
#include<stdio.h>
main()
{
	int x=3;                 //x-2=1 !1=0 0-2=-2
	do
	{
		printf("%3d",x-=2);
	}
	while(!(--x));
}*/
/*
#include<stdio.h>
main()
{
	int i,j;
	for(i=0,j=1;i<=j+1;i+=2,j--)
		printf("%d\n",i);
}*/
/*
#include<stdio.h>
main()
{
	int x=10,y=10,i;
	for(i=0;x>8;y=++i)
		printf("%d,%d",x--,y);
}*/
/*
#include<stdio.h>
main()
{
	int n=9;
	while(n>6)
	{
		n--;
		printf("%d",n);
	}
}*/
/*
#include<stdio.h>
main()
{
	int num=0;
	while(num<=2)
	{
		num++;
		printf("%d\n",num);
	}
}*/
/*
#include<stdio.h>
main()
{
	int y=10;
	do
	{y--;}
	while(--y);
	printf("%d\n",y--);
}*/
/*
#include<stdio.h>
main()
{
	int i=5;
	for(;i<=15;)
	{
		i++;
		if(i%4==0)
			printf("%d",i);
		else
			continue;
	}
}*/
/*
#include<stdio.h>
main()
{
	int x,y;
	for(y=1,x=1;y<=50;y++)
	{
		if(x>=10)
			break;
		if(x%2==1)
		{
			x+=5;
			continue;
		}
		x-=3;
	}
}*/ //运行后没出答案
/*
#include<stdio.h>
main()
{
	long int f,s;
	int i,j,n;
	s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		f=1;
		for(j=1;j<=i;j++)
			f*=j;
		s=s+f;
	}
	printf("n=%d,s=%ld\n",n,s);
}*/
/*
#include<stdio.h>
main()
{
	int i,j,x=0;
	for(i=0;i<3;i++)
	{
		if(i%3==2)
			break;
		x++;
		for(j=0;j<4;j++)
		{
			if(j%2)
				break;
			x++;
		}
		x++;
	}
	printf("x=%d\n",x);
}*/
/*
#include<stdio.h>
main()
{
	int m,i;
	for(m=2;m<=10;m++)
	{
		for(i=2;i<=m;i++)
			if(m%i==0)
				break;
		if(i==m)
			printf("%3d",m);
	}
}*/
/*
#include <stdio.h> 
#include <stdlib.h>
void main() 
{ 
    int i,j,k,n; 
    printf("'water flower'number is:"); 
    for(n=100;n<999;n++) 
    { 
        i=n/100;
        j=n/10%10;
        k=n%10;
        if(n==i*i*i+j*j*j+k*k*k) 
        { 
            printf("%-5d",n); 
        } 
    } 
    printf("\n"); 
} */

/*
#include<stdio.h>
main()
{
	int n,m,i;
	m=1;
	printf("请输入n=");
	scanf("%d",&n);
	if(n<0)
	{
		printf("输入数据无效");
	}
	else if(n>12)
	{
		printf("越界");
	}
	else if(n==0)
	{
		printf("0!=1");
	}
	else
	{
		for(i=1;i<=n;i++)
			m=m*i;
		printf("%d!=%d",n,m);
	}
}*/


#include<stdio.h>
main()
{
	int n,m,i;
	m=1;i=1;
	printf("请输入n=");
	scanf("%的",&n);
	if(n<0)
	{
		printf("输入数据无效");
	}
	else if(n>12)
	{
		printf("越界");
	}
	else if(n==0)
	{
		printf("0!=1");
	}
	while(n>0||n<12&&i<=n)
	{
		m=m*i;
		i++;
		printf("%d!=%d",n,m);
	}
}




	













