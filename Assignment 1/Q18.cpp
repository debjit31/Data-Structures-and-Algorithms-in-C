#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *p[20];
	int r,c,i,j,len;
	printf("Enter the no. of rows  = ");
	scanf("%d",&r);
	printf("Enter the no. of columns = ");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		p[i] = (char *)malloc(c*sizeof(char));
	}
	printf("Enter the names\n");
	for(i=0;i<r;i++)
	{
		fflush(stdin);
		gets(p[i]);
	}
	printf("The array elements are\n");
	for(i=0;i<r;i++)
	{
		puts(p[i]);
		len=strlen(p[i]);
		printf("\t%d",len);
		printf("\n");
	}
}
