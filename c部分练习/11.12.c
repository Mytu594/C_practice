/*#include<stdio.h>
main()
{
	int a,b,c,n;
	printf("������һ����λ����������\n");
	scanf("%d",&n);
	a=n%10;
	b=n/10%10;
	c=n%100;
	if(a*100+b*10+c==a*a*a+b*b*b+c*c*c)
	{
		printf("������ˮ�ɻ���");
	}
	else
	{
		printf("��������ˮ�ɻ���");
	}
printf("\n");
}*/


/*#include<stdio.h>
main()
{
	float score;
	printf("��������ĸ߿��ɼ�:");
	scanf("%f",&score);
	if(score>=650)
	{
		printf("�㱻����¼ȡ��");
	}
	else if(score>=620)
	{
		printf("�㱻�㹤¼ȡ��");
	}
	else if(score>=590)
	{
		printf("�㱻���¼ȡ��");
	}
printf("\n");
}*/



/*#include<stdio.h>
main()
{
	int a,b,c;
	printf("�����������ε�������:");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(a+c>b))
		if(a==b==c)
			printf("3");
		else if((a==b)||(b==c)||(c==a))
			printf("2");
		else
			printf("1");
	else
		printf("�޷�����������");
}*/


/*#include<stdio.h>
main()
{
	char c;
	printf("������һ����ĸ:");
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
	printf("�����뵱ǰ��ݺ͹�������:");
	scanf("%d%d",&n,&m);
	s=n-m;
	if(s>3)
	{
		bonus=2500;
		printf("����=%dԪ\n",bonus);
	}
}*/

#include<stdio.h>
int main()
{
	double faheight,moheight,s;
	int sport,diet,sex;
	printf("Ů������1����������2,�ְ���ߣ��������,���˶�����ʳ������");
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


	

	

		
	
	







