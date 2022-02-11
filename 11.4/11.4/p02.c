/*#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("请输入一个三位数:");
	scanf("%d",&d);
	d=a*100+b*10+c;
	printf("其百位数为:%d\n其十位数为:%d\n其个位数为:%d\n",a,b,c);
}*/

#include<stdio.h>
void main()
{
	float f1=100.12345,f2=20.46,f3=3.5;
	int n=12;
	printf("f1=%5.2f\n",f1);
	printf("f2=%6.1f\n",f2);
	printf("f3=%3.0f\n",f3);
	printf("n=%5d\n",n);
}