/*#include<stdio.h>
main()
{
	int x;
	scanf("%d",&x);
	if(x++>5)
		printf("%d\n",x);
	else
		printf("%d\n",x--);
}*/
/*
#include<stdio.h>
main()
{
	char sex,sport,diet;
	double faHeight,moHeight,myHeight;
	printf("您的性别是:女(X)/男(Y)");
	scanf("%c",&sex);
	if(sex=="X")
	{
		myHeight=(faHeight+moHeight)/2;
	}
	if(sex==Y)*/


#include<stdio.h>
int main()
{
	double faheight,moheight,s;
	int sport,diet,sex;
	printf("您的性别是:女(1) 男(0)");
	printf("\n");
	scanf("%d",&sex);
	printf("您父亲的身高为(以厘米为单位)");
	scanf("%lf",&faheight);
	printf("您母亲的身高为(以厘米为单位)");
	scanf("%lf",&moheight);
	printf("你有经常运动吗(有则输入1,无则输入0)");
	printf("\n");
	scanf("%d",&sport);
	printf("你饮食规律吗(是则输入1,否则输入0)");
	printf("\n");
	scanf("%d",&diet);
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


