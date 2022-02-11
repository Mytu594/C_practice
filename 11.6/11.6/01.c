/*#include<stdio.h>
main()
{
	double f1=35.6789;
	printf("%5.3f",f1);
}*/

#include<stdio.h>
main()
{
	char a,b;
	int c;
	scanf("%c,%c,%d",&a,&b,&c);
	scanf("%c%c%d",&a,&b,&c);
	scanf("%c	%c	%d",&a,&b,&c);
	scanf("%c%*c%c%*c%d",&a,&b,&c);
	printf("\'%c\',\'%c\',%d",a,b,c);
}