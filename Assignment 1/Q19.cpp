#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	char *p[20];
	int n,i;
	printf("Enter the size of the array = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i] = (char *)malloc(n*sizeof(char));
	}
	printf("Enter the names of the days of a week\n");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		gets(p[i]);
	}
	printf("The array elements are\n");
	for(i=0;i<n;i++)
	{
		puts(p[i]);
		printf("\n");
	}
}
