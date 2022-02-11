/*
#include<stdio.h>
void main()
{
	int i,j,n,s;
	for(j=2;j<1000;j++)
	{
		n=-1;
		s=j;
		for(i=1;i<=j/2;i++)
		{
			if((j%i)==0)
			{
				n++;
				s=s-i;
			}
		}
		if(s==0)
		{
			printf("%d its factors are:%d %d %d\n",j,i,n,s);
		}
	}
}*/

/*
#include<stdio.h>
void main()
{
	int fac=1,i=1,n;
	printf("please enter the number:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("输入无效\n");
	}
	else if(n>12)
	{
		printf("越界");
	}
		else if(n>0)
		{
			do
			{
				break;
			}
			while(n>=0||n<=12);
			while(i<=n)
			{
				fac=fac*i;
				i++;
			}
			printf("%d!=%d\n",n,fac);
	}
}*/
/*
#include<stdio.h>
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
/*
#include  <stdio.h>
void main()
{ 
	 int  m, n;
	 for (m=1; m<10; m++)   
		 printf("%4d", m);    //打印表头
	 printf("\n");
	 for (m=1; m<10; m++)   
		 printf("   _");
	 printf("\n");
	 for (m=1; m<10; m++) //打印九九表  m控制行，n控制列	
    {
		for (n=1; n<10; n++)
		{
			printf("%4d", m * n); 	
    	}
		printf("\n"); 
  	 }
}
*/
/*
#include<stdio.h>
void main()                 
{
	int m,n;
	for(m=0;m<=10;m++)
		printf("%4d",m);
	printf("\n");
	for(m=0;m<=10;m++)
		printf("   _");
	printf("\n");
	for(m=0;m<=10;m++)
	{
		for(n=0;n<=10;n++)
		{
			printf("%4d",m*n);
		}
		printf("\n");
	}
}*/
/*
#include<stdio.h>
void main()                 
{
	int m,n;
	for(m=0;m<=10;m++)
		printf("%4d",m);
	printf("\n");
	for(m=0;m<=10;m++)
		printf("   _");
	printf("\n");
	for(m=0;m<=10;m++)
	{
		for(n=0;n<=m;n++)
		{
			printf("%4d",m*n);
		}
		printf("\n");
	}
}*/
/*
#include<stdio.h>
main()
{
	int n,m;
	for(m=0;m<=5;m++)
	{
		for(n=0;n<=5;n++)
			printf(" "*(5/2)+"*"*n);
	}
}*/


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







	

	


