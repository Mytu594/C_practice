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