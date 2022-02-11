/*#include<stdio.h>
main()
{
	printf("Hello,world\n");
}*/


/*#include<stdio.h>
main()
{
	printf("hello,");
	printf("world");
	printf("\n");
}*/

/*#include<stdio.h>
main()
{
	int f,c;
	int lower,upper,step;
	lower=0;
	upper=300;
	step=20;
	f=lower;
	while (f<=upper)
	{
		c=5*(f-32)/9;
		printf("%d\t%d\n",f,c);
		f=f+step;
	}
}*/

/*#include<stdio.h>
main()
{
	int fahr;
	for (fahr=0;fahr<=300;fahr=fahr+20)
		printf("%3d%6.1f\n",fahr,(5.0/9.0)*(fahr-32));
}*/


/*#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
main()
{
	int fahr;
	for (fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)
		printf("%3d %6.1f\n",(5.0/9.0)*(fahr-32));
}*/


#include<stdio.h>
main()
{
	int c;
	c=getchar();
	while (c!=

