/*
//ʾ��5��
#include <stdio.h>
#define PI 3.14
void area(int,float*,float*);
void main()
{
	int radius;
	float areas,meter;
	printf("������Բ�İ뾶��");
	scanf("%d",&radius);
	area(radius,&areas,&meter);
	printf("���=%.2f\n",areas);
	printf("�ܳ�=%.2f\n",meter);
}
void area(int r,float* a,float* m)
{
	*a=PI*r*r;
	*m=PI*2*r;
}
*/
/*
//ʾ��6
#include <stdio.h>
int* min(int *x,int *y);
void main()
{
	int i=1,j=2;
	int *m;
	m=min(&i,&j);
	printf("��Сֵ:%d\n",*m);
}
int* min(int *x,int *y)
{
	int *z;
	z=(*x<*y)?x:y;
	return z;
}
*/

/*
//P53��1��
#include <stdio.h>

main( )
{
	int x=10,y=5,*px,*py;
	px=py;
	px=&x;
	py=&y;
}
*/
/*
//3.
#include <stdio.h>

void swap(int *p1,int *p2)
{
	int *p;
	p=p1;
	p1=p2;
	p2=p;
}

main()
{
	int a,b,*pt1,*pt2;
	scanf("%d,%d",&a,&b);
	pt1=&a;
	pt2=&b;
	if(a<b)
		swap(pt1,pt2);
	printf("%d,%d\n",*pt1,*pt2);
}
*/

/*
#include <stdio.h>
void display(int *j, int n); 
main( )
{
	int num[ ]={1,2,3,4};
    display(num,4);  //����display����
}
void display(int *j, int n)  
{
	int i;
	for(i=0;i<n; i++)
	{
	  printf("��%d��Ԫ�ص�ֵΪ��%d\n",i+1,*j)	 ; //����ָ�������������Ԫ�ص�ֵ
	  j++	 ; //ָ��仯
	}
}*/






/*
//����: δ����
#include <stdio.h>
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
}
*/
/*
//����: ����
#include <stdio.h>
void swap(int *x, int *y);
main()
{

 int a,b;
 printf("Please enter a,b:");
 scanf("%d,%d",&a,&b); 
 printf("Before swap: a=%d,b=%d\n",a,b); 
 swap(&a,&b);                          
 printf("After swap: a=%d,b=%d\n",a,b);  
}

void swap(int *x, int *y)
{  
	int temp;  
   temp=*x;  
   *x=*y;  
   *y=temp;
}
 */
/*
#include<stdio.h>
void display(int *j,int n);
void main()
{
	int num[]={1,2,3,4};
	display(num,4);
}
void display(int *j,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("��%d��Ԫ��Ϊ%d",i+1,*j);
		j++;
	}
}*/