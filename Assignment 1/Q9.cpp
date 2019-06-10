#include<stdio.h>
#include<stdlib.h>
void read_and_write(int *a[10],int, int);
void search(int *b[10],int,int);
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
search(a,r,c);
}
void search(int *b[10],int r,int c)
{
	int i,j,item,flag=1;
	printf("Enter the value you want to search = ");
	scanf("%d",&item);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(b[i][j]==item)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
		break;
	}
if(flag==0)
	printf("%d found in row %d column %d",item,i+1,j+1);
else
	printf("Item Not found(FAILURE)");
	
}
