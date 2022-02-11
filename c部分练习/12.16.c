/*#include <stdio.h>
#include <math.h>

void main()
{
	int tg[49][49];
	int i,j;
	int neighbor[49];
	int k;
	int adj[49][4];
	int edge[168][2];
	int turn[500][3];
	int m;
	int n=0;
	int fp;
	for(i=0;i<49;i++)
	{
		for(j=0;j<49;j++)
		{
			if ((abs(i-j)==7)||(abs(i-j)==1)&&(i/7==j/7))
				tg[i][j]=1;
			else 
				tg[i][j]=0;
		}
	}
	FILE *fp;
	fp=fopen("data.txt","w");
	if(fp==NULL)
	{
		printf("creat file fail\n");
			return;
	}
	for (i=0;i<49;i++)
	{
		fprintf (fp,"<%d>",i+1);
		for(j=0;j<49;j++)
		{
			fprintf(fp,"%d ",tg[i][j]);
		}
			fprintf(fp,"\n");
	}
	fclose(fp);



	
	for(i=0;i<49;i++)
	{
		if((i%7<6&&i%7>0)&&(i/7<6&&i/7>0))
			neighbor[i]=4;
		else if ((i%7==6||i%7==0)&&(i/7==6||i/7==0))
			neighbor[i]=2;
		else
			neighbor[i]=3;
	}
	
	for(i=0;i<49;i++)
	{
		for(j=0,k=0;j<49;j++)
		{
			if(tg[i][j]==1)
			{
				adj[i][k]=j;
				k++;
			}
		}
	}
	fp=fopen("data.txt","a");
	if (fp==NULL)
	{
		printf("open file failed\n");
		return;
	}
	for(i=0;i<49;i++)
	{	
		fprintf(fp,"<%d>",i+1);
		for(j=0;j<neighbor[i];j++)
		{
			fprintf(fp,"%d ",adj[i][j]);

		}
		fprintf(fp,"\n");
	}
	fclose(fp);



	
	for(i=0,k=0;i<49;i++)
	{
		for(j=0;j<49;j++)
		{
			if(tg[i][j]==1)
			{
				edge[k][0]=i;
				edge[k][1]=j;
				k++;
			}
		}
	}
	fp=fopen("data.txt","a");
	if(fp==NULL)
	{
		printf("creat file failed\n");
		return;
	}
	char d[2];
	for(i=0;i<k;i++)
	{
		switch(edge[i][0]-edge[i][1])
		{
			case 7:d[0]='N';break;
			case -7:d[0]='S';break;
			case -1:d[0]='E';break;
			case 1:d[0]='W';break;
		}
		fprintf(fp,"<%d>%d-%d %c ",i+1,edge[i][0],edge[i][1],d[0]);
		fprintf(fp,"\n");
	}
	fclose(fp);



	fp=fopen("data.txt","a");
	if(fp==NULL)
	{
		printf("open file failed\n");
		return;
	}
	
	for(i=0,k=0;i<49;i++)
	{
		for(j=0;j<49;j++)
		{
			if (tg[i][j]==1)
				k++;
		}
	}
	
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if((edge[i][1]==edge[j][0])&&((abs(edge[i][0]-edge[j][1])==8)||(abs(edge[i][0]-edge[j][1])==6)))
				n++;
		}
	}
	k=n;
	for(i=0,m=0;m<k;m++)
	{
		for(n=0;n<k;n++)
		{
			if((edge[m][1]==edge[n][0])&&((abs(edge[m][0]-edge[n][1])==8)||(abs(edge[m][0]-edge[n][1])==6)))
			{
				turn[i][0]=edge[m][0];
				turn[i][1]=edge[m][1];
				turn[i][2]=edge[n][1];
				i++;
			}
		}
	}
	for(i=0,k=n;i<k;i++)
	{
		switch(turn[i][0]-turn[i][1])
		{
			case 7:d[0]='N';break;
			case -7:d[0]='S';break;
			case -1:d[0]='E';break;
			case 1:d[0]='W';break;
		}
		if(turn[i][0]-turn[i][1]==7||turn[i][0]-turn[i][1]==-7)
		{
			switch(turn[i][1]-turn[i][2])
			{
				case -1:d[1]='E';break;
				case 1:d[1]='W';break;
			}
		}
		else
		{
			switch(turn[i][1]-turn[i][2])
			{
				case 7:d[1]='N';break;
				case -7:d[1]='S';break;
			}
		}
		fprintf (fp,"<%d>",i+1);
		fprintf (fp,"%d-%d-%d %c%c ",turn[i][0],turn[i][1],turn[i][2],d[0],d[1]);
		fprintf (fp,"\n");
	}
	fclose(fp);	
}*/

