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
	printf("�����Ա���:Ů(X)/��(Y)");
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
	printf("�����Ա���:Ů(1) ��(0)");
	printf("\n");
	scanf("%d",&sex);
	printf("�����׵����Ϊ(������Ϊ��λ)");
	scanf("%lf",&faheight);
	printf("��ĸ�׵����Ϊ(������Ϊ��λ)");
	scanf("%lf",&moheight);
	printf("���о����˶���(��������1,��������0)");
	printf("\n");
	scanf("%d",&sport);
	printf("����ʳ������(��������1,��������0)");
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


