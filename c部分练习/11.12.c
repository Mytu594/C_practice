/*#include<stdio.h>
main()
{
	int a,b,c,n;
	printf("请输入一个三位数的正整数\n");
	scanf("%d",&n);
	a=n%10;
	b=n/10%10;
	c=n%100;
	if(a*100+b*10+c==a*a*a+b*b*b+c*c*c)
	{
		printf("该数是水仙花数");
	}
	else
	{
		printf("该数不是水仙花数");
	}
printf("\n");
}*/


/*#include<stdio.h>
main()
{
	float score;
	printf("请输入你的高考成绩:");
	scanf("%f",&score);
	if(score>=650)
	{
		printf("你被华工录取了");
	}
	else if(score>=620)
	{
		printf("你被广工录取了");
	}
	else if(score>=590)
	{
		printf("你被广金录取了");
	}
printf("\n");
}*/



/*#include<stdio.h>
main()
{
	int a,b,c;
	printf("请输入三角形的三条边:");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(a+c>b))
		if(a==b==c)
			printf("3");
		else if((a==b)||(b==c)||(c==a))
			printf("2");
		else
			printf("1");
	else
		printf("无法构成三角形");
}*/


/*#include<stdio.h>
main()
{
	char c;
	printf("请输入一个字母:");
	scanf("%c",&c);
	if(c>'a'&&c<='z')
		c=c-'a'+'A';
	else if(c>='A'&&c<='Z')
		c=c-'A'+'C';
	return c;
}*/



/*#include<stdio.h>
int main()
{
	int bonus,n,m,s;
	printf("请输入当前年份和工作年限:");
	scanf("%d%d",&n,&m);
	s=n-m;
	if(s>3)
	{
		bonus=2500;
		printf("奖金=%d元\n",bonus);
	}
}*/

#include<stdio.h>
int main()
{
	double faheight,moheight,s;
	int sport,diet,sex;
	printf("女生请输1，男生请输2,爸爸身高，妈妈身高,有运动吗，饮食规律吗");
	scanf("%d%lf%lf%d%d",&sex,&faheight,&moheight,&sport,&diet);
	if(sex==1)
		s=(faheight*0.923+moheight)/2;
	else if(sex==0)
		s=(faheight+moheight)/2*1.08;
	if(sport==1)
		s=s+s*2/100;
	if(diet==1)
		s=s+s*1.5/100;
	printf("%lf",s);
}


	

	

		
	
	







