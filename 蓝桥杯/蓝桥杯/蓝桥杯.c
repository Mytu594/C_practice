//2
/*#include<stdio.h>
int a[10],book[10],total=0;
void dfs(int step)
{
	int i;
	if(step==10)
	{
		if((100==a[1]+(a[2]*10000+a[3]*1000+a[4]*100+a[5]+10+a[6])/(a[7]*100+a[8]*10+a[9]))
			||(100==a[1]*10+a[2]+(a[3]*1000+a[4]*100+a[5]*10+a[6])/(a[7]*100+a[8]*10+a[9])))
		{
			total++;
			printf("100=%d+%d%d%d%d%d/%d%d%d",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
		}
		return;
	}
	for(i=1;i<=9;i++)
	{
		if(book[i]==0)
		{
			a[step]=i;
			book[i]=1;
			dfs(step+1);
			book[i]=0;
		}
	}
	return;
}
int main()
{
	dfs(1);
	printf("total=%d",total/2);
	getchar();getchar();
	return 0;
}*/

/*#include<stdio.h>
int a[10],book[10],total=0;
void dfs(int step)
{
	int i;
	if(step==10)
	{
		if(a[1]*100+a[2]*10+a[3]+a[4]*100+a[5]*10+a[6]==a[7]*100+a[8]*10+a[9])
		{
			total++;
			printf("%d%d%d+%d%d%d=%d%d%d\n",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
		}
		return;
	}
	for(i=1;i<=9;i++)
	{
		if(book[i]==0)
		{
			a[step]=i;
			book[i]=1;
			dfs(step+1);
			book[i]=0;
		}
	}
	return;
}
int main()
{
	dfs(1);
	printf("total=%d",total/2);
	getchar();getchar();
	return 0;
}*/

/*#include<stdio.h>
int a[10],book[10],total=0;
void dfs(int step)
{
	int i;
	if(step==10)
	{
		if(100==a[1]+(a[2]*10000+a[3]*1000+a[4]*100+a[5]+10+a[6])/(a[7]*100+a[8]*10+a[9]))
			
		{
			total++;
			printf("100=%d+%d%d%d%d%d/%d%d%d",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
		}
		return;
	}
	for(i=1;i<=9;i++)
	{
		if(book[i]==0)
		{
			a[step]=i;
			book[i]=1;
			dfs(step+1);
			book[i]=0;
		}
	}
	return;
}
int main()
{
	dfs(1);
	printf("total=%d",total/2);
	getchar();getchar();
	return 0;
}*/

//解决数字不能重复的问题
//3
/*#include<stdio.h>
int transfer(long intn,int a[]);
void main()
{
	long int n;
	int i,l;
	int a[10];
	printf("请输入一个介于[1,2147483647]的整数:\n");
	scanf("%ld",&n);
	l=transfer(n,a);
	for(i=l-1;i>=0;i--)
	{
		switch(a[i])
		{case 0:a[i]='A';break;
		case 1:a[i]='B';break;
		case 2:a[i]='C';break;
		case 3:a[i]='D';break;
		case 4:a[i]='E';break;
		case 5:a[i]='F';break;
		case 6:a[i]='G';break;
		case 7:a[i]='H';break;
		case 8:a[i]='I';break;
		case 9:a[i]='J';break;
		case 10:a[i]='K';break;
		case 11:a[i]='L';break;
		case 12:a[i]='M';break;
		case 13:a[i]='N';break;
		case 14:a[i]='O';break;
		case 15:a[i]='P';break;
		case 16:a[i]='Q';break;
		case 17:a[i]='R';break;
		case 18:a[i]='S';break;
		case 19:a[i]='T';break;
		case 20:a[i]='U';break;
		case 21:a[i]='V';break;
		case 22:a[i]='W';break;
		case 23:a[i]='X';break;
		case 24:a[i]='Y';break;
		case 25:a[i]='Z';break;
		default:break;
		}
		printf("%c",a[i]);
	}printf("\n");
}
int transfer(long int n,int a[])
{
	int i=0;
	while(n!=0)
	{
		a[i]=n%6;
		n/=26;
		i++;
	}
	return i;
}*/

//4
/*#include<stdio.h>
int xiaoshu(int p,int q)
{
	int array[10],i,j,t;
	double l;
	for(i=0;i<=9;i++)
		array[1]=0;
	l=p/q;
	for(i=0;i<=10;i++)
	{
		l*/
//1
/*
#include<stdio.h>
void main()
{
	int Q[50];
	int n,x,i,a=1,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&Q[i]);
	x=Q[0];
	a=1;
	if(x<0)
	{
		for(i=1;i<n;i++)
		{
			if((Q[i]>0)&&((-Q[i])>(x)))
				a=a+1;
		}
		if(a==1)
			printf("%d\n",a);
		else
		{
			for(i=1;i<n;i++)
			{
				if((Q[i]<0)&&(Q[i]<x))
					a=a+1;
			}
			printf("%d\n",a);
		}
	}
	if(x>0)
	{
		for(i=1;i<n;i++)
		{
			if((Q[i]<0)&&(-Q[i]>x))
				a=a+1;
		}
		if(a==1)
			printf("%d\n",a);
		else
		{
			for(i=1;i<n;i++)
			{
				if(Q[i]>0&&Q[i]<x)
					a=a+1;
			}
			printf("%d\n",a);
		}
	}
}*/

//3
/*
#include<stdio.h>
void main()
{
	int n,i=0,k=0;
	char x;
	int a[100000];
	scanf("%d",&n);
	while(n)
	{
		if(n%26==0)
		{
			a[i++]=26;
			n--;
		}
		else
			a[i++]=n%26;
		n/=26;
	}
	for(k=0;k<i;k++)
	{
		x=a[k]-1+'A';
		printf("%c",x);
	}
}*/

//4
/*
#include<stdio.h>
void main()
{
	int a[10]={0},i,z;
	float P,Q,x,t;
	scanf("%f %f",&P,&Q);
	if(P>Q)
		printf("wrong");
	x=P/Q;
	t=x;
	for(i=1;i<7;i++)
	{
		x=x*10;
		z=x;
		x=x-z;
		switch(z)
		{
		case 0 :a[0]++;break;
		case 1 :a[1]++;break;
		case 2 :a[2]++;break;
		case 3 :a[3]++;break;
		case 4 :a[4]++;break;
		case 5 :a[5]++;break;
		case 6 :a[6]++;break;
		case 7 :a[7]++;break;
		case 8 :a[8]++;break;
		case 9 :a[9]++;break;
		}
	}
	if(a[0]>0)
		printf("0");
	if(a[1]>0)
		printf("1");
	if(a[2]>0)
		printf("2");
	if(a[3]>0)
		printf("3");
	if(a[4]>0)
		printf("4");
	if(a[5]>0)
		printf("5");
	if(a[6]>0)
		printf("6");
	if(a[7]>0)
		printf("7");
	if(a[8]>0)
		printf("8");
	if(a[9]>0)
		printf("9");
	printf("\n");
}*/

//5
/*#include<stdio.h>
void main()
{
	char a[10][100];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 	scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<11;j++)
		{
			if(a[i][j]>='a')
				printf("%c",a[i][j]);
			if(a[i][j]=='_')
			{
				printf("%c",a[i][j+1]-32);
				j++;
			}
			if('A'<=a[i][j]&&a[i][j]<='Z')
				printf("_%c",a[i][j]+32);
			if(a[i][j]==0)
				break;
		}
		printf("\n");
	}
	printf("\n");
}*/

/*
#include<stdio.h>
int judge(int i,int j,int k)//用来判断是否三者中间存在相同的数字
{
    int a[11]={0},g;
    while(i>0)
    {
        a[g=i%10]++;
        if(a[g]>1)//仅此一个
        return 0;
        i/=10;
    }
    while(j>0)
    {
        a[g=j%10]++;
        if(a[g]>1)
        return 0;
        j/=10;
    }
    while(k>0)
    {
        a[g=k%10]++;
        if(a[g]>1)
        return 0;
        k/=10;
    }
    if(a[0]>0)//数字变化区间为1~9
    return 0;
    for(i=1;i<=9;i++)
    {
        if(a[i]==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int i,j,k,count=0;
        for(i=1;i<=n-1;i++)//i最大为n-1
        {
            for(k=1;k<=9999;k++)//k作为分母，变化区间有九位数字，k最多是四位数
            {
                if(i!=k)
                {
                    j=(n-i)*k;
                    if(judge(i,j,k))
                    count++;//count用来计数
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
*/







