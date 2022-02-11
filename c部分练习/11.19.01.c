/*#include<stdio.h>
main()
{
	int n,m;
	for(n=2;n<=10;n++)
	{
		for(m=2;m<=n;m++)
			if(n%m==0)
				break;
			if(n==m)
				printf("%d",n);
	}
}*/
/*
#include<stdio.h>
main()
{
	int x,y,z;
	double s;
	for(x=0;x<9;x++)
	{
		for(y=0;y<12;y++)
		{
			z=36-x-y;
			s=4*x+3*y+z/2.;
			if(s==36.0)
			{
				printf("%d\n%d\n%d\n",x,y,z);
			}
		}
	}
}*/

/*
#include<stdio.h>
main()
{
	int n,i,t;
	double a,b;
	n=2,i=2,t=1;
	a=0.8;
	do
	{
		n=n*i;
		b=a*n/t;
		printf("%lf\n",b);
		if(n<=100)
			t++;
	}
	while(n<=100);
}*/


/*
#include<stdio.h>
main()
{
	int n=0;
	do
	{
		if(n%2==0)
			printf("%d\n",n);
			n++;
		continue;
	}
	while(n>=0&&n<30);
}*/
/*
#include<stdio.h>
void main()
{
	int day=0,i=2;
	float everage,money=0.0; //建议改成double类型
	while(i<100)
	{
		money=0.8*i+money;
		day=day+1;
		i=i*2;
		if (i>100)	//if判断多余，没意义。
		{ 
			money=money-0.8*i;
			i=i/2;
			break;
		}
	}
	printf("the num of apple is %d\n",i);
	printf("the totle money is %d\n",money); //那个%d改成%f,结果就没那么大了。。
	everage=money/day;
	printf("%d\n",everage); //这里的%d改成%f
}*/
/*
#include<stdio.h>
void main()
{	int ch_num,dig_num;
	char ch;
	ch_num=dig_num=0;
	do{
		ch=getchar();
		if（(ch>'A'&&ch<'Z')||(ch>'a'&&ch<'z')）
		ch_num++;
		if(ch>'0'&&ch<'9')
		dig_num++;
	}while(ch!='#');
	printf("The number of chars is:%d\n",ch_num);
	printf("The number of digital is:%d\n",dig_num);
}*/


/*
#include <stdio.h>  
int main()
 {
  char i,j,k;            
  for (i='x';i<='z';i++)
    for (j='x';j<='z';j++)
     if (i!=j)
       for (k='x';k<='z';k++)
 if (i!=k && j!=k)
   if (i!='x' && k!='x' && k!='z')
      printf("A--%c\nB--%c\nC--%c\n",i,j,k);
   return 0;

  }
  */

#include<stdio.h>
main()
{
	int a=0,b=0,c=0;
	for(a=0;a<=20;a++)
	{
		for(b=0;b<=33;b++)
		{
			c=100-a-b;
			c%3==0;
			if(3*a+5*b+c/3==100)
			{
				printf("公鸡的数量为:%d\n",a);
                printf("母鸡的数量为:%d\n",b);
                printf("小鸡的数量为:%d\n",c);
			}
		}
	}
}

