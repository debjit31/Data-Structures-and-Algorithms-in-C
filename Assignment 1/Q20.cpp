#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int *p[20];
	int n,i,j;
	printf("Enter the no. of ID array = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i] = (int *)malloc(n*sizeof(int));
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the data for ID array %d :-\n",(i+1));
		for(j=0;j<n;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	printf("The array elements are\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
}
