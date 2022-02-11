/*#include<stdio.h>
int main()
{
	int data[101],right[101];
	int i,n,t,len;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&data[i]);
	len=n;
	for(i=1;i<=n;i++)
	{
		if(i!=n)
			right[i]=i+1;
		else
			right[i]=0;
	}
	len++;
	scanf("%d",&data[len]);
	t=1;
	while(t!=0)
	{
		if(data[right[t]]>data[len])
		{
			right[len]=right[t];
			right[t]=len;
			break;
		}
		t=right[t];
	}
	t=1;
	while(t!=0)
	{
		printf("%d",data[t]);
		t=right[t];
	}
	getchar();
	getchar();
	return 0;
}*/

/*#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=9;i++)
		if((i*10+3)*6528==(30+i)*8256)
			printf("%d",i);
}*/

/*#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,total=0;
	for(a=1;a<=9;a++)
	for(b=1;b<=9;b++)
	for(c=1;c<=9;c++)
	for(d=1;d<=9;d++)
	for(e=1;e<=9;e++)
	for(f=1;f<=9;f++)
	for(g=1;g<=9;g++)
	for(h=1;h<=9;h++)
	for(i=1;i<=9;i++)
	{
		if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&a!=i
			&&b!=c&&b!=d&&b!=e&&b!=f&&b!=f&&b!=g&&b!=h&&b!=i
			&&c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&c!=i
			&&d!=e&&d!=f&&d!=g&&d!=h&&d!=i
			&&e!=f&&e!=g&&e!=h&&e!=i
			&&f!=g&&f!=h&&f!=i
			&&g!=h&&g!=i
			&&h!=i
			&&a*100+b*10+c+d*100+e*10+f==g*100+h*10+i)
		{
			total++;
			printf("%d%d%d+%d%d%d=%d%d%d\n",a,b,c,d,e,f,g,h,i);
		}
	}
	printf("total=%d",total/2);
	getchar();
	getchar();
	return 0;
}*/

#include<stdio.h>
int main()
{
	int a[10],i,total=0,book[10],sum;
		for(a[1]=1;a[1]<=9;a[1]++)
			for(a[2]=1;a[2]<=9;a[2]++)
				for(a[3]=1;a[3]<=9;a[3]++)
					for(a[4]=1;a[4]<=9;a[4]++)
						for(a[5]=1;a[5]<=9;a[5]++)
							for(a[6]=1;a[6]<=9;a[6]++)
								for(a[7]=1;a[7]<=9;a[7]++)
									for(a[8]=1;a[8]<=9;a[8]++)
										for(a[9]=1;a[9]<=9;a[9]++)
										{
											for(i=1;i<=9;i++)
												book[i]=0;
											for (i=1;i<=9;i++)
												book[a[i]]=1;
											sum=0;
											for(i=1;i<=9;i++);
											sum+=book[i];
											if(sum==9&&a[1]*100+a[2]*10+a[3]+a[4]*100+a[5]*10+a[6]==a[7]*100+a[8]*10+a[9]);
											{
												total++;
												printf("%d%d%d+
}
printf

		



