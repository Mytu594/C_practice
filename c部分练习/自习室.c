/*#include<stdio.h>
main()
{
	int n,m;
	for(m=0;m<=4;m++)
	{
		for(n=0;n<=m;n++)
			printf(' '*(4-m)+'*'*m);
	}
}*/

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
}