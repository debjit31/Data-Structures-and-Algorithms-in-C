#include<stdio.h>
#include<stdlib.h>
void tree_create(int *a, int n)
{
	int lc,rc,r,j = 0, *tree_array;
	tree_array = (int *)malloc(n*sizeof(int));
	for(r=0;r<n;r++)
	{
		if(r == 0)
		{
			tree_array[r]=a[j];
		}	
		else
		{
			lc = 2*(r-1)+1;
			rc = 2*(r-1)+2;
			if(a[++j]>tree_array[r-1])
				tree_array[rc] = a[j];
			else
				tree_array[lc] = a[j];
		}
	}
	for(r=0;r<n;r++)
		printf("%d\t",tree_array[r]);
}
int main()
{
	int *p, n ,i;
	printf("Enter the number of elements = ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	printf("Enter the numbers : - \n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	tree_create(p,n);
}
