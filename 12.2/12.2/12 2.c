/*#include<stdio.h>
void main()
{
	int num[5]={1,2,3,4,5};
	int i;
	for(i=0;i<=5;i++)
		printf("%4d",num[i]);
}*/
/*#include<stdio.h>
void main()
{
	char a[10];
	int i;
	for(i=1;i<=5;i++)
		scanf("%c",&a[i]);
	printf("%c",a[0]);
}*/
/*#include<stdio.h>
void main()
{
	int a[100],b[100];
	int n=0,i,j,t;
	printf("����������n:");
	scanf("%d",&n);
	printf("��������a��ǰ%d��Ԫ��:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n;i++)
		b[i]=a[i];
	if(n%2==1)
		j=n/2+1;
	else
		j=n/2;
	for(i=0;i<(n/2);i++)
	{
	t=a[i];
	a[i]=a[j];
	a[j]=t;
	j++
	}
	printf("�Ի��������Ϊ:");
	for(i=0;i<n;i++)
	  printf("%d",a[i]);
	printf("\n");
}*/
/*#include<stdio.h>
void main()
{
	int a[5],i,t=0,j=3;
	printf("��������a��ǰ5��Ԫ��:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
    for(i=0;i<2;i++)
	{
	    t=a[i];
		a[i]=a[j];
		a[j]=t;
		j++;
	}
	printf("�Ի��������Ϊ:");
	for(i=0;i<5;i++)
	  printf("%d",a[i]);
	printf("\n");
}*/
/*#include<stdio.h>
void main()
{
	float a[40];
	int n,i,t=0;
	printf("������ѧ����:");
	scanf("%d",&n);
	if(n>40)
		printf("��������");
	printf("��������ѧ���ɼ�:");
	for(i=0;i<n;i++)
	   scanf("%f",&a[i]);
	for(i=0;i<n;i++)
	{
		if(t<a[i])
			t=a[i];
	}
	printf("ѧ��Ϊ%d��߷�Ϊ%d",i,t);
}*/
/*#include<stdio.h>
void main()
{
	int a[4],i,t;
	printf("��������:����λ��������");
	for(i=0;i<4;i++)
		scanf("%d",&a[i]);
	for(i=0;i<4;i++)
		a[i]=(a[i]+5)%10;
	for(i=0;i<2;i++)
	{
		t=a[i];
		a[i]=a[3-i];
		a[3-i]=t;
	}
	printf("�������:");
	for(i=0;i<4;i++)
		printf("%d",a[i]);
}*/

/*#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,z,k=2,m=10,a[100];
	printf("����m��k(���Ÿ���):");
	scanf("%d,%d",m,k);
	for(i=m;i<2*m;i++)
	{
		for(j=2;j<=m;j++)
		{
			for(z=0;z<k;z++)
			{
				if(i%j!=0)
					a[z]=i;
				else
					break;
			}
		}
	}
	printf("����Ϊ%d:");
	for(i=0;i<k;i++)
		printf("%d",a[i]);
}*/










