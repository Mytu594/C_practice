/*#include<stdio.h>
main()
{
	int a,b,c;
	printf("��������������:");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d,%d,%d",a,b,c);
}*/


/*#include<stdio.h>
main()
{
	int c;
	c=getchar();
	while(c!=EOF)
	{
		putchar(c);
		c=getchar();
	}
}*/


/*#include<stdio.h>
main()
{
	int c;
	while((c=getchar())!=EOF)
		putchar(c);
}*/
#include<stdio.h>


/*int main()
{
	int x,y;
	for(float y=1.5f;y>-1.5f;y-=0.1f)
	{
		for(float x=-1.5f;x<1.5f;x+=0.05f)
		{
			float a=x*x+y*y-1;
			putchar(a*a*a-x*x*y*y*y<=0.0f ? '*' :' ');
		}
		putchar('\n');
	}
}*/
/*#include<stdio.h>
int main()

{
	float x,y;
	for(float y=1.5f;y>-1.5f;y-=0.1f)
	{
		for(float x=-1.5f;x<1.5f;x+=0.05f)
		{
			float z=x*x+y*y-1;
			float f=z*z*z-x*x*y*y*y;
			putchar(f<=0.0f?".:-=+*%@"[(int)(f*-8.0f)]:' ');
		}
		putchar('\n');
	}
}*/

/*#include <stdio.h>

#include <math.h>

float f(float x, float y, float z) {
    float a;
a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
    return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}

float h(float x, float z) {
float y;
    for ( y = 1.0f; y >= 0.0f; y -= 0.001f)
        if (f(x, y, z) <= 0.0f)
            return y;
    return 0.0f;
}

void main() {
float z,x,v,y0,ny,nx,nz,nd,d;
    for ( z = 1.5f; z > -1.5f; z -= 0.05f) {
        for ( x = -1.5f; x < 1.5f; x += 0.025f) {
             v = f(x, 0.0f, z);
            if (v <= 0.0f) {
                 y0 = h(x, z);
                 ny = 0.01f;
                 nx = h(x + ny, z) - y0;
                 nz = h(x, z + ny) - y0;
                 nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
                 d = (nx + ny - nz) * nd * 0.5f + 0.5f;
                putchar(".:-=+*#%@"[(int)(d * 5.0f)]);
            }
            else
                putchar(' ');
        }
        putchar('\n');
    }
}*/

/*#include<stdio.h>
#include<math.h>
#include<windows.h>
int main()
{
	float x,y,z,f;
	for(y=1.5f;y>-1.5f;y-=0.1f)
	{
		for(x=-1.5f;x<1.5f;x+=0.05f)
		{
			z=x*x+y*y-1;
			f=z*z*z-x*x*y*y*y;
			putchar(f<=0.0f?".:-=*#%a"[(int)(f*-8.0f)]:' ');
		}
		putchar('\n');
	}
	getchar();
	return 0;
}*/

/*#include<stdio.h>
#include<math.h>
#include<windows.h>
// ��ȡ����̨���ھ�� ΢��ٷ���վ�ĳ��� ֱ����������
HWND GetConsoleHwnd(void)
{
#define MY_BUFSIZE 1024 // Buffer size for console window titles.
HWND hwndFound; // This is what is returned to the caller.
char pszNewWindowTitle[MY_BUFSIZE]; // Contains fabricated
char pszOldWindowTitle[MY_BUFSIZE]; // Contains original

GetConsoleTitle(pszOldWindowTitle, MY_BUFSIZE);//��ȡ����̨�������pszOldWindowTitle��
//���ÿ���̨�ı���Ϊ ʱ���� ����ID
wsprintf(pszNewWindowTitle,"%d/%d",//�ѻ�ȡ����Ŀ���͵�ǰ����ID�����������pszNewwindowtitle��
GetTickCount(),//���ڻ�ȡ����ϵͳ������ĺ�����
GetCurrentProcessId());//��ȡ��ǰ����ID

SetConsoleTitle(pszNewWindowTitle);//���Ŀ���̨�ı���Ϊ������

Sleep(40);

hwndFound=FindWindow(NULL, pszNewWindowTitle);//��ȡ����̨��HWND��

SetConsoleTitle(pszOldWindowTitle);//���Ŀ���̨�ı���Ϊԭʼ����

return(hwndFound);//���ؾ��
}


void drawXY()//����X��Y��
{
HWND hWnd=GetConsoleHwnd();//��ȡ����̨���ھ�����������û�����ɫ
HDC hDC=GetDC(hWnd);
COORD dwSize;//��¼�����С�������趨������Զ��
HPEN hNewPen=CreatePen(PS_SOLID,1,RGB(255,0,0));//�������ʶ���
HPEN hOldPen=(HPEN)SelectObject(hDC,hNewPen);//ѡȡ���ʶ�����л�ͼ
CONSOLE_SCREEN_BUFFER_INFO bInfo; // ������Ϣ
HANDLE Hout=GetStdHandle(STD_OUTPUT_HANDLE);//��ȡ����̨���
GetConsoleScreenBufferInfo(Hout, &bInfo );//��ȡ����̨��Ϣ
dwSize=bInfo.dwMaximumWindowSize ;//��ȡ���ڴ�С,��ʱ��õ����ַ�ģʽ��
//���ַ���ͼ��Ŵ�������8��
dwSize.X *=8;
dwSize.Y*=8;
SetBkMode(hDC, TRANSPARENT);SetTextColor(hDC,255*255);
//����X�������������
TextOut(hDC,dwSize.X-15,dwSize.Y/2-15,"X",1);
//Arc(hDC,100,100,300,300,350,500,350,500);//��Բ ����hDC��ʾ��ͼ�����100��100��300��300��ʾ��ʹ�õľ�������350��500��ʾ�����ߵ���㣬350��500���������ߵ��յ� ; 
//����Y�������������
TextOut(hDC,dwSize.X/2,0,"Y",1);
MoveToEx(hDC,0,dwSize.Y /2,NULL);
LineTo(hDC,dwSize.X,dwSize.Y/2);
MoveToEx(hDC,dwSize.X/2,0,NULL);
LineTo(hDC,dwSize.X/2,dwSize.Y);
ReleaseDC(hWnd,hDC); 
}
void draw(double p)
{
int i;
double x,y;
HWND hWnd=GetConsoleHwnd();//��ȡ����̨���ھ�����������û�����ɫ
HDC hDC=GetDC(hWnd);
COORD dwSize;//��¼�����С�������趨������Զ��
HPEN hNewPen=CreatePen(PS_SOLID,1,RGB(255,0,0));//�������ʶ���
HPEN hOldPen=(HPEN)SelectObject(hDC,hNewPen);//ѡȡ���ʶ�����л�ͼ
CONSOLE_SCREEN_BUFFER_INFO bInfo; // ������Ϣ
HANDLE Hout=GetStdHandle(STD_OUTPUT_HANDLE);//��ȡ����̨���
GetConsoleScreenBufferInfo(Hout, &bInfo );//��ȡ����̨��Ϣ
dwSize=bInfo.dwMaximumWindowSize ;//��ȡ���ڴ�С,��ʱ��õ����ַ�ģʽ��
//���ַ���ͼ��Ŵ�������8��
dwSize.X *=8;
dwSize.Y*=8;
//MoveToEx(hDC,0,dwSize.Y/2,NULL);
for(i=-180;i<=180;i++)
{
x=16*pow(sin(i*3.1415926/180),3.0)*p;
y=(13*cos(i*3.1415926/180)-5*cos(2*i*3.1415926/180)-2*cos(3*i*3.1415926/180)-cos(4*i*3.1415926/180))*p;


x=(x+16)*dwSize.X/32/2+dwSize.X/4;
y=-y/16*dwSize.Y/2.3+dwSize.Y/2;


x=x;
y=y;
MoveToEx(hDC,x,y,NULL);
LineTo(hDC,x+1,y+1);


}
}


void main()
{
double p;
drawXY();
for(p=0.6;p<=1;p=p+0.01)
draw(p);
system("PAUSE");
}*/
/*#include<stdio.h>
int n;
void draw(int n)
{
int i,j;
for (i=1-(n>>1);i<=n;i++)
if (i>=0)
{
for (j=0;j<i;j++) printf(" ");
for (j=1;j<=2*(n-i)+1;j++) printf(" *");
printf("\n");
}
else
{
for (j=i;j<0;j++) printf(" ");
for (j=1;j<=n+2*i+1;j++) printf(" *");
for (j=1;j<=-1-2*i;j++) printf(" ");
for (j=1;j<=n+2*i+1;j++) printf(" *");
printf("\n");
}
}
int main()
{
printf("Please input the size (n>=4):");
scanf("%d",&n);
draw(n);
return 0;
}*/

/*#include<stdio.h>
int n;
void draw(int n)
{
int i,j;
for (i=1-(n>>1);i<=n;i++)
if (i>0)
{
for (j=0;j<i;j++) printf(" ");
for (j=1;j<=2*(n-i)+1;j++)
if (j==1||j==2*(n-i)+1) printf(" *");
else printf(" ");
printf("\n");
}
else
if (i==0)
{
printf(" *");
for (j=1;j<n;j++) printf(" ");
printf(" *");
for (j=1;j<n;j++) printf(" ");
printf(" *\n");
}
else
{
for (j=i;j<0;j++) printf(" ");
for (j=1;j<=n+2*i+1;j++)
if (i==1-(n>>1)) printf(" *");
else if (j==1||j==n+2*i+1) printf(" *");
else printf(" ");
for (j=1;j<=-1-2*i;j++) printf(" ");
for (j=1;j<=n+2*i+1;j++)
if (i==1-(n>>1)) printf(" *");
else if (j==1||j==n+2*i+1) printf(" *");
else printf(" ");
printf("\n");
}
}
int main()
{
printf("Please input the size (n>=4):");
scanf("%d",&n);
draw(n);
return 0;
}*/

/*# include <stdio.h>
# include <math.h>


# define U 0.06
# define V 0.025


# define M 1.1
# define N 1.2


int main(void)
{
float x, y;
float m, n;


for ( y=2; y>=-2; y-=U )
{ 
for ( x=-1.2; x<=1.2; x+=V)
{
if ( ( ( (x*x + y*y - 1)*(x*x + y*y - 1)*(x*x + y*y - 1) - x*x*y*y*y ) <= 0 ) )
printf("*");
else
printf(" ");
}
printf("\n");
}
getchar();


return 0;
}*/

/*#include<stdio.h>
#include<math.h>
#define I 8
#define R 150
int main()
{
int i,j,e;
int a;
int t1;
for(i=1,a=I;i<=I/2;i++,a--){
t1=6;
while(t1--)printf(" ");
for(j=(int) ( I-sqrt(I*I-(a-i)*(a-i)) );j>0;j--)
printf(" ");
for(e=1;e<=2*sqrt(I*I-(a-i)*(a-i));e++)
printf("*");
for(j=(int) ( 2*( I-sqrt(I*I-(a-i)*(a-i)) ) );j>0;j--)
printf(" ");
for(e=1;e<=2*sqrt(I*I-(a-i)*(a-i));e++)
printf("*");
for(j=(int) ( I-sqrt(I*I-(a-i)*(a-i)) );j>0;j--)
printf(" ");
t1= (int) ( I-sqrt(I*I-(a-i)*(a-i)) ) ;
t1= 2*t1;
t1+=(int) ( 2*sqrt(I*I-(a-i)*(a-i)) );
t1=20-t1;
while(t1--) printf(" ");
for(j=(int) ( I-sqrt(I*I-(a-i)*(a-i)) );j>0;j--)
printf(" ");
for(e=1;e<=2*sqrt(I*I-(a-i)*(a-i));e++)
printf("*");
for(j=(int) ( 2*( I-sqrt(I*I-(a-i)*(a-i)) ) );j>0;j--)
printf(" ");
for(e=1;e<=2*sqrt(I*I-(a-i)*(a-i));e++)
printf("*");
for(j=(int) ( I-sqrt(I*I-(a-i)*(a-i)) );j>0;j--)
printf(" ");
printf("\n");
}
for(i=1;i<=R/2;i++){
if(i%2||i%3)continue;
t1=6;
if(i==6)printf(">>----");
else while(t1--)printf(" ");
for(j=(int) ( R-sqrt(R*R-i*i) );j>0;j--)
printf(" ");
for(e=1;e<=2*( sqrt(R*R-i*i) - (R-2*I) );e++)
printf("*");
for(j=(int) ( R-sqrt(R*R-i*i) );j>0;j--)
printf(" ");
t1= (int)( R-sqrt(R*R-i*i) );
t1=2*t1;
t1+= (int)(2*( sqrt(R*R-i*i) - (R-2*I) ));
t1=35-t1;
if(i==6){printf("LOVE");}
else if(i==48){printf("\b\b\b�Ұ���!");}
else
while(t1--) printf(" ");
for(j=(int) ( R-sqrt(R*R-i*i) );j>0;j--)
printf(" ");
for(e=1;e<=2*( sqrt(R*R-i*i) - (R-2*I) );e++)
printf("*");
for(j=(int) ( R-sqrt(R*R-i*i) );j>0;j--)
printf(" ");
if(i==6)printf("----->");
printf("\n");
}
return 0;
}*/



#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <Mmsystem.h>
#pragma comment ( lib, "Winmm.lib" )
/***** �궨���� ******/
#define NUM13// �̻����������궨��
#define PI 3.1415926548
/***** �ṹ������ **********/
// �̻��ṹ
struct FIRE
{
int r;// ��ǰ��ը�뾶
int max_r;// ��ը���ľ����Ե���뾶
int x, y;// ��ը�����ڴ��ڵ�����
int cen_x, cen_y;// ��ը�������ͼƬ���Ͻǵ�����
int width, height;// ͼƬ�Ŀ��
int xy[240][240];// ����ͼƬ���ص�
bool show;// �Ƿ�����
bool draw;// ��ʼ������ص�
DWORD t1, t2, dt;// �����ٶ�
}Fire[NUM];
// �̻����ṹ
struct JET
{
int x, y;// ���������
int hx, hy;// ��ߵ�����------����ֵ�� FIRE ����� x, y
int height;// �̻��߶�
bool shoot;// �Ƿ���Է���
DWORD t1, t2, dt;// �����ٶ�
IMAGE img[2];// ���滨��һ��һ��ͼƬ
byte n : 1;// ͼƬ�±�
}Jet[NUM];
/**** ���������� ****/
void welcome();
void Init(int);// ��ʼ���̻�
void Load();// �����̻�ͼƬ
void Shoot();// �����̻�
void Chose(DWORD&);// ɸѡ�̻�
void Style(DWORD&);// ������ʽ
void Show(DWORD*);// �����̻�
// ������
void main()
{
initgraph(1200, 800);
srand(time(0));
// ���ű�������
mciSendString("open ./fire/С����.mp3 alias bk", 0, 0, 0);
mciSendString("play bk repeat", 0, 0, 0);
welcome();
DWORD t1 = timeGetTime();// ɸѡ�̻���ʱ
DWORD st1 = timeGetTime();// ���Ż�����ʱ
DWORD* pMem = GetImageBuffer();// ��ȡ�����Դ�ָ��
for (int i = 0; i < NUM; i++)// ��ʼ���̻�
{
Init(i);
}
Load();// ���̻�ͼƬ��Ϣ���ؽ���Ӧ�ṹ��
BeginBatchDraw();// ��ʼ������ͼ
while (!kbhit())
{
Sleep(10);
// ���ѡ�� 4000 �����ص����
for (int clr = 0; clr < 1000; clr++)
{
for (int j = 0; j < 2; j++)
{
int px1 = rand() % 1200;
int py1 = rand() % 800;
if (py1 < 799)// ��ֹԽ��
pMem[py1 * 1200 + px1] = pMem[py1 * 1200 + px1 + 1] = BLACK;// ���Դ渳ֵ�������ص�
}
}
Chose(t1);// ɸѡ�̻�
Shoot();// �����̻�
Show(pMem);// �����̻�
Style(st1);// ��������
FlushBatchDraw();// ��ʾǰ������л�ͼ����
}
}
void welcome()
{
//setfillstyle(0);
setcolor(YELLOW);
for (int i = 0; i < 50; i++)
{
int x = 600 + int(180 * sin(PI * 2 * i / 60));
int y = 200 + int(180 * cos(PI * 2 * i / 60));
cleardevice();
settextstyle(i, 0, "����");
outtextxy(x, y, "˫ʮһ,������!");
outtextxy(x-130, y+100, "д�δ�����Ů�ѣ�");
Sleep(25);
}
getchar();
cleardevice();
settextstyle(25, 0, "����");
outtextxy(400, 200, "ԭ��������������ס������");
outtextxy(400, 250, "ԭ�����ǺͰ�������������ô��");
outtextxy(400, 300, "��Ϊ�ҶԿ�����ľ���");
outtextxy(400, 350, "�������ܵ���");
outtextxy(400, 400, "һĻĻ������");
outtextxy(400, 450, "һ����Ⱦ�����ġ�");
outtextxy(600, 500, "----��С���ˡ�");
getchar();
}


