
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

//��ƻ��
//0-30��ż��
/*#include<stdio.h>
main()
{
	int n=0;
	do
	{
		if(n%2==0)
			printf("%d\n",n);
			n++;
		continue;
	}
	while(n>=0&&n<30);
}*/

//���100���ڵ�����ˮ�ɻ�����
/*
#include <stdio.h> 
#include <stdlib.h>
void main() 
{ 
    int i,j,k,n; 
    printf("'water flower'number is:"); 
    for(n=100;n<999;n++) 
    { 
        i=n/100;
        j=n/10%10;
        k=n%10;
        if(n==i*i*i+j*j*j+k*k*k) 
        { 
            printf("%-5d",n); 
        } 
    } 
    printf("\n"); 
} */


//����һ���ַ����ԡ�.����Ϊ���������־������������ĸ�����ֵĸ����������
/*#include<stdio.h>
void main()
{	int ch_num,dig_num;
	char ch;
	ch_num=dig_num=0;
	do{
		ch=getchar();
		if��(ch>'A'&&ch<'Z')||(ch>'a'&&ch<'z')��
		ch_num++;
		if(ch>'0'&&ch<'9')
		dig_num++;
	}while(ch!='#'); 
	printf("The number of chars is:%d\n",ch_num);
	printf("The number of digital is:%d\n",dig_num);
}*/


//a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ�����
/*
#include <stdio.h>  
int main()
 {
  char i,j,k;           
  for (i='x';i<='z';i++)
    for (j='x';j<='z';j++)
     if (i!=j)
       for (k='x';k<='z';k++)
 if (i!=k && j!=k)
   if (i!='x' && k!='x' && k!='z')
      printf("A--%c\nB--%c\nC--%c\n",i,j,k);
   return 0;

  }*/

//7������
/*
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=4;i++) //�ȴ�ӡ�ϱߵ�����
	{
		for(j=1;j<=4-i;j++) //����Ҫ��ӡ�Ŀո�����
			printf(" ");
		for(k=1;k<=2*i-1;k++) //����Ҫ��ӡ���Ǻ���
			printf("*");
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++) //����Ҫ��ӡ�Ŀո���
			printf(" ");
		for(k=1;k<=7-2*i;k++) //����Ҫ��ӡ���Ǻ���
			printf("*");
		printf("\n");
	}
}*/

//����������
/*
#include<stdio.h>
#include<math.h>
main()
	{ 
		int i,j,n,k;
		scanf("%d",&n);
		n=n+n-1;//������Ҫ��Ļ�ȥ�����
		for(i=1;i<=n;i++)
		{ 
			for(j=1;j<=abs(n/2-i+1);j++)
				printf(" ");
			for(k=1;k<=n-2*abs(n/2-i+1);k++)
				printf("*");
			printf("\n");
		}
}*/
//��Ԫ��(�е�bug)
/*
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
}*/


