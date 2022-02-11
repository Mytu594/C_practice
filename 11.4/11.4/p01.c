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
	printf("请输入当前年份和入职年份:");
	scanf("%d%d",&cy,&yoj);
	yos=cy-yoj;
	if(yos>3)
	{
		bonus=2500;
		printf("奖金=%d元\n",bonus);
	}
}*/


/*#include<stdio.h>
void main()
{
	float bs,gs,da,hra;
	printf("请输入基本工资:");
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
	printf("工资总额=%f",gs);
}*/


/*#include<stdio.h>
void main()
{
	float kg,kgp,cm,cmi,BMI;
	printf("请输入你的体重和身高:");
	scanf("%f%f",&kg,&cm);
	kgp=kg*2.205;
	cmi=cm*0.3937;
	BMI=kgp*703/(cmi*cmi);
	if(BMI<20)
		printf("体型偏瘦,请喝杯奶昔");
	else if(BMI<25)
		printf("体型适中,请喝杯牛奶");
	else if(BMI<=30)
		printf("体型偏胖,请喝杯冰茶");
	else
		printf("属肥胖症,请去看医生");
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
	printf("请输入一个华氏温度:");
	scanf("%d",&fahr);
	celsius=5*(fahr-32)/9;
	printf("其对应的摄氏度为:%d",celsius);
}*/

/*#include<stdio.h>
main()
{
	float rate=2.25/100,deposit;
	int n,capital;
	printf("请输入您的存款金额及年份:");
	scanf("%d %d",capital,n);
	deposit=capital*(1+rate);
	printf("n年后的本金之和为:%f",deposit);
}*/


#include<stdio.h>
main()
{
	int a,b,c;
	float aver;
	printf("请输入你的语文,数学,英语三科成绩:");
	scanf("%d%d%d",&a,&b,&c);
	aver=(a+b+c)/3;
	printf("平均数为:%.2f",aver);
}
