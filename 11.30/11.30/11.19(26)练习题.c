
//���ʵ�֣������ַ�ʽ�ֱ���n����
/*#include<stdio.h>
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

//���10���ڵ�����������
/*#include<stdio.h>
void main()
{
	int num,i;
	printf("10���ڵ�������:");
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

//ʵ��ָ����P32����9��
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