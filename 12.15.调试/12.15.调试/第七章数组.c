//1����a��k������
/*#include<stdio.h>
void main()
{
	int m,k;
	int xx[200];
	int g=0,i,j,flag=1;
	int cnt=0;
	printf("please input m,k:\n");
	scanf("%d%d",&m,&k);
	i=m+1;
	while(cnt<k)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		if(j>=i)
		{
			xx[cnt]=i;
			cnt++;
		}
		i++;
	}
	printf("�ҵ�������Ϊ:\n");
	for(j=0;j<k;j++)
		printf("%d\t",xx[j]);
	getchar();getchar();
}*/

//2Ԫ�ؽ���λ��
/*
#include<stdio.h>
#define N 100
void main()
{
	int n,p;
	int a[N],b[N];
	int i,j=0;
	printf("please input n,p:\n");
	scanf("%d%d",&n,&p);
	printf("pleas input %d intergers:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<p;i++)
	{
		b[i]=a[i];
	}
	for(i=p;i<=n-1;i++)
	{
		a[j]=a[i];
	}
	i=0;
	for(;j<n-1;j++)
	{
		a[j]=b[i];
		i++;
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}*/

//3
/*
#include<stdio.h>
#define N 10
void main()
{
	int a[N];
	int i,j=0,t=0;
	printf("please input arrey a:\n");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=1;i<N;i++)
	{
		if(a[t]==a[i])
			;
		else
		{
			a[j]=a[t];
			t=i;
			j++;
		}
	}
	a[j]=a[t];
	for(i=0;i<=j;i++)
		printf("%d",a[i]);
}*/

//10
/*
#include<stdio.h>
void main()
{
	int a[49];
	int x1,y1,x2,y2;
	int i,j,id1,id2;
	for(j=0;j<49;j++)
		a[j]=0;
	for( id1=0;id1<49;id1++)
	{
		for( id2=0;id2<49;id2++)
		{
			int x1,y1,x2,y2;
			x1=id1%7;
			y1=id1/7;
			x2=id2%7;
			y2=id2/7;
			if((x1==x2&&((y1-y2)==1)||(y2-y1==1))||(y1==y2&&((x1-x2)==1||(x2-x1)==1)))
				a[id1]++;
		}
	}
	for( i=0;i<49;i++)
	{
		printf("%d's neighbor is %d\n",i,a[i]);
	}
}*/

//11
/*
#include<stdio.h>
void main()
{
	int a[168][2];
	int i,j,id1,id2;
	int x1,x2,y1,y2;
	int t=0;
	for(i=0;i<168;i++)
		for(j=0;j<2;j++)
			a[i][j]=0;
	for(id1=0;id1<49;id1++)
	{
		for(id2=0;id2<49;id2++)
		{
			x1=id1%7;
			y1=id1/7;
			x2=id2%7;
			y2=id2/7;
			if((x1==x2&&((y1-y2)==1)||(y2-y1==1))||(y1==y2&&((x1-x2)==1||(x2-x1)==1)))
			{
				a[t][0]=id1;
				a[t][1]=id2;
				t++;
			}
		}
	}
	for(i=0;i<168;i++)
	printf("%d%d%d\n",i,a[i][0],a[i][1]);
}*/

//12
/*
#include<stdio.h>
void main()
{
	int a[49][49];
	int i,j;
	int id1,id2,x1,x2,y1,y2;
	for(i=0;i<49;i++)
		for(j=0;j<49;j++)
			a[i][j]=0;
	for(id1=0;id1<49;id1++)
	{
		for(id2=0;id2<49;id2++)
		{
			x1=id1%7;
			y1=id1/7;
			x2=id2%7;
			y2=id2/7;
			if((x1==x2&&((y1-y2)==1)||(y2-y1==1))||(y1==y2&&((x1-x2)==1||(x2-x1)==1)))
			{
				a[id1][id2]=1;
			}
		}
	}
	for(i=0;i,49;i++)
	{
		for(j=0;j<49;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
}*/

//12.10(12.17)
//1
/*
#include<stdio.h>
int max(int a,int b)
{
	int m;
	m=(a>b)?a:b;
	return m;
}*/
/*
#include<stdio.h>
void swap(int a,int b);
void main()
{
	int i,j;
	i=1;j=2;
	printf("����ǰi=%d,j=%d\n",i,j);
	swap(i,j);
	printf("������i=%d,j=%d\n",i,j);
}
void swap(int a,int b)
{
	int t;
	t=a;a==b;b=t;
	printf("swap�����еĽ�����a=%d,b=%b\n",a,b);
}*/
//8
/*
#include<stdio.h>
#define m 100
int fun(int a[][2],int b[][2],int n);
void main()
{
    int i,j,n;
    int a[m][2];
    int b[m][2];
    printf("����ѧ��������");
    scanf("%d",&n);
    printf("����ѧ����ѧ�źͳɼ���");
    for (i=1;i<(n+1);i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("����ƽ���ֵ�ѧ��������%d��",fun(a,b,n));
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

//2
/*
#include<stdio.h>
int func(int a,int b)
{
	return(a+b);
}
main()
{
	int x=2,y=5,z=8,r;
	r=func(func(x,y),z);
	printf("%\d\n",r);
}*/

/*
#include<stdio.h>
int a,b;
void fun()
{
	a=100;
	b=200;
}
main()
{
	int a=5,b=7;
	fun();
	printf("%d%d\n",a,b);
}*/
/*
#include<stdio.h>
long fib(int n)
{
	if(n>2)
		return(fib(n-1)+fib(n-2));
	else
		return(2);
}
main()
{
	printf("%d\n",fib(3));
}*/
/*
#include<stdio.h>
int func(int a,int b)
{
	static int m=0,i=2;
	i+=m+1;
	m=i+a+b;
	return(m);;
}
void main()
{
	int k=4,m=1,p;
	p=func(k,m);
	printf("%d,",p);
	p=func(k,m);
	printf("%d\n",p);
}*/
//4
/*
#include<stdio.h>
int SelMax(int a[],int n);
void main()
{
	int i,a[5],n;
	printf("����������Ԫ�صĸ���:");
	scanf("%d",&n);
	printf("�������Ԫ�ص�ֵ:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("��5��Ԫ���е����ֵΪ%d\n",SelMax(a,n));
	getchar();getchar();
}

int SelMax(int a[],int n)
{
	int max=a[0],j;
	for(j=0;j<n;j++)
		if(a[j]>max)
			max=a[j];
	return max;
}*/

//5(1)
/*
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void Guess(int magic, int guess)
{
	static int c = 0;
	c++;
	if (magic == guess)
	{
		printf("\n��¶��ˣ�\n��һ������%d�Σ�", c);
		exit(0);
	}
	if (magic < guess)
	{
		printf("\n̫���ˣ�\n");
	}
	else
	{
		printf("\n̫С�ˣ�\n");
	}
}
int main()
{
	int m, n, i;
	srand((int)time(0));
	n=(rand() % 100) + 1;
	//printf("n=%d\n",n);
	for (i = 0; i < 10; i++) 
	{
		printf("��������²������");
		scanf("%d", &m);
		Guess(n, m);
	}
	return 0;
}*/
//5(2)
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Guess(int magic,int guess);
main()
{
	int guess,magic,sum=0;
	srand(time(NULL));
	magic=rand()%100+1;
	printf("���һ��1-100����:\n");
	do{
		scanf("%d",&guess);
		if(guess>100||guess<1)
			printf("������Χ��\n");
		else
		{
			Guess(magic,guess);
			sum++;
		}
	}while(guess!=magic&&sum<10);
	printf("�����%d��\n",sum);
	getchar();
}
void Guess(int magic,int guess)
{
	if(guess!=magic)
	{
		printf("�´���!\n");
		if(guess<magic)
		{
			printf("�µ���̫С��!\n");
		}
		else
		{
			printf("�µ���̫����!\n");
		}
	}
	else
	{
		printf("�¶���!\n");
	}
}
*/

//3
/*
#include<stdio.h>
char Convert(char ch);
void main()
{
	char ch;
	printf("������һ����ĸ:");
	scanf("%c",&ch);
	printf("ת�������ĸΪ:%c",Convert(ch));
	getchar();getchar();
}
char Convert(char ch)
{
	if((ch>='A')&&(ch<='Z'))
		ch=ch+32;
	else if((ch>='a')&&(ch<='z'))
		ch=ch-32;
	else
	{
		printf("�ⲻ������ĸ\n");
		ch=-1;
	}
	return(ch);
}*/


//6<1>
/*
#include<stdio.h>
static int x=20;
void f1()
{
	int x=5;
	x+=10;
	printf("%d...fl()\n",x);
}
void f2()
{
	x+=10;
	printf("%d...f2()\n",x);
}
void main()
{
	int x=10;
	f1();
	f2();
	printf("%d...main()\n",x);
}*/

//6<2>






	