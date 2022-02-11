/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
 
//ѧ����Ϣ�ṹ��
typedef struct Node
{
	char Name[10];		//ѧ������
	char ID[15];		//ѧ��ѧ��
	int Score[3];	//���Ƴɼ�����ѧ��Ӣ����ݽṹ��
	float Ave_Sco;
	struct Node *next;
}Lnode;
 
void Display();   //������ʾ����
void GetScore(Lnode *&h);  //�ɼ�¼�뺯��
void PrintScore(Lnode *h);  //�ɼ���ӡ����
void ModifyScore(Lnode *h);  //�ɼ��޸ĺ���
void FindInf(Lnode *h);    //������Ϣ
void Delete(Lnode *h);   //ɾ������
void Quit(Lnode *h);    //�˳�����
void SaveInf(Lnode *h);
void LoadInf(Lnode *h);
 
//��ʼ������
void InitList(Lnode *&head)  
{
	head = (Lnode *)malloc(sizeof(Lnode));
	if (head == NULL)
	{
		printf("error!");
		exit(1);
	}
	head->next = NULL;    //ʹͷ�ڵ�ָ����Ϊ��
}
 
int main()
{
	Lnode *ScoreList;    //�����ɼ���������ѧ����Ϣ����ڴ�����
	int Function;
	char flag; 
	int t = 0;
	InitList(ScoreList);
	LoadInf(ScoreList);
 
	while (1)
	{
		Display();
		printf("��ѡ������� ");
		scanf("%d", &Function);
		switch (Function)
		{
		case 1: while (1)
		{
			GetScore(ScoreList);
			printf("�Ƿ�������� ��Y/N��");
			scanf("%s", &flag);
			if (flag == 'N' || flag == 'n')break;
		} 	system("cls"); break;
		case 2: PrintScore(ScoreList);	_getch(); system("cls"); break;
		case 3: ModifyScore(ScoreList);	system("cls"); break;
		case 4: FindInf(ScoreList); _getch(); system("cls"); break;
		case 5: Delete(ScoreList); _getch(); system("cls"); break;
		case 6: Quit(ScoreList); break;
 
		default: printf("Error������ ���������룺");
			break;
		} //switch����
	}
	
	return 0;
}
 
//ϵͳ������ʾ
void Display()
{
	printf("\t\t**********************************************\n");
	printf("\t\t*************��ӭʹ�óɼ�����ϵͳ*************\n");
	printf("\t\t**********************************************\n");
	printf("\t\t\t\t1��¼��ɼ�\n");
	printf("\t\t\t\t2����ӡ�ɼ�\n");
	printf("\t\t\t\t3���޸ĳɼ�\n");
	printf("\t\t\t\t4������ѧ����Ϣ\n");
	printf("\t\t\t\t5��ɾ��ѧ����Ϣ\n");
	printf("\t\t\t\t6���˳�ϵͳ\n");
	printf("\n\n\n\n\n\n");
}
 
//�ɼ�¼��
void GetScore(Lnode *&h)
{
	Lnode *p, *q = h;
	char name[10], id[15];
	int Math, English, Datastruct;
	p = (Lnode *)malloc(sizeof(Lnode));		//Ϊѧ����Ϣ����ڵ�
	printf("����������ѧ����Ϣ��\n");
	printf("���� ѧ�� ��ѧ Ӣ�� ���ݽṹ\n");
	scanf("%s %s %d %d %d", &name, &id, &Math, &English, &Datastruct);
 
	for (; q->next != NULL; q = q->next){;}    //�ƶ���β�ڵ�
	
	strcpy(p->Name, name);
	strcpy(p->ID, id);
	p->Score[0] = Math;
	p->Score[1] = English;
	p->Score[2] = Datastruct;
	p->Ave_Sco = ((float)((p->Score[0] + p->Score[1] + p->Score[2]) - 150)) / 30;
 
	p->next = NULL;
	q->next = p;
	q = p;
}
 
//�ɼ���ӡ
void PrintScore(Lnode *h)
{
 
	Lnode *p = h->next;
	printf("%-14s%-8s%-8s%-8s%-8s%-8s\n","����", "ѧ��", "����", "��ѧ", "Ӣ��", "���ݽṹ", "ƽ������");
	while (p != NULL)
	{
		printf("%-14s%-8s%-8d%-8d%-8d%.2f\n", p->ID, p->Name, p->Score[0], p->Score[1], p->Score[2], p->Ave_Sco);
		p = p->next;
	}
}
 
//�ɼ��޸�
void ModifyScore(Lnode *h)
{
	Lnode *p = h->next;
	char name[10], id[15];
	int Math, English, Datastruct;
	printf("������ѧ��������");
	scanf("%s", name);
	printf("������ѧ��ѧ�ţ�");
	scanf("%s", id);
 
	while (p)
	{
		if (strcmp(p->Name, name)==0 && strcmp(p->ID, id)==0)
		{
			printf("��ǰѧ����Ϣ:\n");
			printf("%-14s%-8s%-8s%-8s%-8s\n", "ѧ��", "����", "��ѧ", "Ӣ��", "���ݽṹ");
			printf("%-14s%-8s%-8d%-8d%-8d\n", p->ID, p->Name, p->Score[0], p->Score[1], p->Score[2]);
			printf("��������������ѧ�ɼ���");
			scanf("%d", &Math);
			printf("������������Ӣ��ɼ���");
			scanf("%d", &English);
			printf("���������������ݽṹ�ɼ���");
			scanf("%d", &Datastruct);
			p->Score[0] = Math;
			p->Score[1] = English;
			p->Score[2] = Datastruct;
			break;
		}
		else
		{
			p = p->next;
		}
	}//whileѭ������
}
 
//��Ϣ����
void FindInf(Lnode *h)
{
	Lnode *p = h->next;
	char name[10], id[15];
	printf("������ѧ��������");
	scanf("%s", name);
	printf("������ѧ��ѧ�ţ�");
	scanf("%s", id);
 
	while (p)
	{
		if (strcmp(p->Name, name) == 0 && strcmp(p->ID, id) == 0)
		{
			printf("��ǰѧ����Ϣ:\n");
			printf("%-14s%-8s%-8s%-8s%-8s\n", "ѧ��", "����", "��ѧ", "Ӣ��", "���ݽṹ");
			printf("%-14s%-8s%-8d%-8d%-8d\n", p->ID, p->Name, p->Score[0], p->Score[1], p->Score[2]);
			break;
		}
		else
		{
			p = p->next;
		}
	}//whileѭ������
}
 
//ɾ��
void Delete(Lnode *h)
{
	Lnode *p = h, *q;
	q = p->next;
	char name[10], id[15];
	printf("������ѧ��������");
	scanf("%s", name);
	printf("������ѧ��ѧ�ţ�");
	scanf("%s", id);
 
	while (q)
	{
		if (strcmp(q->Name, name) == 0 && strcmp(q->ID, id) == 0)
		{
			p->next = q->next;
			free(q);    //ɾ��p�ڵ�		
			printf("ɾ���ɹ�\n");
			break;
		}
		else
		{
			p = p->next;
			q = q->next;
		}
	}//whileѭ������
}
 
//�˳�ϵͳ
void Quit(Lnode *h)
{
	SaveInf(h);    //�˳�ʱ������Ϣ
	exit(0);
}
 
//���ļ�
void LoadInf(Lnode *h)
{
	Lnode *p = h;
	Lnode *q;   //��ʱ���� ���ڱ�����ļ��ж�ȡ����Ϣ
	FILE* file = fopen("./Information.dat", "rb");
	if (!file)
	{
		printf("�ļ���ʧ�ܣ�");
		return ;
	}
 
	//
		ʹ��feof�ж��ļ��Ƿ�Ϊ����Ҫע������⣺
			����ȡ�ļ�����ʱ��feof���������������ñ�־��Ϊ-1������
			��Ҫ�ٶ�ȡһ�κ󣬲Ż����á�����Ҫ�ȶ�һ�Ρ�
	
	q = (Lnode *)malloc(sizeof(Lnode));
	fread(q, sizeof(Lnode), 1, file);
	while (!feof(file))    //һֱ�����ļ�ĩβ
	{
		p->next = q;
		p = q;
		q = (Lnode *)malloc(sizeof(Lnode));
		fread(q, sizeof(Lnode), 1, file);
	} //whileѭ������
 
	p->next = NULL;
	fclose(file);
}
 
//������Ϣ���ļ���
void SaveInf(Lnode *h)
{
	Lnode *p = h->next;
	int flag;
	FILE* file = fopen("./Information.dat", "wb");
	if (!file)
	{
		printf("�ļ���ʧ�ܣ�");
		return;
	}
	while (p != NULL)
	{
		flag = fwrite(p, sizeof(Lnode), 1, file);   //��p������д���ļ���
		if (flag != 1)
		{
			break;
		}
		p = p->next;
	}
	fclose(file);
}*/

/*#include<stdio.h>
int run(int n,int q,int p)
{
	int a=0,b=0,c=0,d=0,e=0;
	if(n<100&&n>10)
		printf("%d",n);
	else if(p>q&&q<=5&&n>=1)
	{
		if(n>100&&n<1000)
		{
			a=n/100;
			b=(n/10)%10;
			c=n%10;
			if(q==1&&p==2)
				printf("%d%d",a,b);
			else if(q==1&&p==3)
				printf("%d%d%d",a,b,c);
			else if(q==2&&p==3)
				printf("%d%d",b,c);
		}
		if(n>=1000&&n<10000)
		{
			a=n/1000;
			b=(n/100)%10;
			c=(n/10)%10;
			d=n%10;
			if(q==1&&p==2)
				printf("%d%d",a,b);
			else if(q==1&&p==3)
				printf("%d%d%d",a,b,c);
			else if(q==1&&p==4)
				printf("%d%d%d%d",a,b,c,d);
			else if(q==2&&p==3)
				printf("%d%d",b,c);
			else if(q==2&&p==4)
				printf("%d%D%d",b,c,d);
			else if(q==3&&p==4)
				printf("%d%d",c,d);
		}
		if(n>=100000&&n<=1000000)
		{
			a=n/10000;
			b=(n/10000)%1000;
			c=(n/1000)%100;
			d=(n%100)/10;
			e=n%10;
			if(q==1&&p==2)
				printf("%d%d",a,b);
			else if(q==1&&p==3)
				printf("%d%d%d",a,b,c);
			else if(q==1&&p==4)
				printf("%d%d%d%d",a,b,c,d);
			else if(q==1&&p==5)
				printf("%d%d%d%d%d%d",a,b,c,d,e);
			else if(q==2&&p==3)
				printf("%d%d",b,c);
			else if(q==2&&p==4)
				printf("%d%D%d",b,c,d);
			else if(q==2&&p==5)
				printf("%d%d%d%d%d",b,c,d,e);
			else if(q==3&&p==4)
				printf("%d%d",c,d);
			else if(q==3&&p==5)
				printf("%d%d%d",c,d,e);
			else if(q==4&&p==5)
				printf("%d%d",d,e);
		}
		return 0;
	}
	else
		printf("error");
		return 1;

}
void main()
{
	int m,x=0,y=0,p,q;
	printf("please enter a number:");
	scanf("%d",&m);
	printf("please enter the star and end(p<q and q<=5 and p>=1):");
	scanf("%d%d",&p,&q);
	run(m,x,y);
}




			

/*#include <stdio.h>
void main()
{
	int i=0,j,k,m,n,t,a[100];
	scanf("%d,m=%d,n=%d",&k,&m,&n);
	while(k)
	{a[i]=k%10;k/=10;i++;}
	for(j=0;j<i/2;j++)
	{t=a[j];a[j]=a[i-j-1];a[i-j-1]=t;}
	if(m<1||m>n||n>i)
	printf("Input error!");
	else
	for(j=m-1;j<n;j++)
	printf("%d",a[j]);
}*/

/*#include <stdio.h>
void main()
{
	int i=0,j,k,m,n,t,a[100];
	printf("please enter a string,the star(m) and end(n)(n<m and m<=5 and n>=1):\n");
	scanf("%d,m=%d,n=%d",&k,&m,&n);
	while(k)
	{	
		a[i]=k%10;k/=10;i++;
	}
	for(j=0;j<i/2;j++)
	{
		t=a[j];a[j]=a[i-j-1];a[i-j-1]=t;	
	}
	for(j=m-1;j<n;j++)
		printf("%d",a[j]);
}*/