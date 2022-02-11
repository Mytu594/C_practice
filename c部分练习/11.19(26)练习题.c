
//编程实现：用三种方式分别求n！。
/*#include<stdio.h>
void main()
{
	int fac=1,i=1,n;
	printf("please enter the number:");
	do{
		scanf("%d",&n);
		if(n<0)                                      
		{
			printf("输入无效\n");
		}
		if(n>12)
		{
			printf("越界");
		}
	}while(n<=0||n>=12);
		while(i<=n)
		{
			fac=fac*i;
			i++;
		}
		printf("%d!=%d\n",n,fac);
}*/

//输出10以内的所有素数。
/*#include<stdio.h>
void main()
{
	int num,i;
	printf("10以内的素数有:");
	for(num=2;num<=10;num++)
	{
		for(i=2;i<=num-1;i++)
		{
			if(num%i==0)
			{
				break;
			}
		}
		if(i==num)
			printf("%d",num);
	}
	printf("\n");
}*/

//实验指导书P32：第9题
/*#include<stdio.h>
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

//买苹果
//0-30的偶数
/*#include<stdio.h>
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

//输出100以内的所有水仙花数。
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


//输入一串字符，以‘.’作为输入结束标志，计算其中字母和数字的个数并输出。
/*#include<stdio.h>
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


//a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单
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

  }*/

//7行菱形
/*
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=4;i++) //先打印上边的四行
	{
		for(j=1;j<=4-i;j++) //控制要打印的空格数量
			printf(" ");
		for(k=1;k<=2*i-1;k++) //控制要打印的星号数
			printf("*");
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++) //控制要打印的空格数
			printf(" ");
		for(k=1;k<=7-2*i;k++) //控制要打印的星号数
			printf("*");
		printf("\n");
	}
}*/

//任意行菱形
/*
#include<stdio.h>
#include<math.h>
main()
	{ 
		int i,j,n,k;
		scanf("%d",&n);
		n=n+n-1;//不符合要求的话去掉这句
		for(i=1;i<=n;i++)
		{ 
			for(j=1;j<=abs(n/2-i+1);j++)
				printf(" ");
			for(k=1;k<=n-2*abs(n/2-i+1);k++)
				printf("*");
			printf("\n");
		}
}*/
//百元买鸡(有点bug)
/*
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
}*/


