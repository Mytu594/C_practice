/*#include <stdio.h>

int main()
{
    float y, x, z, f;
    for (y = 1.5f; y > -1.5f; y-=0.1f)
    {
        for (x = -1.5f; x < 1.5f; x += 0.05f)
        {
            z = x*x + y*y -1;
            f = z*z*z - x*x*y*y*y;
            putchar(f <= 0.0f ? "*********"[(int)(f*-8.0f)]:' ');
        }
        putchar('\n');
    }

    getchar();
    return 0;
}*/


/*#include<stdio.h>
void main()
{
	int cy, yoj,yos,bonus;
	printf("�����뵱ǰ��ݺ���ְ���:");
	scanf("%d%d",&cy,&yoj);
	yos=cy-yoj;
	if(yos>3)
	{
		bonus=2500;
		printf("����=%dԪ\n",bonus);
	}
}*/


/*#include<stdio.h>
void main()
{
	float bs,gs,da,hra;
	printf("�������������:");
	scanf("%f",&bs);
	if(bs<1500)
	{
		hra=bs*10/100;
		da=bs*90/100;
	}
	else
	{
		hra=500;
		da=bs*98/100;
	}
	gs=bs+hra+da;
	printf("�����ܶ�=%f",gs);
}*/


/*#include<stdio.h>
void main()
{
	float kg,kgp,cm,cmi,BMI;
	printf("������������غ����:");
	scanf("%f%f",&kg,&cm);
	kgp=kg*2.205;
	cmi=cm*0.3937;
	BMI=kgp*703/(cmi*cmi);
	if(BMI<20)
		printf("����ƫ��,��ȱ�����");
	else if(BMI<25)
		printf("��������,��ȱ�ţ��");
	else if(BMI<=30)
		printf("����ƫ��,��ȱ�����");
	else
		printf("������֢,��ȥ��ҽ��");
}*/


/*#include<stdio.h>
main()
{
	int fahr,celsius;
	int lower,upper,step;
	lower=0;
	upper=300;
	step=20;
	fahr=lower;
	while(fahr<=upper)
	{
		celsius=5*(fahr-32)/9;
		printf("%d\t%d\n",fahr,celsius);
		fahr=fahr+step;
	}
}*/

/*#include<stdio.h>
main()
{
	int fahr,celsius;
	printf("������һ�������¶�:");
	scanf("%d",&fahr);
	celsius=5*(fahr-32)/9;
	printf("���Ӧ�����϶�Ϊ:%d",celsius);
}*/

/*#include<stdio.h>
main()
{
	float rate=2.25/100,deposit;
	int n,capital;
	printf("���������Ĵ������:");
	scanf("%d %d",capital,n);
	deposit=capital*(1+rate);
	printf("n���ı���֮��Ϊ:%f",deposit);
}*/


/*#include<stdio.h>
main()
{
	int a,b,c;
	float aver;
	printf("�������������,��ѧ,Ӣ�����Ƴɼ�:");
	scanf("%d%d%d",&a,&b,&c);
	aver=(a+b+c)/3;
	printf("ƽ����Ϊ:%.2f",aver);
}*/

#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("������һ����λ��:");
	scanf("%d",&d);
	d=a*100+b*10+c;
	printf("���λ��Ϊ:%d\n��ʮλ��Ϊ:%d\n���λ��Ϊ:%d\n",a,b,c);
}



