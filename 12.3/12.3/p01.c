#include<stdio.h>
char c[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char result[];
int count=0;

void convert(int n)
{
	if(n<=26)
	{
		result[count++]=c[n-1];
	}
	else
	{
		if(n%26==0)
		{
			convert(n/26-1);
			convert(26);
		}
		else
		{
			convert(n/26);
			convert(n%26);
		}
	}
}

void main()
{
	int n;
	scanf("%d",&n);
	convert(n);
	printf("%s",result);
}
/*
#include<stdio.h>
void main()
{
	
	int i,j,n=0,s;
	int a[100];
	for(i=2;i<1000;i++)
	{
		n=0;
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s+=j;
				a[n]=j;
				n++;
			}
		}
		if(s==i)
		{
			printf("%dΪ����,����������:",i);
			for(j=0;j<n;j++)
			{
				printf("%5d",a[j]);
			}
			printf("\n");
		}
	}
}*/
/*
#include<stdio.h>
void main()
{
	int i,j,s,m=0;
	int a[100];    //����һ���ϴ������
	for(i=2;i<1000;i++)     //Ƕ��ѭ��,������ѭ�����ν�2~999�洢������i��
	{
		s=0;
		m=0;
		for(j=1;j<i;j++)    //iÿȡһ��ֵ,�ڲ�ѭ�������ΰ�С��i�����洢�ڱ���j��
		{
			if(i%j==0)    //��jΪi��������ִ��if��
			{
				s+=j;     //���������������ӵĺ�
				a[m]=j;   //��ÿ���������η����С��������
				m++;     //�������ӵĸ���,ȷ��������ӵ������ģ
			}
		}
		if(i==s)           //�ж��Ƿ�Ϊ����
		{
			printf("%d its factor are :",i);
			for(j=0;j<m;j++)        //�����������������
			{
				printf("%5d",a[j]);
			}
			printf("\n");
		}
	}
}*/

