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
		printf("������Ч\n");
	}
	else if(n>12)
	{
		printf("Խ��");
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
			printf("������Ч\n");
		}
		if(n>12)
		{
			printf("Խ��");
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
		 printf("%4d", m);    //��ӡ��ͷ
	 printf("\n");
	 for (m=1; m<10; m++)   
		 printf("   _");
	 printf("\n");
	 for (m=1; m<10; m++) //��ӡ�žű�  m�����У�n������	
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
				printf("����������Ϊ:%d\n",a);
                printf("ĸ��������Ϊ:%d\n",b);
                printf("С��������Ϊ:%d\n",c);
			}
		}
	}
}







	

	


