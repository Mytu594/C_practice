/*#include<stdio.h>
#define ARR_SIZE 40
main()
{
	float score[ARR_SIZE],maxScore;
	int i,l,n;
	long maxNum,num[ARR_SIZE];
	printf("Please enter total number:");
	scanf("%d",&n);
	printf("Please enter the number and score:\n");
	for(i=0;i<n;i++)
	{
		scanf("%ld%f",&num[i],&score[i]);
	}
	maxScore=score[0];
	maxNum=num[0];
	for(i=1;i<n;i++)
	{
		if(score[i]>maxScore)
		{
			maxScore=score[i];
			maxNum=num[i];
		}
	}
	printf("maxScore=%.0f,maxNum=%ld\n",maxScore,maxNum);
}*/
/*
#include<stdio.h>
main()
{
	int a,i,n,t,aa[4];
	printf("请输入一个四位数:\n");
	scanf("%d",&n);
	aa[0]=n%10;
	aa[1]=n%100/10;
	aa[2]=n%1000/100;
	aa[3]=n/1000;
	for(i=0;i<=3;i++)
	{
		aa[i]+=5;
		aa[i]%=10;
	}
	for(i=0;i<3/2;i++)
	{
		t=aa[0];
		aa[0]=aa[3];
		aa[3]=t;
		t=aa[1];
		aa[1]=aa[2];
		aa[2]=t;
	}
	for(i=3;i>=0;i--)
	{
		printf("%d",aa[i]);
	}
}*/

//	判断是否为素数
/*#include <stdio.h>
int main(){
    int a=0;  // 素数的个数
    int num=0;// 输入的整数
	int i;
    printf("输入一个整数：");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            a++;  // 素数个数加1
        }
    }
    if(a==0){
        printf("%d是素数。\n", num);
    }else{
        printf("%d不是素数。\n", num);
    }
    return 0;
}*/
/*
#include <stdio.h>
#include <math.h>
void main(){
    int m;  // 输入的整数 
    int i;  // 循环次数
    int k;  // m 的平方根 
    printf("输入一个整数：");
    scanf("%d",&m);
    // 求平方根，注意sqrt()的参数为 double 类型，这里要强制转换m的类型 
    k=(int)sqrt( (double)m );
    for(i=2;i<=k;i++)
        if(m%i==0)
            break;
    // 如果完成所有循环，那么m为素数
    // 注意最后一次循环，会执行i++，此时 i=k+1，所以有i>k 
    if(i>k)
        printf("%d是素数。\n",m);
    else
        printf("%d不是素数。\n",m);
    return 0;
}*/
//求素数
/*#include<stdio.h>
#include<math.h>
main()
{
	int start,end,m,k,flag=1,i,h=0;
	do
	{
		printf("enter start ang end:\n");
		scanf("%d%d",&start,&end);
	}while(!(start>0&&start<end));
	for(m=start;m<=end;m++)
	{
		k=sqrt(m);
		for(i=2;i<=k;i++)
			if(m%i==0)
			{
				flag=0;
				break;
			}
			if(flag)
			{
				printf("%-4d",m);
				h++;
				if(h%10==0)
					printf("\n");
			}
			flag=1;
	}
	printf("\nThe total is %d",h);
	return 0;
}*/
/*
#include<stdio.h>
#include<math.h>
main()
{
	int a,x,m,k,i,a[100],flag=1,n,j;
	printf("请输入正整数m及个数k:\n");
	scanf("%d%d",&a,&k);
	for(x=1;x<=k;x++&&m++)
	{
		n=0;
		for(i=m;i<sqrt(m);i++)
			if(m%i==0)
			{
				flag=0;
				break;
			}
			if(flag)
			{
				printf("%-4d",m);
				a[n]=i;
				n++;
			}
			flag=1;
	}
	for(j=0;j<k;j++)
	{
		printf("紧靠%d的%d个素数为%d",a,k,a[i]);
	}
	return 0;
}*/

//指针
/*#include <stdio.h>
void swap(int x,int y);
main()
{
 int a,b;
 printf("Please enter a,b:");
 scanf("%d,%d",&a,&b); 
 printf("Before swap: a=%d,b=%d\n",a,b); 
 swap(a,b);                          
 printf("After swap: a=%d,b=%d\n",a,b);  
}
void swap(int x,int y)
{
   int temp;  
   temp=x;  
   x=y;  
   y=temp;
}*/
/*
#include <stdio.h>
void swap(int *x, int *y);
main()
{
 int a,b;
 printf("Please enter a,b:");
 scanf("%d,%d",&a,&b); 
 printf("Before swap: a=%d,b=%d\n",a,b); 
 swap(&a, &b);                          
 printf("After swap: a=%d,b=%d\n",a,b);  
}
void swap(int *x, int *y)
{  
    int temp;  
    temp=*x;  
    *x=*y;  
    *y=temp;
}*/

/*
#include<stdio.h>
main()
{
	int i,j,h=0;
	int x[3][3]={0,1,2,0,1,2,0,1,2};
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("a[%d][%d]=%d\t",i,j,x[i][j]);
			h++;
			if(h%3==0)
				printf("\n");
		}
	}
}*/
/*
#include<stdio.h>
main()
{
	int i;
	char a[10]={'1','2','3','4','5','6','7','8','9',0},*p;
	i=8;
	p=a+i;
	printf("%s\n",p-3);

}*/
/*
#include<stdio.h>
main()
{
	char str[]="Beijing";
	printf("%d\n",strlen(strcpy(str,"China")));
}*/
/*
#include<stdio.h>
main()
{
	char str[]="Beijing";
	printf("%s\n",strcpy(str,"China"));  //strcpy可以去掉字符串的引号
}*/
/*//5
#include<stdio.h>
main()
{
	int b[3][3]={0,1,2,0,1,2,0,1,2},i,j,t=1;
	for(i=0;i<3;i++)
		for(j=1;j<=1;j++)
			t+=b[1][b[j][i]];
	printf("%d\n",t);
}*/
/*//自己有问题的代码
#include<stdio.h>
main()
{
	int i,j,s=0,n=1;
	int sub[5],stu_score[6];
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("请输入各位学生各科的成绩:\n");
			scanf("%d%d",&sub[i],&stu_score[j]);
			s+=stu_score[j];
			n++;
			printf("%d号同学的总分为%d\n",n,s);
		}
	}
}*/
/*
#include<stdio.h>
#define MAX 6

#define COS 5
struct student
{
    char name[6];
    float score[5];
    float sum;
     
};
 
int main(void)
{
    struct student students[MAX];
    int i,j,total;
    for(i=0;i<MAX;i++)
    {
        printf("请输入第%d学生的姓名:\n",i+1);
        gets(students[i].name);
        for(j=0,total=0;j<COS;j++)
        {
            printf("请输入第%d门成绩：\n",j+1);
            scanf("%f",&students[i].score[j]);
            total+=students[i].score[j];
        }
        students[i].sum=total;
        getchar();
    }  
    for(i=0;i<MAX;i++)
    {
        printf("%s\t",students[i].name );
        for(j=0;j<COS;j++)
            printf("%.2f ",students[i].score[j]);
        printf("%.2f\n ",students[i].sum );      
    }  
}*/
/*
#include<stdio.h>
#define M 5
#define N 4
void main()
{
	int a[M][N];
	int i,j;
	int sum[M]={0,0,0,0,0};
	int max=0,t;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
		{
			a[i][j]=rand()%100;
		}
	printf("产生的随机矩阵为:\n");
	for(i=0;i<M;i++)
	{
		for(i=0;j<N;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			sum[i]+=a[i][j];
	}
	for(i=0;i<M;i++)
		if(sum[i]>max)
		{
			max=sum[i];
		}
	for(j=0;j<N;j++)
	{
		int tmp;
		tmp=a[t-1][j];
		a[t-1][j]=a[t][j];
		a[t][j]=tmp;
	}
		printf("交换后的矩阵为\n");
		for(i=0;i<M;i++);
		{
			for(j=0;j<N;j++)
				printf("%d",a[i][j]);
			printf("\n");
		}
}*/

/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("请输入一个数:");
	scanf("%d",&a);
	b=a*a;
	c=a*a*a;
	printf("%d的平方为%d，立方为%d",a,b,c);
	getchar();getchar();
	return 0;
}*/
/*
#include<stdio.h>
int square(int n)
{
	return n*n;
}
int cube(int n)
{
	return n*n*n;
}
void main()
{
	int n;
	printf("please enter an integer:");
	scanf("%d",&n);
	printf("The square of %d is %d\n",n,square(n));
	printf("The cube of %d is %d",n,cube(n));
	getchar();getchar();
}*/

/*#include<stdio.h>
void square(int n);
void cube(int n);
void main()
{
	int n;
	printf("please enter an integer:");
	scanf("%d",&n);
	printf("the square of %d is \n",n);
	square(n);
	printf("the cube of %d is \n",n);
	cube(n);
	getchar();getchar();
}
void square(int n)
{
	printf("%d\n",n*n);
}
void cube(int n)
{
	printf("%d\n",n*n*n);
}*/

/*
#include<stdio.h>
void printlines(int);
void main()
{
	printlines(2);
	printf("Happy everyday!\n");
	printlines(4);
}
void printlines(int numlines)
{
	int count=1,i;
	while(count<=numlines)
	{
		for(i=1;i<=15;i++)
		{
			printf("*");
		}
		printf("\n");
		count++;
	}
}*/

/*#include<stdio.h>
void main()
{
	printf("***************\n");
	printf("***************\n");
	printf("Happy everyday!\n");
	printf("***************\n");
	printf("***************\n");
	printf("***************\n");
}*/
/*
#include<stdio.h>
void main()
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("***************\n");
	}
	printf("Happy everyday!\n");
	for(i=0;i<3;i++);
	{
		printf("***************\n");
	}
}*/









		

		














