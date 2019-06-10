#include<stdio.h>
#include<stdlib.h>
void read_and_write(int *a[10],int, int);
void maximum(int *b[10],int,int);
int main()
{
	int *p[10],r,c,i,j;
	printf("Enter the number of rows = ");
	scanf("%d",&r);
	printf("Enter the number of columns = ");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		p[i]=(int *)malloc(c*sizeof(int));
	}
	read_and_write(p,r,c);
}
void read_and_write(int *a[10],int r, int c)
{
	int i,j;
	printf("Enter the elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",(a[i]+j));
		}
	}
	printf("The elements in the matrix are:-\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
    		printf("%d\t",*(a[i]+j));
		}
		printf("\n");
	}
maximum(a,r,c);
}
void maximum(int *b[10],int r,int c)
{
	int i,j,max;
	max = b[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(b[i][j]>max)
				max = b[i][j];
		}
	}
	printf("The maximum elemnent is = %d",max);
}

