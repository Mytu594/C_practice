/*#include<stdio.h>
main()
{
	int a,b,c;
	printf("请输入三个整数:");
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
// 获取控制台窗口句柄 微软官方网站的程序 直接拿来用了
HWND GetConsoleHwnd(void)
{
#define MY_BUFSIZE 1024 // Buffer size for console window titles.
HWND hwndFound; // This is what is returned to the caller.
char pszNewWindowTitle[MY_BUFSIZE]; // Contains fabricated
char pszOldWindowTitle[MY_BUFSIZE]; // Contains original

GetConsoleTitle(pszOldWindowTitle, MY_BUFSIZE);//获取控制台标题存入pszOldWindowTitle中
//设置控制台的标题为 时间数 进程ID
wsprintf(pszNewWindowTitle,"%d/%d",//把获取的数目，和当前进程ID输出到缓冲区pszNewwindowtitle中
GetTickCount(),//用于获取操作系统启动后的毫秒数
GetCurrentProcessId());//获取当前进程ID

SetConsoleTitle(pszNewWindowTitle);//更改控制台的标题为新内容

Sleep(40);

hwndFound=FindWindow(NULL, pszNewWindowTitle);//获取控制台的HWND号

SetConsoleTitle(pszOldWindowTitle);//更改控制台的标题为原始内容

return(hwndFound);//返回句柄
}


void drawXY()//绘制X和Y轴
{
HWND hWnd=GetConsoleHwnd();//获取控制台窗口句柄，用于设置画笔颜色
HDC hDC=GetDC(hWnd);
COORD dwSize;//记录窗体大小，用于设定坐标轴远点
HPEN hNewPen=CreatePen(PS_SOLID,1,RGB(255,0,0));//创建画笔对象
HPEN hOldPen=(HPEN)SelectObject(hDC,hNewPen);//选取画笔对象进行绘图
CONSOLE_SCREEN_BUFFER_INFO bInfo; // 窗口信息
HANDLE Hout=GetStdHandle(STD_OUTPUT_HANDLE);//获取控制台句柄
GetConsoleScreenBufferInfo(Hout, &bInfo );//获取控制台信息
dwSize=bInfo.dwMaximumWindowSize ;//获取窗口大小,此时获得的是字符模式下
//从字符到图像放大坐标轴8倍
dwSize.X *=8;
dwSize.Y*=8;
SetBkMode(hDC, TRANSPARENT);SetTextColor(hDC,255*255);
//绘制X轴各个特殊坐标
TextOut(hDC,dwSize.X-15,dwSize.Y/2-15,"X",1);
//Arc(hDC,100,100,300,300,350,500,350,500);//画圆 其中hDC表示画图句柄，100，100，300，300表示所使用的矩形区域，350，500表示画弧线的起点，350，500表明画弧线的终点 ; 
//绘制Y轴各个特殊坐标
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
HWND hWnd=GetConsoleHwnd();//获取控制台窗口句柄，用于设置画笔颜色
HDC hDC=GetDC(hWnd);
COORD dwSize;//记录窗体大小，用于设定坐标轴远点
HPEN hNewPen=CreatePen(PS_SOLID,1,RGB(255,0,0));//创建画笔对象
HPEN hOldPen=(HPEN)SelectObject(hDC,hNewPen);//选取画笔对象进行绘图
CONSOLE_SCREEN_BUFFER_INFO bInfo; // 窗口信息
HANDLE Hout=GetStdHandle(STD_OUTPUT_HANDLE);//获取控制台句柄
GetConsoleScreenBufferInfo(Hout, &bInfo );//获取控制台信息
dwSize=bInfo.dwMaximumWindowSize ;//获取窗口大小,此时获得的是字符模式下
//从字符到图像放大坐标轴8倍
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
else if(i==48){printf("\b\b\b我爱你!");}
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
/***** 宏定义区 ******/
#define NUM13// 烟花种类数量宏定义
#define PI 3.1415926548
/***** 结构定义区 **********/
// 烟花结构
struct FIRE
{
int r;// 当前爆炸半径
int max_r;// 爆炸中心距离边缘最大半径
int x, y;// 爆炸中心在窗口的坐标
int cen_x, cen_y;// 爆炸中心相对图片左上角的坐标
int width, height;// 图片的宽高
int xy[240][240];// 储存图片像素点
bool show;// 是否绽放
bool draw;// 开始输出像素点
DWORD t1, t2, dt;// 绽放速度
}Fire[NUM];
// 烟花弹结构
struct JET
{
int x, y;// 喷射点坐标
int hx, hy;// 最高点坐标------将赋值给 FIRE 里面的 x, y
int height;// 烟花高度
bool shoot;// 是否可以发射
DWORD t1, t2, dt;// 发射速度
IMAGE img[2];// 储存花弹一亮一暗图片
byte n : 1;// 图片下标
}Jet[NUM];
/**** 函数申明区 ****/
void welcome();
void Init(int);// 初始化烟花
void Load();// 加载烟花图片
void Shoot();// 发射烟花
void Chose(DWORD&);// 筛选烟花
void Style(DWORD&);// 发射样式
void Show(DWORD*);// 绽放烟花
// 主函数
void main()
{
initgraph(1200, 800);
srand(time(0));
// 播放背景音乐
mciSendString("open ./fire/小幸运.mp3 alias bk", 0, 0, 0);
mciSendString("play bk repeat", 0, 0, 0);
welcome();
DWORD t1 = timeGetTime();// 筛选烟花计时
DWORD st1 = timeGetTime();// 播放花样计时
DWORD* pMem = GetImageBuffer();// 获取窗口显存指针
for (int i = 0; i < NUM; i++)// 初始化烟花
{
Init(i);
}
Load();// 将烟花图片信息加载进相应结构中
BeginBatchDraw();// 开始批量绘图
while (!kbhit())
{
Sleep(10);
// 随机选择 4000 个像素点擦除
for (int clr = 0; clr < 1000; clr++)
{
for (int j = 0; j < 2; j++)
{
int px1 = rand() % 1200;
int py1 = rand() % 800;
if (py1 < 799)// 防止越界
pMem[py1 * 1200 + px1] = pMem[py1 * 1200 + px1 + 1] = BLACK;// 对显存赋值擦出像素点
}
}
Chose(t1);// 筛选烟花
Shoot();// 发射烟花
Show(pMem);// 绽放烟花
Style(st1);// 花样发射
FlushBatchDraw();// 显示前面的所有绘图操作
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
settextstyle(i, 0, "楷体");
outtextxy(x, y, "双十一,不剁手!");
outtextxy(x-130, y+100, "写段代码送女友！");
Sleep(25);
}
getchar();
cleardevice();
settextstyle(25, 0, "楷体");
outtextxy(400, 200, "原来你是我最想留住的幸运");
outtextxy(400, 250, "原来我们和爱情曾经靠得那么近");
outtextxy(400, 300, "那为我对抗世界的决定");
outtextxy(400, 350, "那陪我淋的雨");
outtextxy(400, 400, "一幕幕都是你");
outtextxy(400, 450, "一尘不染的真心。");
outtextxy(600, 500, "----《小幸运》");
getchar();
}


