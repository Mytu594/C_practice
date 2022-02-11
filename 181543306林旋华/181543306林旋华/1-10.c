/*#include<stdio.h>
main()
{
	int m,n,j;
	int i=0;
	char ch,a[100],b[100];
	printf("please enter the star(m) and end(n)(n<m and m<=5 and n>=1):\n");
	scanf("%d%d",&m,&n);
	printf("please enter a string:");
	do
	{
		a[i]=getchar();
		i++;
	}while((ch=getchar())!='\n ');

	for(j=m;j<=n;j++)
	{
		a[j]=b[j];
	}
	printf("%c",b[j]);


}*/
/*
#include <stdio.h>
void main()
{
	int i=0,j,k,m,n,t,a[100];
	printf("please enter a string,the star(m) and end(n)(n<m and m<=5 and n>=1):\n");
	scanf("%d,m=%d,n=%d",&k,&m,&n);
	while(k)
	{	
		a[i]=k%10;k/=10;i++;
	}
	for(j=0;j<i/2;j++)
	{
		t=a[j];a[j]=a[i-j-1];a[i-j-1]=t;	
	}
	for(j=m-1;j<n;j++)
		printf("%d",a[j]);
}*/

/*
#include<stdio.h>
#include<stdlib.h>
int count()
{
	int a,b,c,d=0;
	int  result=0;
	char li2[4]={'+','-','*','/'};
	a=rand()%10+1;
	b=rand()%10+1;
	c=rand()%4+1;
	switch(c)
	{
		case 1:result=a+b;break;
		case 2:result=a-b;break;
		case 3:result=a*b;break;
		case 4:result=a/b;break;
	}
	printf("\n%d%*c%d=",a,b,li2[c],b);
	scanf("%d",&d);
	return result;
}
void main()
{
	int i,j=0,k=0,score=0,d=0,result=0;
	printf("你需要做10道题，做错无法重改\n");
	for(i=0;i<10;i++)
	{
		d=count();
		if(d==result)
		{
			printf("Right!");
			j++;
		}
		else
		{
			printf("Not corrert!");
			k++;
		}
	}
	score=10*j;
	printf("你的总分为%d,你做错了%d道题",score,k);
}*/












	

		









